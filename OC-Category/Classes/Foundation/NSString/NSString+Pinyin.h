//
//  NSString+Pinyin.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Pinyin)

- (NSString*)pinyinWithPhoneticSymbol;
- (NSString*)pinyin;
- (NSArray*)pinyinArray;
- (NSString*)pinyinWithoutBlank;
- (NSArray*)pinyinInitialsArray;
- (NSString*)pinyinInitialsString;

@end
