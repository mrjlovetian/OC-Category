//
//  UINavigationItem+Lock.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationItem (Lock)
/**
 *  @brief  锁定RightItem
 *
 *  @param lock 是否锁定
 */
- (void)lockRightItem:(BOOL)lock;
/**
 *  @brief  锁定LeftItem
 *
 *  @param lock 是否锁定
 */
- (void)lockLeftItem:(BOOL)lock;
@end
