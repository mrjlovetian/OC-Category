//
//  UIViewController+Visible.m
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import "UIViewController+Visible.h"

@implementation UIViewController (Visible)
- (BOOL)isVisible {
    return [self isViewLoaded] && self.view.window;
}
@end
