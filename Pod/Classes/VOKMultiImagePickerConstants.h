//
//  VOKMultiImagePickerConstants.h
//  VOKMultiImagePicker-iOS
//
//  Created by Luke Quigley on 12/10/14.
//  Copyright (c) 2014 VOKAL LLC. All rights reserved.
//

@import Foundation;

@interface VOKMultiImagePickerConstants : NSObject

//Names of things associated with bundles, etc.
FOUNDATION_EXPORT const struct VOKMultiImagePickerTypeNames {
    //The string representing the bundle type;
    __unsafe_unretained NSString *bundle;
} VOKMultiImagePickerTypeNames;

//Names of things associated with notifications
FOUNDATION_EXPORT const struct VOKMultiImagePickerNotifications {
    //The string representing when an asset is selected in a notification.
    __unsafe_unretained NSString *assetSelected;
    
    //The string representing when an asset is deselected in a notification.
    __unsafe_unretained NSString *assetDeselected;
} VOKMultiImagePickerNotifications;

@end