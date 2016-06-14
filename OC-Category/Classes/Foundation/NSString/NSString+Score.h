//
//  NSString+Score.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_OPTIONS(NSUInteger, NSStringScoreOption) {
    NSStringScoreOptionNone = 1 << 0,
    NSStringScoreOptionFavorSmallerWords = 1 << 1,
    NSStringScoreOptionReducedLongStringPenalty = 1 << 2
};

//模糊匹配字符串 查找某两个字符串的相似程度
@interface NSString (Score)

- (CGFloat)scoreAgainst:(NSString *)otherString;
- (CGFloat)scoreAgainst:(NSString *)otherString fuzziness:(NSNumber *)fuzziness;
- (CGFloat)scoreAgainst:(NSString *)otherString fuzziness:(NSNumber *)fuzziness options:(NSStringScoreOption)options;

@end
