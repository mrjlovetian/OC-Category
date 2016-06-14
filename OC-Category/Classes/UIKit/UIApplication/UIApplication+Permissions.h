//
//  UIApplication-Permissions.h
//  UIApplication-Permissions Sample
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//


#import <UIKit/UIKit.h>

@import CoreLocation;

typedef enum {
    PermissionTypeBluetoothLE,
    PermissionTypeCalendar,
    PermissionTypeContacts,
    PermissionTypeLocation,
    PermissionTypeMicrophone,
    PermissionTypeMotion,
    PermissionTypePhotos,
    PermissionTypeReminders,
} PermissionType;

typedef enum {
    PermissionAccessDenied, //User has rejected feature
    PermissionAccessGranted, //User has accepted feature
    PermissionAccessRestricted, //Blocked by parental controls or system settings
    PermissionAccessUnknown, //Cannot be determined
    PermissionAccessUnsupported, //Device doesn't support this - e.g Core Bluetooth
    PermissionAccessMissingFramework, //Developer didn't import the required framework to the project
} PermissionAccess;

@interface UIApplication (Permissions)

//Check permission of service. Cannot check microphone or motion without asking user for permission
-(PermissionAccess)hasAccessToBluetoothLE;
-(PermissionAccess)hasAccessToCalendar;
-(PermissionAccess)hasAccessToContacts;
-(PermissionAccess)hasAccessToLocation;
-(PermissionAccess)hasAccessToPhotos;
-(PermissionAccess)hasAccessToReminders;

//Request permission with callback
-(void)requestAccessToCalendarWithSuccess:(void(^)())accessGranted andFailure:(void(^)())accessDenied;
-(void)requestAccessToContactsWithSuccess:(void(^)())accessGranted andFailure:(void(^)())accessDenied;
-(void)requestAccessToMicrophoneWithSuccess:(void(^)())accessGranted andFailure:(void(^)())accessDenied;
-(void)requestAccessToPhotosWithSuccess:(void(^)())accessGranted andFailure:(void(^)())accessDenied;
-(void)requestAccessToRemindersWithSuccess:(void(^)())accessGranted andFailure:(void(^)())accessDenied;

//Instance methods
-(void)requestAccessToLocationWithSuccess:(void(^)())accessGranted andFailure:(void(^)())accessDenied;

//No failure callback available
-(void)requestAccessToMotionWithSuccess:(void(^)())accessGranted;

//Needs investigating - unsure whether it can be implemented because of required delegate callbacks
//-(void)requestAccessToBluetoothLEWithSuccess:(void(^)())accessGranted;

@end
