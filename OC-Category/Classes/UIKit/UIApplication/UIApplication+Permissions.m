//
//  UIApplication-Permissions.m
//  UIApplication-Permissions Sample
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import "UIApplication+Permissions.h"
#import <objc/runtime.h>

//Import required frameworks
@import AddressBook;
@import AssetsLibrary;
@import AVFoundation;
@import CoreBluetooth;
@import CoreLocation;
@import CoreMotion;
@import EventKit;

typedef void (^LocationSuccessCallback)();
typedef void (^LocationFailureCallback)();

static char PermissionsLocationManagerPropertyKey;
static char PermissionsLocationBlockSuccessPropertyKey;
static char PermissionsLocationBlockFailurePropertyKey;

@interface UIApplication () <CLLocationManagerDelegate>
@property (nonatomic, retain) CLLocationManager *permissionsLocationManager;
@property (nonatomic, copy) LocationSuccessCallback locationSuccessCallbackProperty;
@property (nonatomic, copy) LocationFailureCallback locationFailureCallbackProperty;
@end


@implementation UIApplication (Permissions)


#pragma mark - Check permissions
-(PermissionAccess)hasAccessToBluetoothLE {
    switch ([[[CBCentralManager alloc] init] state]) {
        case CBCentralManagerStateUnsupported:
            return PermissionAccessUnsupported;
            break;
            
        case CBCentralManagerStateUnauthorized:
            return PermissionAccessDenied;
            break;
            
        default:
            return PermissionAccessGranted;
            break;
    }
}

-(PermissionAccess)hasAccessToCalendar {
    switch ([EKEventStore authorizationStatusForEntityType:EKEntityTypeEvent]) {
        case EKAuthorizationStatusAuthorized:
            return PermissionAccessGranted;
            break;
            
        case EKAuthorizationStatusDenied:
            return PermissionAccessDenied;
            break;
            
        case EKAuthorizationStatusRestricted:
            return PermissionAccessRestricted;
            break;
            
        default:
            return PermissionAccessUnknown;
            break;
    }
}

-(PermissionAccess)hasAccessToContacts {
    switch (ABAddressBookGetAuthorizationStatus()) {
        case kABAuthorizationStatusAuthorized:
            return PermissionAccessGranted;
            break;
            
        case kABAuthorizationStatusDenied:
            return PermissionAccessDenied;
            break;
            
        case kABAuthorizationStatusRestricted:
            return PermissionAccessRestricted;
            break;
            
        default:
            return PermissionAccessUnknown;
            break;
    }
}

-(PermissionAccess)hasAccessToLocation {
    switch ([CLLocationManager authorizationStatus]) {
        case kCLAuthorizationStatusAuthorized:
            return PermissionAccessGranted;
            break;
            
        case kCLAuthorizationStatusDenied:
            return PermissionAccessDenied;
            break;
            
        case kCLAuthorizationStatusRestricted:
            return PermissionAccessRestricted;
            break;
            
        default:
            return PermissionAccessUnknown;
            break;
    }
    return PermissionAccessUnknown;
}

-(PermissionAccess)hasAccessToPhotos {
    switch ([ALAssetsLibrary authorizationStatus]) {
        case ALAuthorizationStatusAuthorized:
            return PermissionAccessGranted;
            break;
            
        case ALAuthorizationStatusDenied:
            return PermissionAccessDenied;
            break;
            
        case ALAuthorizationStatusRestricted:
            return PermissionAccessRestricted;
            break;
            
        default:
            return PermissionAccessUnknown;
            break;
    }
}

-(PermissionAccess)hasAccessToReminders {
    switch ([EKEventStore authorizationStatusForEntityType:EKEntityTypeReminder]) {
        case EKAuthorizationStatusAuthorized:
            return PermissionAccessGranted;
            break;
            
        case EKAuthorizationStatusDenied:
            return PermissionAccessDenied;
            break;
            
        case EKAuthorizationStatusRestricted:
            return PermissionAccessRestricted;
            break;
            
        default:
            return PermissionAccessUnknown;
            break;
    }
    return PermissionAccessUnknown;
}


#pragma mark - Request permissions
-(void)requestAccessToCalendarWithSuccess:(void(^)())accessGranted andFailure:(void(^)())accessDenied {
    EKEventStore *eventStore = [[EKEventStore alloc] init];
    [eventStore requestAccessToEntityType:EKEntityTypeEvent completion:^(BOOL granted, NSError *error) {
        dispatch_async(dispatch_get_main_queue(), ^{
            if (granted) {
                accessGranted();
            } else {
                accessDenied();
            }
        });
    }];
}

-(void)requestAccessToContactsWithSuccess:(void(^)())accessGranted andFailure:(void(^)())accessDenied {
    ABAddressBookRef addressBook = ABAddressBookCreateWithOptions(NULL, NULL);
    if(addressBook) {
        ABAddressBookRequestAccessWithCompletion(addressBook, ^(bool granted, CFErrorRef error) {
            dispatch_async(dispatch_get_main_queue(), ^{
                if (granted) {
                    accessGranted();
                } else {
                    accessDenied();
                }
            });
        });
    }
}

-(void)requestAccessToMicrophoneWithSuccess:(void(^)())accessGranted andFailure:(void(^)())accessDenied {
    AVAudioSession *session = [[AVAudioSession alloc] init];
    [session requestRecordPermission:^(BOOL granted) {
        dispatch_async(dispatch_get_main_queue(), ^{
            if (granted) {
                accessGranted();
            } else {
                accessDenied();
            }
        });
    }];
}

-(void)requestAccessToMotionWithSuccess:(void(^)())accessGranted {
    CMMotionActivityManager *motionManager = [[CMMotionActivityManager alloc] init];
    NSOperationQueue *motionQueue = [[NSOperationQueue alloc] init];
    [motionManager startActivityUpdatesToQueue:motionQueue withHandler:^(CMMotionActivity *activity) {
        accessGranted();
        [motionManager stopActivityUpdates];
    }];
}

-(void)requestAccessToPhotosWithSuccess:(void(^)())accessGranted andFailure:(void(^)())accessDenied {
    ALAssetsLibrary *assetsLibrary = [[ALAssetsLibrary alloc] init];
    [assetsLibrary enumerateGroupsWithTypes:ALAssetsGroupAlbum usingBlock:^(ALAssetsGroup *group, BOOL *stop) {
        accessGranted();
    } failureBlock:^(NSError *error) {
        accessDenied();
    }];
}

-(void)requestAccessToRemindersWithSuccess:(void(^)())accessGranted andFailure:(void(^)())accessDenied {
    EKEventStore *eventStore = [[EKEventStore alloc] init];
    [eventStore requestAccessToEntityType:EKEntityTypeReminder completion:^(BOOL granted, NSError *error) {
        dispatch_async(dispatch_get_main_queue(), ^{
            if (granted) {
                accessGranted();
            } else {
                accessDenied();
            }
        });
    }];
}


#pragma mark - Needs investigating
/*
 -(void)requestAccessToBluetoothLEWithSuccess:(void(^)())accessGranted {
 //REQUIRES DELEGATE - NEEDS RETHINKING
 }
 */

-(void)requestAccessToLocationWithSuccess:(void(^)())accessGranted andFailure:(void(^)())accessDenied {
    self.permissionsLocationManager = [[CLLocationManager alloc] init];
    self.permissionsLocationManager.delegate = self;
    
    self.locationSuccessCallbackProperty = accessGranted;
    self.locationFailureCallbackProperty = accessDenied;
    [self.permissionsLocationManager startUpdatingLocation];
}


#pragma mark - Location manager injection
-(CLLocationManager *)permissionsLocationManager {
    return objc_getAssociatedObject(self, &PermissionsLocationManagerPropertyKey);
}

-(void)setpermissionsLocationManager:(CLLocationManager *)manager {
    objc_setAssociatedObject(self, &PermissionsLocationManagerPropertyKey, manager, OBJC_ASSOCIATION_RETAIN);
}

-(LocationSuccessCallback)locationSuccessCallbackProperty {
    return objc_getAssociatedObject(self, &PermissionsLocationBlockSuccessPropertyKey);
}

-(void)setlocationSuccessCallbackProperty:(LocationSuccessCallback)locationCallbackProperty {
    objc_setAssociatedObject(self, &PermissionsLocationBlockSuccessPropertyKey, locationCallbackProperty, OBJC_ASSOCIATION_COPY);
}

-(LocationFailureCallback)locationFailureCallbackProperty {
    return objc_getAssociatedObject(self, &PermissionsLocationBlockFailurePropertyKey);
}

-(void)setlocationFailureCallbackProperty:(LocationFailureCallback)locationFailureCallbackProperty {
    objc_setAssociatedObject(self, &PermissionsLocationBlockFailurePropertyKey, locationFailureCallbackProperty, OBJC_ASSOCIATION_COPY);
}


#pragma mark - Location manager delegate
- (void)locationManager:(CLLocationManager *)manager didChangeAuthorizationStatus:(CLAuthorizationStatus)status {
    if (status == kCLAuthorizationStatusAuthorized) {
        self.locationSuccessCallbackProperty();
    } else if (status != kCLAuthorizationStatusNotDetermined) {
        self.locationFailureCallbackProperty();
    }
}

@end
