//
//  UISplitViewController+QuickAccess.m
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

@import UIKit;

#import "UISplitViewController+QuickAccess.h"

@implementation UISplitViewController (QuickAccess)

- (UIViewController *)leftController {
    UIViewController * leftVC = [[self viewControllers] objectAtIndex:0];
    
    if ([leftVC isKindOfClass:[UINavigationController class]]) {
        leftVC = [(UINavigationController *)leftVC topViewController];
    }
    return  leftVC;
}

- (UIViewController *)rightController {
    UIViewController * rightVC = [[self viewControllers] lastObject];
    
    if ([rightVC isKindOfClass:[UINavigationController class]]) {
        rightVC = [(UINavigationController *)rightVC topViewController];
    }
    return rightVC;
}

@end