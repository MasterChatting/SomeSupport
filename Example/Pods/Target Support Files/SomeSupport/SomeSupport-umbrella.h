#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "SomeSupport.h"
#import "Support_Common.h"
#import "Support_StringHexDataChange.h"
#import "Support_Time.h"

FOUNDATION_EXPORT double SomeSupportVersionNumber;
FOUNDATION_EXPORT const unsigned char SomeSupportVersionString[];

