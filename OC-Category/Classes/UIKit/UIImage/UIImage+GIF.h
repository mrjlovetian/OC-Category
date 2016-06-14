//
//  UIImage+GIF.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (GIF)

+ (UIImage *)animatedGIFNamed:(NSString *)name;

+ (UIImage *)animatedGIFWithData:(NSData *)data;

- (UIImage *)animatedImageByScalingAndCroppingToSize:(CGSize)size;

@end
