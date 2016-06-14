//
//  NSDictionary+XML.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface NSDictionary (XML)
/**
 *  @brief  将NSDictionary转换成XML 字符串
 *
 *  @return XML 字符串
 */
- (NSString *)XMLString;
@end
