//
//  UIViewController+BackButtonItemTitle.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol BackButtonItemTitleProtocol <NSObject>

@optional
- (NSString *)navigationItemBackBarButtonTitle; //The length of the text is limited, otherwise it will be set to "Back"

@end

@interface UIViewController (BackButtonItemTitle) <BackButtonItemTitleProtocol>

@end
