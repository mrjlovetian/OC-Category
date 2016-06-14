//
//  UISplitViewController+QuickAccess.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//
@import UIKit;

/*
 I often want the "left content view controller" or the "right content view controller".
 Many times the UIViewControllers in viewControllers are actually UINavigationControllers and then
 I want to get the topViewController from that. So these methods pull the left or right VC and then
 check if they are UINavigationControllers. If they are then they go ahead and return the controller's
 topViewController property.
 */

@interface UISplitViewController (QuickAccess)

@property (weak, readonly, nonatomic) UIViewController *leftController;
@property (weak, readonly, nonatomic) UIViewController *rightController;

@end