//
//  GON_NSManagedObjectContext+ObjectClear.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface NSManagedObjectContext (ObjectClear)
/* Delete all given objects*/
- (void)deleteObjects:(id <NSFastEnumeration>)objects;
@end
