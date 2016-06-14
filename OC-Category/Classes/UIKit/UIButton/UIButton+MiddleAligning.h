//
//  UIButton+MiddleAligning.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 A category on UIButton that provides a simple yet powerful interface to middle aligning imageView and titleLabel
 */
@interface UIButton (MiddleAligning)

/**
 @param spacing The middle spacing between imageView and titleLabel.
 @discussion The middle aligning method for imageView and titleLabel.
 */
- (void)middleAlignButtonWithSpacing:(CGFloat)spacing;

@end
