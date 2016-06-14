//
//  UIImage+BetterFace.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, Accuracy) {
    AccuracyLow = 0,
    AccuracyHigh,
};

@interface UIImage (BetterFace)

- (UIImage *)betterFaceImageForSize:(CGSize)size
                           accuracy:(Accuracy)accurary;

@end
