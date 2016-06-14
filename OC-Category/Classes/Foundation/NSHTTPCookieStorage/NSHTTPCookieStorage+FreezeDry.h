//
//  NSHTTPCookieStorage+FreezeDry.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSHTTPCookieStorage (FreezeDry)
/**
 *  @brief 存储 UIWebView cookies到磁盘目录
 */
- (void)saveCookie;
/**
 *  @brief 读取UIWebView cookies从磁盘目录
 */
- (void)loadCookie;

@end
