//
//  CAAnimation+Blocks.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface CAAnimation (BlocksAddition)

@property (nonatomic, copy) void (^completion)(BOOL finished);
@property (nonatomic, copy) void (^start)(void);

- (void)setCompletion:(void (^)(BOOL finished))completion; // Forces auto-complete of setCompletion: to add the name 'finished' in the block parameter

@end
