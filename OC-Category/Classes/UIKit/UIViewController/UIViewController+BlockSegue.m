//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import "UIViewController+BlockSegue.h"
#import <objc/runtime.h>

static const void *UIViewControllerDictionaryBlockKey = &UIViewControllerDictionaryBlockKey;

@implementation UIViewController (JKBlockSegue)

__attribute__((constructor))
void JKBlockSegue(void) {
    Class currentClass = [UIViewController class];

    SEL originalSel = @selector(prepareForSegue:sender:);
    SEL swizzledSel = @selector(jk_prepareForSegue:sender:);

    Method originalMethod = class_getInstanceMethod(currentClass, originalSel);
    IMP swizzledImplementation = class_getMethodImplementation(currentClass, swizzledSel);

    method_setImplementation(originalMethod, swizzledImplementation);
}


-(void)jk_prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    if (segue.identifier == nil) {
        return;
    }

    if (!self.jmg_dictionaryBlock || !self.jmg_dictionaryBlock[segue.identifier]) {
        NSLog(@"Segue identifier '%@' doesn't exist", segue.identifier);
        return;
    }

    UIViewControllerSegueBlock segueBlock = self.jmg_dictionaryBlock[segue.identifier];
    segueBlock(sender, segue.destinationViewController, segue);
}

-(NSMutableDictionary *)jmg_dictionaryBlock {
    return objc_getAssociatedObject(self, UIViewControllerDictionaryBlockKey);
}

-(NSMutableDictionary *)jmg_createDictionaryBlock {
    if (!self.jmg_dictionaryBlock) {
        objc_setAssociatedObject(self, UIViewControllerDictionaryBlockKey, [NSMutableDictionary dictionary], OBJC_ASSOCIATION_RETAIN);
    }

    return self.jmg_dictionaryBlock;
}

#pragma mark - Public interface
-(void)jk_configureSegue:(NSString *)identifier withBlock:(UIViewControllerSegueBlock)block {
    if (!identifier) {
        @throw [NSException exceptionWithName:NSInvalidArgumentException reason:@"Segue identifier can not be nil" userInfo:nil];
    }

    if (!block) {
        return ;
    }

    NSMutableDictionary *dBlocks = self.jmg_dictionaryBlock ?: [self jmg_createDictionaryBlock];
    [dBlocks setObject:block forKey:identifier];
}

-(void)jperformSegueWithIdentifier:(NSString *)identifier sender:(id)sender withBlock:(UIViewControllerSegueBlock)block {
    if (!identifier) {
        @throw [NSException exceptionWithName:NSInvalidArgumentException reason:@"Segue identifier can not be nil" userInfo:nil];
    }

    if (!block) {
        return ;
    }

    [self jk_configureSegue:identifier withBlock:block];
    [self performSegueWithIdentifier:identifier sender:sender];
}

@end