//
//  UIImageView+BetterFace.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (BetterFace)

@property (nonatomic) BOOL needsBetterFace;
@property (nonatomic) BOOL fast;

void hack_uiimageview_bf();
- (void)setBetterFaceImage:(UIImage *)image;

@end
