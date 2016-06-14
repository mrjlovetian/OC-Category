//
//  UIButton+Block.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^TouchedButtonBlock)(NSInteger tag);

@interface UIButton (Block)
-(void)addActionHandler:(TouchedButtonBlock)touchHandler;
@end
