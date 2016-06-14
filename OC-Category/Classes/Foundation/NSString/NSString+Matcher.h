//
//  NSString+Matcher.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface NSString(Matcher)
- (NSArray *)matchWithRegex:(NSString *)regex;
- (NSString *)matchWithRegex:(NSString *)regex atIndex:(NSUInteger)index;
- (NSString *)firstMatchedGroupWithRegex:(NSString *)regex;
- (NSTextCheckingResult *)firstMatchedResultWithRegex:(NSString *)regex;
@end