// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
// Autogenerated from Pigeon (v9.0.7), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#import <Foundation/Foundation.h>

@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

/// The codec used by FULUrlLauncherApi.
NSObject<FlutterMessageCodec> *FULUrlLauncherApiGetCodec(void);

@protocol FULUrlLauncherApi
/// Returns true if the URL can definitely be launched.
///
/// @return `nil` only when `error != nil`.
- (nullable NSNumber *)canLaunchURL:(NSString *)url error:(FlutterError *_Nullable *_Nonnull)error;
/// Opens the URL externally, returning true if successful.
- (void)launchURL:(NSString *)url
    universalLinksOnly:(NSNumber *)universalLinksOnly
            completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
/// Opens the URL in an in-app SFSafariViewController, returning true
/// when it has loaded successfully.
- (void)openSafariViewControllerWithURL:(NSString *)url
                             completion:
                                 (void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
/// Closes the view controller opened by [openUrlInSafariViewController].
- (void)closeSafariViewControllerWithError:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void FULUrlLauncherApiSetup(id<FlutterBinaryMessenger> binaryMessenger,
                                   NSObject<FULUrlLauncherApi> *_Nullable api);

NS_ASSUME_NONNULL_END