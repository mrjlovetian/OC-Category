//
//  UIWebView+loadURL.m
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import "UIWebView+Load.h"

@implementation UIWebView (Load)
/**
 *  @brief  读取一个网页地址
 *
 *  @param URLString 网页地址
 */
- (void)loadURL:(NSString*)URLString{
    NSString *encodedUrl = (__bridge NSString *) CFURLCreateStringByAddingPercentEscapes (NULL, (__bridge CFStringRef) URLString, NULL, NULL,kCFStringEncodingUTF8);
    NSURL *url = [NSURL URLWithString:encodedUrl];
    NSURLRequest *req = [NSURLRequest requestWithURL:url];
    [self loadRequest:req];
}
/**
 *  @brief  读取bundle中的webview
 *
 *  @param htmlName webview名称
 */
- (void)loadLocalHtml:(NSString*)htmlName{
    [self loadLocalHtml:htmlName inBundle:[NSBundle mainBundle]];
}
- (void)loadLocalHtml:(NSString*)htmlName inBundle:(NSBundle*)inBundle{
    NSString *filePath = [inBundle pathForResource:htmlName ofType:nil];
    NSURL *url = [NSURL fileURLWithPath:filePath];
    NSURLRequest *request = [NSURLRequest requestWithURL:url];
    [self loadRequest:request];
}
/**
 *  @brief  清空cookie
 */
- (void)clearCookies
{
    NSHTTPCookieStorage *storage = NSHTTPCookieStorage.sharedHTTPCookieStorage;
    
    for (NSHTTPCookie *cookie in storage.cookies)
        [storage deleteCookie:cookie];
    
    [NSUserDefaults.standardUserDefaults synchronize];
}
@end
