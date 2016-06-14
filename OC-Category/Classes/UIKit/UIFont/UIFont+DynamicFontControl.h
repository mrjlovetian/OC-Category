//
//  UIFont+DynamicFontControl.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIFont (DynamicFontControl)


+(UIFont *)preferredFontForTextStyle:(NSString *)style withFontName:(NSString *)fontName scale:(CGFloat)scale;

+(UIFont *)preferredFontForTextStyle:(NSString *)style withFontName:(NSString *)fontName;



-(UIFont *)adjustFontForTextStyle:(NSString *)style;

-(UIFont *)adjustFontForTextStyle:(NSString *)style scale:(CGFloat)scale;



@end
