/*
//  LMErrorInternalErrors.h
//  LMErrorKit
//
//  Created by Jose Vazquez on 10/5/10.
//  Copyright 2010 Little Mustard LLC. All rights reserved.
*/

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT NSString *const kLMErrorInternalDomain;

enum LMErrorInternalError {
    kLMErrorInternalErrorInvalidHandlerReturnValue = 0,
    kLMErrorInternalErrorExpectedSelectorWithOneArguement,
    kLMErrorInternalErrorExpectedSelectorWithTwoArguements,
    kLMErrorInternalErrorThreadDictionaryUnavailable,
    kLMErrorInternalErrorFailedToOpenASLHandle,
    kLMErrorInternalErrorCount
};
typedef int LMErrorInternalError;
