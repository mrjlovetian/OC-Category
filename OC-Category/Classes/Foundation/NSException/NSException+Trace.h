//
//  NSException+Trace.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSException (Trace)
- (NSArray *)backtrace;
@end
