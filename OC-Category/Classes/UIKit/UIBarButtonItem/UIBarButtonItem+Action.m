//
//  UIBarButtonItem+Action.m
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

char * const UIBarButtonItemActionBlock = "UIBarButtonItemActionBlock";
#import "UIBarButtonItem+Action.h"
#import <objc/runtime.h>

@implementation UIBarButtonItem (Action)

- (void)performActionBlock {
    
    dispatch_block_t block = self.actionBlock;
    
    if (block)
        block();
    
}

- (BarButtonActionBlock)actionBlock {
    return objc_getAssociatedObject(self, UIBarButtonItemActionBlock);
}

- (void)setactionBlock:(BarButtonActionBlock)actionBlock
 {
    
    if (actionBlock != self.actionBlock) {
        [self willChangeValueForKey:@"actionBlock"];
        
        objc_setAssociatedObject(self,
                                 UIBarButtonItemActionBlock,
                                 actionBlock,
                                 OBJC_ASSOCIATION_COPY);
        
        // Sets up the action.
        [self setTarget:self];
        [self setAction:@selector(performActionBlock)];
        
        [self didChangeValueForKey:@"actionBlock"];
    }
}
@end
