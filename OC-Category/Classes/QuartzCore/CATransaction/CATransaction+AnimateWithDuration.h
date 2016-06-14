//
//  CATransaction+AnimateWithDuration.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

#if __has_feature(nullability) // Xcode 6.3+
#pragma clang assume_nonnull begin
#else
#define nullable
#define __nullable
#endif

@interface CATransaction (AnimateWithDuration)
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
                   animations:(nullable void (^)(void))animations
                   completion:(nullable void (^)())completion;

@end

#if __has_feature(nullability)
#pragma clang assume_nonnull end
#endif
