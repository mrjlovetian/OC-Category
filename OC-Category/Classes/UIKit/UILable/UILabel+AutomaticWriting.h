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

typedef NS_ENUM(NSInteger, UILabelAWBlinkingMode)
{
    UILabelAWBlinkingModeNone,
    UILabelAWBlinkingModeUntilFinish,
    UILabelAWBlinkingModeUntilFinishKeeping,
    UILabelAWBlinkingModeWhenFinish,
    UILabelAWBlinkingModeWhenFinishShowing,
    UILabelAWBlinkingModeAlways
};

@interface UILabel (AutomaticWriting)

@property (strong, nonatomic) NSOperationQueue *automaticWritingOperationQueue;
@property (assign, nonatomic) UIEdgeInsets edgeInsets;

- (void)setTextWithAutomaticWritingAnimation:(NSString *)text;

- (void)setText:(NSString *)text automaticWritingAnimationWithBlinkingMode:(UILabelAWBlinkingMode)blinkingMode;

- (void)setText:(NSString *)text automaticWritingAnimationWithDuration:(NSTimeInterval)duration;

- (void)setText:(NSString *)text automaticWritingAnimationWithDuration:(NSTimeInterval)duration blinkingMode:(UILabelAWBlinkingMode)blinkingMode;

- (void)setText:(NSString *)text automaticWritingAnimationWithDuration:(NSTimeInterval)duration blinkingMode:(UILabelAWBlinkingMode)blinkingMode blinkingCharacter:(unichar)blinkingCharacter;

- (void)setText:(NSString *)text automaticWritingAnimationWithDuration:(NSTimeInterval)duration blinkingMode:(UILabelAWBlinkingMode)blinkingMode blinkingCharacter:(unichar)blinkingCharacter completion:(void (^)(void))completion;

@end
