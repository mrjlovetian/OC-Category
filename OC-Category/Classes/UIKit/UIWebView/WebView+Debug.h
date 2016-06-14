//
//  WebView+Debug.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#ifdef DEBUG

// Use this to toggle logging
#define kDidParseSource         0
#define kFailedToParseSource    1
#define kExceptionWasRaised     1
#define kDidEnterCallFrame      0
#define kWillExecuteStatement   1
#define kWillLeaveCallFrame     0

void enableRemoteWebInspector(void);

#endif
