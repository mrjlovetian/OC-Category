//
//  NSString+Contains.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Contains)
/**
 *  @brief  判断URL中是否包含中文
 *
 *  @return 是否包含中文
 */
- (BOOL)isContainChinese;
/**
 *  @brief  是否包含空格
 *
 *  @return 是否包含空格
 */
- (BOOL)isContainBlank;

/**
 *  @brief  Unicode编码的字符串转成NSString
 *
 *  @return Unicode编码的字符串转成NSString
 */
- (NSString *)makeUnicodeToString;

- (BOOL)containsCharacterSet:(NSCharacterSet *)set;
/**
 *  @brief 是否包含字符串
 *
 *  @param string 字符串
 *
 *  @return YES, 包含;
 */
- (BOOL)containsaString:(NSString *)string;
/**
 *  @brief 获取字符数量
 */
- (int)wordsCount;

@end
