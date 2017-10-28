//
//  NSDecimalNumber+CalculatingByString.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDecimalNumber (CalculatingByString)

+ (NSDecimalNumber *)decimalNumberWithEquation:(NSString *)equation decimalNumbers:(NSDictionary *)numbers;

@end
