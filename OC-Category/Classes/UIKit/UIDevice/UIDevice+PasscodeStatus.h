//
//  UIDevice+PasscodeStatus.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, PasscodeStatus){
    /* The passcode status was unknown */
    PasscodeStatusUnknown   = 0,
    /* The passcode is enabled */
    PasscodeStatusEnabled   = 1,
    /* The passcode is disabled */
    PasscodeStatusDisabled  = 2
};

@interface UIDevice (PasscodeStatus)

/**
 *  Determines if the device supports the `passcodeStatus` check. Passcode check is only supported on iOS 8.
 */
@property (readonly) BOOL passcodeStatusSupported;

/**
 *  Checks and returns the devices current passcode status.
 *  If `passcodeStatusSupported` returns NO then `LNPasscodeStatusUnknown` will be returned.
 */
@property (readonly) PasscodeStatus passcodeStatus;

@end
