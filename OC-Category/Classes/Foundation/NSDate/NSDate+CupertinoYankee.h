// NSDate+CupertinoYankee.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 
 */
@interface NSDate (CupertinoYankee)

///---------------------------------------
/// @name Calculate Beginning / End of Day
///---------------------------------------

/**
 
 */
- (NSDate *)beginningOfDay;

/**
 
 */
- (NSDate *)endOfDay;

///----------------------------------------
/// @name Calculate Beginning / End of Week
///----------------------------------------

/**
 
 */
- (NSDate *)beginningOfWeek;

/**
 
 */
- (NSDate *)endOfWeek;

///-----------------------------------------
/// @name Calculate Beginning / End of Month
///-----------------------------------------

/**
 
 */
- (NSDate *)beginningOfMonth;

/**
 
 */
- (NSDate *)endOfMonth;

///----------------------------------------
/// @name Calculate Beginning / End of Year
///----------------------------------------

/**
 
 */
- (NSDate *)beginningOfYear;

/**
 
 */
- (NSDate *)endOfYear;

@end
