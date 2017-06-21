//
//  NSBundle+AppIcon.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface NSBundle (AppIcon)
/**
 *  获得appicon的路径
 *
 *  @return
 */
- (NSString*)appIconPath ;

/**
 *  直接获得appicon的图片
 *
 *  @return 
 */
- (UIImage*)appIcon ;
@end
