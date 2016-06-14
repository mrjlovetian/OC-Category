//
//  UIViewController+BackButtonTouched.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^BackButtonHandler)(UIViewController *vc);
@interface UIViewController (BackButtonTouched)
/**
 *  @author Categories
 *
 *  navgation 返回按钮回调
 *
 *  @param backButtonHandler <#backButtonHandler description#>
 */
-(void)backButtonTouched:(BackButtonHandler)backButtonHandler;
@end
