//
//  UIView+RecursiveDescription.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (RecursiveDescription)
/**
 *  @brief  打印视图层级
 *
 *  @return 打印视图层级字符串
 */
-(NSString*)recursiveView;
/**
 *  @brief  打印约束
 *
 *  @return 打印约束字符串
 */
-(NSString*)constraintsDescription;
/**
 *  @brief  打印整个autolayout树的字符串
 *
 *  @return 打印整个autolayout树的字符串
 */
-(NSString*)autolayoutTraceDescription;

@end
