#ifdef __cplusplus
#import "react-native-custom-cpp.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNCustomCppSpec.h"

@interface CustomCpp : NSObject <NativeCustomCppSpec>
#else
#import <React/RCTBridgeModule.h>

@interface CustomCpp : NSObject <RCTBridgeModule>
#endif

@end
