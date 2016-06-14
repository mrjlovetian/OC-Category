//
//  UIControl+ActionBlocks.h
//  Categories (https://github.com/shaojiankui/Categories)
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^UIControlActionBlock)(id weakSender);


@interface UIControlActionBlockWrapper : NSObject
@property (nonatomic, copy) UIControlActionBlock actionBlock;
@property (nonatomic, assign) UIControlEvents controlEvents;
- (void)invokeBlock:(id)sender;
@end



@interface UIControl (ActionBlocks)
- (void)handleControlEvents:(UIControlEvents)controlEvents withBlock:(UIControlActionBlock)actionBlock;
- (void)removeActionBlocksForControlEvents:(UIControlEvents)controlEvents;
@end
