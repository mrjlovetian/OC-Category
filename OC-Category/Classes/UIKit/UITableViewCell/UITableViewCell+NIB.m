//
//  UITableViewCell+NIB.m
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import "UITableViewCell+NIB.h"

@implementation UITableViewCell (NIB)
/**
 *  @brief  加载同类名的nib
 *
 *  @return nib
 */
+(UINib*)nib{
   return  [UINib nibWithNibName:NSStringFromClass([self class]) bundle:nil];
}
@end
