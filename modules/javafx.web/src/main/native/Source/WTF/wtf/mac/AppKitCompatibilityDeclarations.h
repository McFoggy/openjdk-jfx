/*
 * Copyright (C) 2016 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef AppKitCompatibilityDeclarations_h
#define AppKitCompatibilityDeclarations_h

#import <Availability.h>

#if __MAC_OS_X_VERSION_MAX_ALLOWED < 101300
#import <AppKit/AppKit.h>
#endif

#if __MAC_OS_X_VERSION_MAX_ALLOWED < 101300

typedef NSInteger NSControlStateValue;
static const NSControlStateValue NSControlStateValueMixed = NSMixedState;
static const NSControlStateValue NSControlStateValueOff = NSOffState;
static const NSControlStateValue NSControlStateValueOn = NSOnState;

static const NSLevelIndicatorStyle NSLevelIndicatorStyleRelevancy = NSRelevancyLevelIndicatorStyle;
static const NSLevelIndicatorStyle NSLevelIndicatorStyleContinuousCapacity = NSContinuousCapacityLevelIndicatorStyle;
static const NSLevelIndicatorStyle NSLevelIndicatorStyleDiscreteCapacity = NSDiscreteCapacityLevelIndicatorStyle;
static const NSLevelIndicatorStyle NSLevelIndicatorStyleRating = NSRatingLevelIndicatorStyle;

#endif // __MAC_OS_X_VERSION_MAX_ALLOWED < 101300

#endif // AppKitCompatibilityDeclarations_h
