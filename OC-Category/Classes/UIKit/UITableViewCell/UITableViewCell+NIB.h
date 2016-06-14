//
//  UITableViewCell+NIB.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITableViewCell (NIB)
/**
 *  @brief  加载同类名的nib
 *
 *  @return nib
 */
+(UINib*)nib;
@end
