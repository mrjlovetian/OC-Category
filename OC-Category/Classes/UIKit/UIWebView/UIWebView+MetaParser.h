//
//  UIWebView+MetaParser.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface UIWebView (MetaParser)
/**
 *  @brief  获取网页meta信息
 *
 *  @return meta信息
 */
-(NSArray *)getMetaData;
@end
