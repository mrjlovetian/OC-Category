//
//  GON_NSManagedObjectContext+ObjectClear.m
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//


#import "NSManagedObjectContext+ObjectClear.h"

@implementation NSManagedObjectContext (ObjectClear)
#pragma mark - Utils
- (void)deleteObjects:(id <NSFastEnumeration>)objects
{
    for (id obj in objects)
        [self deleteObject:obj];
}
@end