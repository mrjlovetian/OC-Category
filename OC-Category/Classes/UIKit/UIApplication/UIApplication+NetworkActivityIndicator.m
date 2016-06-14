//
//  UIApplication+NetworkActivityIndicator.m
//  NetworkActivityIndicator
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import "UIApplication+NetworkActivityIndicator.h"

#import <libkern/OSAtomic.h>

@implementation UIApplication (NetworkActivityIndicator)

static volatile int32_t numberOfActiveNetworkConnectionsxxx;

#pragma mark Public API

- (void)beganNetworkActivity
{
	self.networkActivityIndicatorVisible = OSAtomicAdd32(1, &numberOfActiveNetworkConnectionsxxx) > 0;
}

- (void)endedNetworkActivity
{
	self.networkActivityIndicatorVisible = OSAtomicAdd32(-1, &numberOfActiveNetworkConnectionsxxx) > 0;
}

@end
