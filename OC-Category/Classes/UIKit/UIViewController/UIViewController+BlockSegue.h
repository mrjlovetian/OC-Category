//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^UIViewControllerSegueBlock) (id sender, id destinationVC, UIStoryboardSegue *segue);

@interface UIViewController (BlockSegue)

-(void)configureSegue:(NSString *)identifier withBlock:(UIViewControllerSegueBlock)block;
-(void)performSegueWithIdentifier:(NSString *)identifier sender:(id)sender withBlock:(UIViewControllerSegueBlock)block;

@end