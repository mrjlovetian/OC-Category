//
//  UIResponder+FirstResponder.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface UIResponder (FirstResponder)
/**
 *  @brief  当前第一响应者
 *
 *  @return 当前第一响应者
 */
+ (id)currentFirstResponder;

@end
