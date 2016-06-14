//
//  UIView+Recursion.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^SubviewBlock) (UIView* view);
typedef void (^SuperviewBlock) (UIView* superview);
@interface UIView (Recursion)

/**
 *  @brief  寻找子视图
 *
 *  @param recurse 回调
 *
 *  @return  Return YES from the block to recurse into the subview.
 Set stop to YES to return the subview.
 */
- (UIView*)findViewRecursively:(BOOL(^)(UIView* subview, BOOL* stop))recurse;


-(void)runBlockOnAllSubviews:(SubviewBlock)block;
-(void)runBlockOnAllSuperviews:(SuperviewBlock)block;
-(void)enableAllControlsInViewHierarchy;
-(void)disableAllControlsInViewHierarchy;
@end
