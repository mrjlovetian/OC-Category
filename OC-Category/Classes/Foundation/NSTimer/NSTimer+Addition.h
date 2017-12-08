//
//  NSTimer+Addition.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTimer (Addition)

/// 暂停NSTimer
- (void)pauseTimer;

/// 开始NSTimer
- (void)resumeTimer;

/// 延迟开始NSTimer
- (void)resumeTimerAfterTimeInterval:(NSTimeInterval)interval;

@end
