//
//  UIViewController+RecursiveDescription.m
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//
#import "UIViewController+RecursiveDescription.h"

@implementation UIViewController (RecursiveDescription)

/**
 *  @brief  视图层级
 *
 *  @return 视图层级字符串
 */
- (NSString *)recursiveDescription {
    NSMutableString *description = [NSMutableString stringWithFormat:@"\n"];
    [self addDescriptionToString:description indentLevel:0];
    return description;
}

- (void)addDescriptionToString:(NSMutableString*)string indentLevel:(NSInteger)indentLevel {
    NSString *padding = [@"" stringByPaddingToLength:indentLevel withString:@" " startingAtIndex:0];
    [string appendString:padding];
    [string appendFormat:@"%@, %@",[self debugDescription],NSStringFromCGRect(self.view.frame)];
    for (UIViewController *childController in self.childViewControllers) {
        [string appendFormat:@"\n%@>",padding];
        [childController addDescriptionToString:string indentLevel:indentLevel + 1];
    }
}

@end
