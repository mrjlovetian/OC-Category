//
//  UIBarButtonItem+Action.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^BarButtonActionBlock)();

@interface UIBarButtonItem (Action)

/// A block that is run when the UIBarButtonItem is tapped.
//@property (nonatomic, copy) dispatch_block_t actionBlock;
- (void)setactionBlock:(BarButtonActionBlock)actionBlock;

@end
