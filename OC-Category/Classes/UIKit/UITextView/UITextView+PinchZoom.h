//
//  UITextView+PinchZoom.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextView (PinchZoom)

@property (nonatomic) CGFloat maxFontSize, minFontSize;
@property (nonatomic, getter = iszoomEnabled) BOOL zoomEnabled;

@end
