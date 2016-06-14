//
//  NSManagedObject+Extensions.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <CoreData/CoreData.h>
#import "NSManagedObjectContext+Extensions.h"

@interface NSManagedObject (Extensions)

+ (id)create:(NSManagedObjectContext*)context;
+ (id)create:(NSDictionary*)dict inContext:(NSManagedObjectContext*)context;
+ (id)find:(NSPredicate *)predicate inContext:(NSManagedObjectContext *)context;
+ (id)find:(NSPredicate *)predicate sortDescriptors:(NSArray*)sortDescriptors inContext:(NSManagedObjectContext *)context;
+ (NSArray*)all:(NSPredicate *)predicate inContext:(NSManagedObjectContext *)context;
+ (NSArray*)all:(NSPredicate *)predicate sortDescriptors:(NSArray*)sortDescriptors inContext:(NSManagedObjectContext *)context;
+ (NSUInteger)count:(NSPredicate *)predicate inContext:(NSManagedObjectContext *)contex;
+ (NSString *)entityName;
+ (NSError*)deleteAll:(NSManagedObjectContext*)context;

@end
