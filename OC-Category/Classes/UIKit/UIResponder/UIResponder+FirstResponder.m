//
//  UIResponder+FirstResponder.m
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//


#import "UIResponder+FirstResponder.h"

static __weak id currentFirstResponder;

@implementation UIResponder (FirstResponder)
/**
 *  @brief  当前第一响应者
 *
 *  @return 当前第一响应者
 */
+ (id)currentFirstResponder {
    currentFirstResponder = nil;
    
    [[UIApplication sharedApplication] sendAction:@selector(findCurrentFirstResponder:) to:nil from:nil forEvent:nil];
    
    return currentFirstResponder;
}

- (void)findCurrentFirstResponder:(id)sender {
    currentFirstResponder = self;
}

@end
