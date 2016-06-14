//
//  UITextView+PlaceHolder.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <objc/runtime.h>
@interface UITextView (PlaceHolder) <UITextViewDelegate>
@property (nonatomic, strong) UITextView *placeHolderTextView;
//@property (nonatomic, assign) id <UITextViewDelegate> textViewDelegate;
- (void)addPlaceHolder:(NSString *)placeHolder;
@end
