//
//  NSManagedObject+KRDictionaryExport
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//
#import <objc/runtime.h>
#import "NSManagedObject+Dictionary.h"

@implementation NSManagedObject (Dictionaryt)

- (NSDictionary *)toDictionary {
    unsigned int count;
    
    objc_property_t *properties = class_copyPropertyList([self class], &count);
    NSMutableDictionary *dictionary = [NSMutableDictionary dictionary];
        
    for (int i = 0; i<count; i++) {
        objc_property_t property = properties[i];
        NSString *name = [NSString stringWithCString:property_getName(property) encoding:NSUTF8StringEncoding];
        id obj = [self valueForKey:name];
        if (obj) {
            
            if (![[obj class] isSubclassOfClass:[NSData class]]) {
                if ([[obj class] isSubclassOfClass:[NSManagedObject class]]) {
                    
                    NSArray *relationships = [[obj entity] relationshipsWithDestinationEntity:[self entity]];
                    if ([relationships count] > 0) {
                        NSString *relName = [[relationships objectAtIndex:0] name];

                        NSDictionary *namedRelationships = [[obj entity] relationshipsByName];
                        BOOL isParent = [[[(NSRelationshipDescription *)[namedRelationships objectForKey:relName] destinationEntity] name] isEqualToString:NSStringFromClass([self class])];
                        if (!isParent)
                            [dictionary setObject:[(NSManagedObject *)obj toDictionary] forKey:name];
                    }
                    else {
                        [dictionary setObject:[(NSManagedObject *)obj toDictionary] forKey:name];
                    }
                }
                else if ([[obj class] isSubclassOfClass:[NSSet class]]) {
                    if ([obj count] > 0) {
                        NSArray *array = [(NSSet *)obj allObjects];
                        NSMutableArray *mutableArray = [NSMutableArray arrayWithCapacity:[array count]];
                        for (id o in array)
                            [mutableArray addObject:[(NSManagedObject *)o toDictionary]];
                        
                        [dictionary setObject:[NSArray arrayWithArray:mutableArray] forKey:name];
                    }
                }
                else if ([[obj class] isSubclassOfClass:[NSDate class]]) {
                    [dictionary setObject:[obj description] forKey:name];
                }
                else {
                    [dictionary setObject:obj forKey:name];
                }
            }
        }
    }
    free(properties);
    
    return dictionary;
}
- (NSDictionary *)dictionary{
    NSArray *keys = [[[self entity] attributesByName] allKeys];
    NSDictionary *dict = [self dictionaryWithValuesForKeys:keys];
    return dict;
}
@end
