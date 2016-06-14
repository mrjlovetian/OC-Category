//
//  NSIndexPath+Offset.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>
@interface NSIndexPath (Offset)
/**
 *  @author Categories
 *
 *  Compute previous row indexpath
 *
 */
- (NSIndexPath *)previousRow;
/**
 *  @author Categories
 *
 *  Compute next row indexpath
 *
 */
- (NSIndexPath *)nextRow;
/**
 *  @author Categories
 *
 *  Compute previous item indexpath
 *
 */
- (NSIndexPath *)previousItem;
/**
 *  @author Categories
 *
 *  Compute next item indexpath
 *
 */
- (NSIndexPath *)nextItem;
/**
 *  @author Categories
 *
 *  Compute next section indexpath
 *
 */
- (NSIndexPath *)nextSection;
/**
 *  @author Categories
 *
 *  Compute previous section indexpath
 *
 */
- (NSIndexPath *)previousSection;

@end
