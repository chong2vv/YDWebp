//
//  CGImage+YDWebp.h
//  YDWebp
//
//  Created by 王远东 on 2022/8/22.
//  Copyright © 2022 wangyuandong. All rights reserved.
//
#import <CoreGraphics/CoreGraphics.h>

CF_IMPLICIT_BRIDGING_ENABLED
CF_ASSUME_NONNULL_BEGIN

// still image
CGImageRef __nullable WebPImageCreateWithData(CFDataRef webpData);
CFDataRef __nullable WebPDataCreateWithImage(CGImageRef image);

// animated image
CG_EXTERN const CFStringRef kWebPAnimatedImageDuration;
CG_EXTERN const CFStringRef kWebPAnimatedImageLoopCount;
CG_EXTERN const CFStringRef kWebPAnimatedImageFrames; // CFArrayRef of CGImageRef

uint32_t WebPImageFrameCountGetFromData(CFDataRef webpData);
CFDictionaryRef __nullable WebPAnimatedImageInfoCreateWithData(CFDataRef webpData);
CFDataRef __nullable WebPDataCreateWithAnimatedImageInfo(CFDictionaryRef imageInfo);

CF_ASSUME_NONNULL_END
CF_IMPLICIT_BRIDGING_DISABLED
