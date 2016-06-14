//
//  CLLocation+CH1903.h
//  g7
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface CLLocation (CH1903)

/*!
 @method     initWithCH1903x
 @abstract   initialize a CLLocation-Instance with CH1903 x/y coorinates
 */
- (id)initWithCH1903x:(double)x y:(double)y;


/*!
 @method     CH1903Y
 @abstract   returns the CH1903 y value of the location
 */
- (double)CH1903Y;

/*!
 @method     CH1903X
 @abstract   returns the CH1903 x value of the location
 */
- (double)CH1903X;


#pragma mark -
#pragma mark static methodes

+ (double)CHtoWGSlatWithX:(double)x y:(double)y;
+ (double)CHtoWGSlongWithX:(double)x y:(double)y;
+ (double)WGStoCHyWithLatitude:(double)lat longitude:(double)lng;
+ (double)WGStoCHxWithLatitude:(double)lat longitude:(double)lng;

+ (double)decToSex:(double)angle;
+ (double)degToSec:(double)angle;
+ (double)sexToDec:(double)angle;


@end