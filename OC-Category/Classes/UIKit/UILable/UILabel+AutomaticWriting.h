//
//  UILabel+AutomaticWriting.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for UILabel-AutomaticWriting.
FOUNDATION_EXPORT double UILabelAutomaticWritingVersionNumber;

//! Project version string for UILabel-AutomaticWriting.
FOUNDATION_EXPORT const unsigned char UILabelAutomaticWritingVersionString[];

extern NSTimeInterval const UILabelAWDefaultDuration;

extern unichar const UILabelAWDefaultCharacter;

typedef NS_ENUM(NSInteger, UILabellinkingMode)
{
    UILabellinkingModeNone,
    UILabellinkingModeUntilFinish,
    UILabellinkingModeUntilFinishKeeping,
    UILabellinkingModeWhenFinish,
    UILabellinkingModeWhenFinishShowing,
    UILabellinkingModeAlways
};

@interface UILabel (AutomaticWriting)

@property (strong, nonatomic) NSOperationQueue *automaticWritingOperationQueue;
@property (assign, nonatomic) UIEdgeInsets edgeInsets;

- (void)setTextWithAutomaticWritingAnimation:(NSString *)text;

- (void)setText:(NSString *)text automaticWritingAnimationWithBlinkingMode:(UILabellinkingMode)blinkingMode;

- (void)setText:(NSString *)text automaticWritingAnimationWithDuration:(NSTimeInterval)duration;

- (void)setText:(NSString *)text automaticWritingAnimationWithDuration:(NSTimeInterval)duration blinkingMode:(UILabellinkingMode)blinkingMode;

- (void)setText:(NSString *)text automaticWritingAnimationWithDuration:(NSTimeInterval)duration blinkingMode:(UILabellinkingMode)blinkingMode blinkingCharacter:(unichar)blinkingCharacter;

- (void)setText:(NSString *)text automaticWritingAnimationWithDuration:(NSTimeInterval)duration blinkingMode:(UILabellinkingMode)blinkingMode blinkingCharacter:(unichar)blinkingCharacter completion:(void (^)(void))completion;

@end