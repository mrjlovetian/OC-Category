//
//  NSDecimalNumber+CalculatingByString.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDecimalNumber (CalculatingByString)
/**
 *  @author Categories
 *
 *   use string calculation for nsdecimalnumber, for simplicity when doing much calculation works. 
 *
 *  @param equation <#equation description#>
 *  @param numbers  <#numbers description#>
 *
 *  @return <#return value description#>
 */
+ (NSDecimalNumber *)decimalNumberWithEquation:(NSString *)equation decimalNumbers:(NSDictionary *)numbers;
@end