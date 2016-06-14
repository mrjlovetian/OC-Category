//
//  UITextView+Select.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextView (Select)
/**
 *  @brief  当前选中的字符串范围
 *
 *  @return NSRange
 */
- (NSRange)selectedRange;
/**
 *  @brief  选中所有文字
 */
- (void)selectAllText;
/**
 *  @brief  选中指定范围的文字
 *
 *  @param range NSRange范围
 */
- (void)setSelectedRange:(NSRange)range;



//https://github.com/pclion/TextViewCalculateLength
// 用于计算textview输入情况下的字符数，解决实现限制字符数时，计算不准的问题
- (NSInteger)getInputLengthWithText:(NSString *)text;
/*
- (BOOL)textView:(UITextView *)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString *)text
{
    NSInteger textLength = [textView getInputLengthWithText:text];
    if (textLength > 20) {
        //超过20个字可以删除
        if ([text isEqualToString:@""]) {
            return YES;
        }
        return NO;
    }
    return YES;
}

- (void)textViewDidChange:(UITextView *)textView
{
    if ([textView getInputLengthWithText:nil] > 20) {
        textView.text = [textView.text substringToIndex:20];
    }
}
*/

@end
