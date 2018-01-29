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
@property (nonatomic, strong) UITextField *textField;
@end

@implementation YHJViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    UIImageView *imageView = [[UIImageView alloc] initWithFrame:CGRectMake(100, 100, 159, 45)];
    UIImage *image = [UIImage imageNamed:@"Rec"];
    image = [image resizableImageWithCapInsets:UIEdgeInsetsMake(0, 18, 0, 10) resizingMode:UIImageResizingModeStretch];
    imageView.image = image;
//    imageView.contentMode = UIViewContentModeScaleAspectFill;
    [self.view addSubview:imageView];
    return;
    
    UILabel *testLab = [[UILabel alloc] initWithFrame:CGRectMake(25, 100, SCREE_SIZE.width - 50, 160)];
    testLab.text = @"数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....";
    testLab.font = [UIFont systemFontOfSize:14];
    [testLab adjustLabelToMaximumSize:CGSizeMake(SCREE_SIZE.width - 50, 160) minimumFontSize:12];
    testLab.backgroundColor = [UIColor orangeColor];
//    [self.view addSubview:testLab];
    
    
    UILabel *test1Lab = [[UILabel alloc] initWithFrame:CGRectMake(25, 100, SCREE_SIZE.width - 50, 160)];
    test1Lab.font = [UIFont systemFontOfSize:12];
//    test1Lab.text = @"数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....";
    NSString *str = @"数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....数据测试中....";
//    test1Lab.edgeInsets = UIEdgeInsetsMake(0, 0, 0, 0.2);
   
    test1Lab.backgroundColor = [UIColor orangeColor];
//    [test1Lab adjustLabel];
//    [self.view addSubview:test1Lab];
    test1Lab.numberOfLines = 0;
     [test1Lab setText:str automaticWritingAnimationWithBlinkingMode:UILabelAWBlinkingModeUntilFinish];
    
    
    self.textField = [[UITextField alloc] initWithFrame:CGRectMake(25, 150, SCREE_SIZE.width - 50, 16)];
//    [self.textField setDidBeginEditingBlock:^(UITextField *textField) {
//
//    }];
    self.textField.backgroundColor = [UIColor orangeColor];
//    [self.view addSubview:self.textField];
    
    UITextView *textView = [[UITextView alloc] initWithFrame:CGRectMake(0, 150, SCREE_SIZE.width - 50, 16)];
//    textView.placeHolderTextView = [[UITextView alloc] initWithFrame:CGRectMake(0, 0, textView.frame.size.width, textView.frame.size.height)];
    [textView addPlaceHolder:@"这是个占位符"];
    [self.view addSubview:textView];
    
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.frame = CGRectMake(30, 100, 60, 30);
    btn.backgroundColor = [UIColor redColor];
    [btn addTarget:self action:@selector(click) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:btn];
    
    
    
    
   
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)click {
    [self.textField shake];
    
    [self.view makeToast:@"吐司信息"];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
