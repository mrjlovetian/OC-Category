//
//  CAShapeLayer+UIBezierPath.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>

#if __has_feature(nullability) // Xcode 6.3+
#pragma clang assume_nonnull begin
#else
#define nullable
#define __nullable
#endif

/**
 Category on `CAShapeLayer`, that allows setting and getting UIBezierPath on CAShapeLayer.
 */
@interface CAShapeLayer (UIBezierPath)

/**
 Update CAShapeLayer with UIBezierPath.
 */
- (void)updateWithBezierPath:(UIBezierPath *)path;

/**
 Get UIBezierPath object, constructed from CAShapeLayer.
 */
- (UIBezierPath*)bezierPath;

@end

#if __has_feature(nullability)
#pragma clang assume_nonnull end
#endif