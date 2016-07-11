/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGQPAssetManager : NSObject {
    _PASAsset * _commonAsset;
    NSString * _currentABGroup;
    NSString * _currentLocale;
    _PASAsset * _currentPrimaryAsset;
    _PASNotificationToken * _currentPrimaryAssetNotificationToken;
    NSObject<SGQPAssetUpdateDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property NSObject<SGQPAssetUpdateDelegate> *delegate;

+ (id)chooseABGroupForVendorUUID:(id)arg1 fromGroups:(id)arg2;
+ (id)chooseLocaleIdForCurrentLocale:(id)arg1 availableLocales:(id)arg2;
+ (id)preinstalledPathOfAsset:(id)arg1;
+ (id)sharedInstance;
+ (id)thisDeviceVendorUUID;

- (void).cxx_destruct;
- (void)commonAssetReady;
- (id)delegate;
- (id)init;
- (void)loadPreinstalledAsset;
- (void)primaryAssetReady;
- (void)setDelegate:(id)arg1;

@end