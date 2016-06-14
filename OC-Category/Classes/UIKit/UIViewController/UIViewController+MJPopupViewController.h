//
//  UIViewController+MJPopupViewController.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MJPopupBackgroundView;

typedef NS_ENUM(NSInteger, MJPopupViewAnimation) {
    MJPopupViewAnimationFade = 0,
    MJPopupViewAnimationSlideBottomTop = 1,
    MJPopupViewAnimationSlideBottomBottom,
    MJPopupViewAnimationSlideTopTop,
    MJPopupViewAnimationSlideTopBottom,
    MJPopupViewAnimationSlideLeftLeft,
    MJPopupViewAnimationSlideLeftRight,
    MJPopupViewAnimationSlideRightLeft,
    MJPopupViewAnimationSlideRightRight,
};

@interface UIViewController (MJPopupViewController)

@property (nonatomic, retain) UIViewController *mj_popupViewController;
@property (nonatomic, retain) MJPopupBackgroundView *mj_popupBackgroundView;

- (void)presentPopupViewController:(UIViewController*)popupViewController animationType:(MJPopupViewAnimation)animationType;
- (void)presentPopupViewController:(UIViewController*)popupViewController animationType:(MJPopupViewAnimation)animationType backgroundTouch:(BOOL)enable dismissed:(void(^)(void))dismissed;

- (void)dismissPopupViewControllerWithanimationType:(MJPopupViewAnimation)animationType;

@end



@interface MJPopupBackgroundView : UIView

@end
