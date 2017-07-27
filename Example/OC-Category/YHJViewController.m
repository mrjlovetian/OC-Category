//
//  YHJViewController.m
//  OC-Category
//
//  Created by 余洪江 on 06/14/2016.
//  Copyright (c) 2016 余洪江. All rights reserved.
//

#import "YHJViewController.h"
#import <OC_Category/Categories.h>

@interface YHJViewController ()

@end

@implementation YHJViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    [[NSDate date] daysAgo];
    [[NSArray alloc] each:^(id object) {
        
    }];
    [[NSArray alloc] objectWithIndex:3];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
