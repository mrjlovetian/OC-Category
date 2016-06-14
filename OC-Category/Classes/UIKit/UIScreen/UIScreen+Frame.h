//
//  UIScreen+Frame.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScreen (Frame)
+ (CGSize)size;
+ (CGFloat)width;
+ (CGFloat)height;

+ (CGSize)orientationSize;
+ (CGFloat)orientationWidth;
+ (CGFloat)orientationHeight;
+ (CGSize)DPISize;

@end
