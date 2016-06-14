//
//  UIView+Recursion.m
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import "UIView+Recursion.h"

@implementation UIView (Recursion)
/**
 *  @brief  寻找子视图
 *
 *  @param recurse 回调
 *
 *  @return  Return YES from the block to recurse into the subview.
 Set stop to YES to return the subview.
 */
- (UIView*)findViewRecursively:(BOOL(^)(UIView* subview, BOOL* stop))recurse
{
    for( UIView* subview in self.subviews ) {
        BOOL stop = NO;
        if( recurse( subview, &stop ) ) {
            return [subview findViewRecursively:recurse];
        } else if( stop ) {
            return subview;
        }
    }
    
    return nil;
}


-(void)runBlockOnAllSubviews:(SubviewBlock)block
{
    block(self);
    for (UIView* view in [self subviews])
    {
        [view runBlockOnAllSubviews:block];
    }
}

-(void)runBlockOnAllSuperviews:(SuperviewBlock)block
{
    block(self);
    if (self.superview)
    {
        [self.superview runBlockOnAllSuperviews:block];
    }
}

-(void)enableAllControlsInViewHierarchy
{
    [self runBlockOnAllSubviews:^(UIView *view) {
        
        if ([view isKindOfClass:[UIControl class]])
        {
            [(UIControl *)view setEnabled:YES];
        }
        else if ([view isKindOfClass:[UITextView class]])
        {
            [(UITextView *)view setEditable:YES];
        }
    }];
}

-(void)disableAllControlsInViewHierarchy
{
    [self runBlockOnAllSubviews:^(UIView *view) {
        
        if ([view isKindOfClass:[UIControl class]])
        {
            [(UIControl *)view setEnabled:NO];
        }
        else if ([view isKindOfClass:[UITextView class]])
        {
            [(UITextView *)view setEditable:NO];
        }
    }];
}
@end
