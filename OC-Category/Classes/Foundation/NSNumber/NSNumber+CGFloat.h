
//
//  NSNumber+CGFloat.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface NSNumber (CGFloat)

- (CGFloat)CGFloatValue;

- (id)initWithCGFloat:(CGFloat)value;

+ (NSNumber *)numberWithCGFloat:(CGFloat)value;

@end