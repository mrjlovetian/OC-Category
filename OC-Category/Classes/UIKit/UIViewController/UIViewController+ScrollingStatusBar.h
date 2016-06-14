//
//  UIViewController+ScrollingStatusBar.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (ScrollingStatusBar)

- (void)enableStatusBarScrollingAlongScrollView:(UIScrollView *)scrollView;
- (void)disableStatusBarScrollingAlongScrollView:(UIScrollView *)scrollView;

@end
