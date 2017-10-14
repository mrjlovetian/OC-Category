//
//  UIViewController+BackButtonTouched.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import "UIViewController+BackButtonTouched.h"
#import <objc/runtime.h>
static const void *BackButtonHandlerKey = &BackButtonHandlerKey;

@implementation UIViewController (BackButtonTouched)

- (void)backButtonTouched:(BackButtonHandler)backButtonHandler{
    objc_setAssociatedObject(self, BackButtonHandlerKey, backButtonHandler, OBJC_ASSOCIATION_COPY);
}

- (BackButtonHandler)backButtonTouched {
    return objc_getAssociatedObject(self, BackButtonHandlerKey);
}

@end

@implementation UINavigationController (ShouldPopItem)
- (BOOL)navigationBar:(UINavigationBar *)navigationBar shouldPopItem:(UINavigationItem *)item {
	if([self.viewControllers count] < [navigationBar.items count]) {
		return YES;
	}
   	UIViewController* vc = [self topViewController];
    BackButtonHandler handler = [vc backButtonTouched];
    if (handler) {
        // Workaround for iOS7.1. Thanks to @boliva - http://stackoverflow.com/posts/comments/34452906
        for(UIView *subview in [navigationBar subviews]) {
            if(subview.alpha < 1.) {
                [UIView animateWithDuration:.25 animations:^{
                    subview.alpha = 1.;
                }];
            }
        }
        dispatch_async(dispatch_get_main_queue(), ^{
            handler(self);
        });
    } else {
        dispatch_async(dispatch_get_main_queue(), ^{
            [self popViewControllerAnimated:YES];
        });
    }
	return NO;
}

@end
