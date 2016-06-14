//
//  NSObject+MKBlockTimer.m
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import "NSObject+BlockTimer.h"


@implementation NSObject (BlockTimer)

-(void)logTimeTakenToRunBlock:(void (^)(void)) block withPrefix:(NSString*) prefixString {
	
	double a = CFAbsoluteTimeGetCurrent();
	block();
	double b = CFAbsoluteTimeGetCurrent();
	
	unsigned int m = ((b-a) * 1000.0f); // convert from seconds to milliseconds
	
	NSLog(@"%@: %d ms", prefixString ? prefixString : @"Time taken", m);
}
@end
