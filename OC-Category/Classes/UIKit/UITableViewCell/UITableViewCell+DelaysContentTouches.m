//
//  UITableViewCell+TS_delaysContentTouches.m
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import "UITableViewCell+DelaysContentTouches.h"

@implementation UITableViewCell (DelaysContentTouches)

- (UIScrollView*) scrollView
{
    id sv = self.contentView.superview;
    while ( ![sv isKindOfClass: [UIScrollView class]] && sv != self )
    {
        sv = [sv superview];
    }
    
    return sv == self ? nil : sv;
}

- (void) setDelaysContentTouches:(BOOL)delaysContentTouches
{
    [self willChangeValueForKey: @"delaysContentTouches"];
    
    [[self scrollView] setDelaysContentTouches: delaysContentTouches];
    
    [self didChangeValueForKey: @"delaysContentTouches"];
}

- (BOOL) delaysContentTouches
{
    return [[self scrollView] delaysContentTouches];
}



@end
