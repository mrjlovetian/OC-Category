//
//  GON_NSManagedObjectContext+FetchRequestsConstructors.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface NSManagedObjectContext(FetchRequestsConstructors)
/* Create fetch request to fetch one object using given key and value. Usefull to fetch objects on their uid key  */
- (NSFetchRequest*)fetchRequestForEntityObject:(NSString*)entityName usingValue:(id)value forKey:(NSString*)key returningAsFault:(BOOL)fault;

/* Create fetch request to fetch one object using given predicate 
 */
- (NSFetchRequest*)fetchRequestForEntityObject:(NSString*)entityName usingPredicate:(NSPredicate*)predicate returningAsFault:(BOOL)fault;

/* Create fetch request to fetch all objects for given entity.
 */
- (NSFetchRequest*)fetchRequestForEntityObjects:(NSString*)entityName returningAsFault:(BOOL)fault;

/* Create fetch request to fetch all objects using given predicate
 */
- (NSFetchRequest*)fetchRequestForEntityObjects:(NSString*)entityName usingPredicate:(NSPredicate*)predicate returningAsFault:(BOOL)fault;

/* Create fetch request to fetch all objects for given entity and sort them.
 */
- (NSFetchRequest*)fetchRequestForEntityObjects:(NSString*)entityName usingSortDescriptors:(NSArray*)sortDescriptors returningAsFault:(BOOL)fault;

/* Create fetch request to fetch all objects for given entity, using predicate and sort them.
 */
- (NSFetchRequest*)fetchRequestForEntityObjects:(NSString*)entityName usingPredicate:(NSPredicate*)predicate usingSortDescriptors:(NSArray*)sortDescriptors returningAsFault:(BOOL)fault;

@end
