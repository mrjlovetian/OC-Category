//
//  NSNumber+CGFloat.m
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import "NSNumber+CGFloat.h"

@implementation NSNumber (CGFloat)

- (CGFloat)CGFloatValue
{
#if (CGFLOAT_IS_DOUBLE == 1)
    CGFloat result = [self doubleValue];
#else
    CGFloat result = [self floatValue];
#endif
    return result;
}

- (id)initWithCGFloat:(CGFloat)value
{
#if (CGFLOAT_IS_DOUBLE == 1)
    self = [self initWithDouble:value];
#else
    self = [self initWithFloat:value];
#endif
    return self;
}

+ (NSNumber *)numberWithCGFloat:(CGFloat)value
{
    NSNumber *result = [[self alloc] initWithCGFloat:value];
    return result;
}

@end