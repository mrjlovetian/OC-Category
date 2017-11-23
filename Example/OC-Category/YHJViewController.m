//
//  YHJViewController.m
//  OC-Category
//
//  Created by 余洪江 on 06/14/2016.
//  Copyright (c) 2016 余洪江. All rights reserved.
//

#import "YHJViewController.h"
//#import <OC_Category/Categories.h>
#import <OC_Category/UIKit.h>

#define SCREE_SIZE [UIScreen mainScreen].bounds.size

@interface YHJViewController ()

@end

@implementation YHJViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    
    UILabel *testLab = [[UILabel alloc] initWithFrame:CGRectMake(25, 100, SCREE_SIZE.width - 50, 160)];
    testLab.text = @"数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....";
    [testLab adjustLabelToMaximumSize:CGSizeMake(SCREE_SIZE.width - 50, 160) minimumFontSize:12];
    testLab.backgroundColor = [UIColor orangeColor];
    [self.view addSubview:testLab];
    
    
    UILabel *test1Lab = [[UILabel alloc] initWithFrame:CGRectMake(testLab.left, testLab.bottom + 10, testLab.width, 160)];
    test1Lab.text = @"数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....";
    test1Lab.backgroundColor = [UIColor orangeColor];
    [test1Lab adjustLabel];
    [self.view addSubview:test1Lab];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
