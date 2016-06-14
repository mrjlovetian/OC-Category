//
//  NSManagedObject+KRDictionaryExport
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface NSManagedObject (Dictionary)
/**
 *  @author Categories
 *
 *  toDictionary
 *
 *  @return <#return value description#>
 */
- (NSDictionary *)toDictionary;
//http://stackoverflow.com/questions/5664423/storing-nsmanagedobject-in-a-dictionary-nsdictionary
/**
 *  @author Categories
 *
 *  dictionary
 *
 *  @return <#return value description#>
 */
- (NSDictionary *)dictionary;
@end
