//
//  DeviceHardwareInfo.h
//
//  Common method to retrieve the device model version.
 
#import <Foundation/Foundation.h>
 
@interface DeviceHardwareInfo : NSObject
 
+ (NSString *) deviceModel;
+ (NSString *) deviceModelString;
+ (NSDictionary *) commonNameDictionary;
 
@end
