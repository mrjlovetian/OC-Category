//
//  CATransaction+AnimateWithDuration.m
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import "CATransaction+AnimateWithDuration.h"

@implementation CATransaction (AnimateWithDuration)
/**
 *  @author Denys Telezhkin
 *
 *  @brief  CATransaction 动画执 block回调
 *
 *  @param duration   动画时间
 *  @param animations 动画块
 *  @param completion 动画结束回调
 */
+(void)animateWithDuration:(NSTimeInterval)duration
                   animations:(void (^)(void))animations
                   completion:(void (^)())completion
{
    [CATransaction begin];
    [CATransaction setAnimationDuration:duration];
    
    if (completion)
    {
        [CATransaction setCompletionBlock:completion];
    }
    
    if (animations)
    {
        animations();
    }
    [CATransaction commit];
}

@end
