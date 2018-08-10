//
//  GON_NSIndexPath+Offset.m
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//
#import "NSIndexPath+Offset.h"

@interface NSIndexPath ()
@end

@implementation NSIndexPath (Offset)
#pragma mark - Offset
- (NSIndexPath *)previousRow {
    return [NSIndexPath indexPathForRow:self.row - 1
                              inSection:self.section];
}

- (NSIndexPath *)nextRow {
    return [NSIndexPath indexPathForRow:self.row + 1
                              inSection:self.section];
}

- (NSIndexPath *)previousItem {
    return [NSIndexPath indexPathForItem:self.item - 1
                               inSection:self.section];
}

- (NSIndexPath *)nextItem {
    return [NSIndexPath indexPathForItem:self.item + 1
                               inSection:self.section];
}

- (NSIndexPath *)nextSection {
    return [NSIndexPath indexPathForRow:self.row
                              inSection:self.section + 1];
}

- (NSIndexPath *)previousSection {
    return [NSIndexPath indexPathForRow:self.row
                              inSection:self.section - 1];
}

@end
