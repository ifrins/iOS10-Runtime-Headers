/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebPreferences : NSObject <NSCoding> {
    struct WebPreferencesPrivate { struct RetainPtr<NSMutableDictionary> { void *x_1_1_1; } x1; bool x2; struct RetainPtr<NSString> { void *x_3_1_1; } x3; bool x4; bool x5; unsigned int x6; id x7; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; long doublex17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; long x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; struct  struct StylesheetManager<gss::PropertyID> { {} x32; void*x33; char *x34; void*x35; void*x36; void*x37; void*x38; short x39; void*x40; const void*x41; BOOL x42; void*x43; void*x44; void*x45; void*x46; short x47; void*x48; void*x49; const void*x50; double x51; void*x52; void*x53; void*x54; void*x55; void*x56; void*x57; BOOL x58; out void*x59; in void*x60; void*x61; struct  {} x62; void*x63; char *x64; void*x65; void*x66; void*x67; void*x68; } * _private;
}

@property (nonatomic) bool allowsAirPlayForMediaPlayback;
@property (nonatomic) bool allowsAnimatedImageLooping;
@property (nonatomic) bool allowsAnimatedImages;
@property (nonatomic) bool allowsInlineMediaPlaybackAfterFullscreen;
@property (nonatomic) bool attachmentElementEnabled;
@property (nonatomic) bool autosaves;
@property (nonatomic) unsigned long long cacheModel;
@property (nonatomic, copy) NSString *cursiveFontFamily;
@property (nonatomic) int defaultFixedFontSize;
@property (nonatomic) int defaultFontSize;
@property (nonatomic, copy) NSString *defaultTextEncodingName;
@property (nonatomic, copy) NSString *fantasyFontFamily;
@property (nonatomic, copy) NSString *fixedFontFamily;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isJavaEnabled, nonatomic) bool javaEnabled;
@property (nonatomic) bool javaScriptCanOpenWindowsAutomatically;
@property (getter=isJavaScriptEnabled, nonatomic) bool javaScriptEnabled;
@property (nonatomic) bool javaScriptMarkupEnabled;
@property (nonatomic) bool loadsImagesAutomatically;
@property (nonatomic) bool mediaDataLoadsAutomatically;
@property (nonatomic) int minimumFontSize;
@property (nonatomic) int minimumLogicalFontSize;
@property (getter=arePlugInsEnabled, nonatomic) bool plugInsEnabled;
@property (nonatomic) bool privateBrowsingEnabled;
@property (nonatomic, copy) NSString *sansSerifFontFamily;
@property (nonatomic, copy) NSString *serifFontFamily;
@property (nonatomic, copy) NSString *standardFontFamily;
@property (nonatomic) bool suppressesIncrementalRendering;
@property (nonatomic) bool userStyleSheetEnabled;
@property (nonatomic, retain) NSURL *userStyleSheetLocation;
@property (nonatomic) bool usesPageCache;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (id)_IBCreatorID;
+ (void)_checkLastReferenceForIdentifier:(id)arg1;
+ (void)_clearNetworkLoaderSession;
+ (id)_concatenateKeyWithIBCreatorID:(id)arg1;
+ (id)_getInstanceForIdentifier:(id)arg1;
+ (void)_removeReferenceForIdentifier:(id)arg1;
+ (void)_setCurrentNetworkLoaderSessionCookieAcceptPolicy:(unsigned long long)arg1;
+ (void)_setIBCreatorID:(id)arg1;
+ (void)_setInitialDefaultTextEncodingToSystemEncoding;
+ (void)_setInstance:(id)arg1 forIdentifier:(id)arg2;
+ (void)_switchNetworkLoaderToNewTestingSession;
+ (unsigned int)_systemCFStringEncoding;
+ (void)initialize;
+ (void)setWebKitLinkTimeVersion:(int)arg1;
+ (id)standardPreferences;

- (bool)_allowMultiElementImplicitFormSubmission;
- (bool)_allowPasswordEcho;
- (bool)_alwaysRequestGeolocationPermission;
- (bool)_alwaysUseAcceleratedOverflowScroll;
- (double)_backForwardCacheExpirationInterval;
- (bool)_boolValueForKey:(id)arg1;
- (float)_floatValueForKey:(id)arg1;
- (bool)_forceFTPDirectoryListings;
- (id)_ftpDirectoryTemplatePath;
- (int)_integerValueForKey:(id)arg1;
- (int)_interpolationQuality;
- (void)_invalidateCachedPreferences;
- (int)_layoutInterval;
- (id)_localStorageDatabasePath;
- (long long)_longLongValueForKey:(id)arg1;
- (float)_maxParseDuration;
- (float)_minimumZoomFontSize;
- (float)_passwordEchoDuration;
- (void)_postCacheModelChangedNotification;
- (void)_postPreferencesChangedAPINotification;
- (void)_postPreferencesChangedNotification;
- (void)_setAllowMultiElementImplicitFormSubmission:(bool)arg1;
- (void)_setAlwaysRequestGeolocationPermission:(bool)arg1;
- (void)_setAlwaysUseAcceleratedOverflowScroll:(bool)arg1;
- (void)_setBoolValue:(bool)arg1 forKey:(id)arg2;
- (void)_setFTPDirectoryTemplatePath:(id)arg1;
- (void)_setFloatValue:(float)arg1 forKey:(id)arg2;
- (void)_setForceFTPDirectoryListings:(bool)arg1;
- (void)_setIntegerValue:(int)arg1 forKey:(id)arg2;
- (void)_setInterpolationQuality:(int)arg1;
- (void)_setLayoutInterval:(int)arg1;
- (void)_setLocalStorageDatabasePath:(id)arg1;
- (void)_setLongLongValue:(long long)arg1 forKey:(id)arg2;
- (void)_setMaxParseDuration:(float)arg1;
- (void)_setMinimumZoomFontSize:(float)arg1;
- (void)_setPreferenceForTestWithValue:(id)arg1 forKey:(id)arg2;
- (void)_setStandalone:(bool)arg1;
- (void)_setStringValue:(id)arg1 forKey:(id)arg2;
- (void)_setTelephoneNumberParsingEnabled:(bool)arg1;
- (void)_setTextAutosizingEnabled:(bool)arg1;
- (void)_setUnsignedIntValue:(unsigned int)arg1 forKey:(id)arg2;
- (void)_setUnsignedLongLongValue:(unsigned long long)arg1 forKey:(id)arg2;
- (void)_setUseSiteSpecificSpoofing:(bool)arg1;
- (bool)_standalone;
- (id)_stringValueForKey:(id)arg1;
- (void)_synchronizeWebStoragePolicyWithCookiePolicy;
- (bool)_telephoneNumberParsingEnabled;
- (bool)_textAutosizingEnabled;
- (unsigned int)_unsignedIntValueForKey:(id)arg1;
- (unsigned long long)_unsignedLongLongValueForKey:(id)arg1;
- (void)_updatePrivateBrowsingStateTo:(bool)arg1;
- (bool)_useSiteSpecificSpoofing;
- (id)_valueForKey:(id)arg1;
- (bool)accelerated2dCanvasEnabled;
- (bool)acceleratedCompositingEnabled;
- (bool)acceleratedDrawingEnabled;
- (bool)allowFileAccessFromFileURLs;
- (bool)allowUniversalAccessFromFileURLs;
- (bool)allowsAirPlayForMediaPlayback;
- (bool)allowsAlternateFullscreen;
- (bool)allowsAnimatedImageLooping;
- (bool)allowsAnimatedImages;
- (bool)allowsInlineMediaPlaybackAfterFullscreen;
- (bool)allowsPictureInPictureMediaPlayback;
- (long long)applicationCacheDefaultOriginQuota;
- (long long)applicationCacheTotalQuota;
- (bool)applicationChromeModeEnabled;
- (bool)arePlugInsEnabled;
- (bool)asynchronousSpellCheckingEnabled;
- (bool)attachmentElementEnabled;
- (bool)audioPlaybackRequiresUserGesture;
- (unsigned int)audioSessionCategoryOverride;
- (bool)authorAndUserStylesEnabled;
- (bool)automaticallyDetectsCacheModel;
- (bool)autosaves;
- (bool)avKitEnabled;
- (bool)backspaceKeyNavigationEnabled;
- (unsigned long long)cacheModel;
- (bool)canvasUsesAcceleratedDrawing;
- (id)cursiveFontFamily;
- (bool)customElementsEnabled;
- (bool)databasesEnabled;
- (void)dealloc;
- (int)defaultFixedFontSize;
- (int)defaultFontSize;
- (id)defaultTextEncodingName;
- (bool)developerExtrasEnabled;
- (bool)diagnosticLoggingEnabled;
- (void)didRemoveFromWebView;
- (bool)displayListDrawingEnabled;
- (bool)domTimersThrottlingEnabled;
- (bool)downloadAttributeEnabled;
- (int)editableLinkBehavior;
- (void)encodeWithCoder:(id)arg1;
- (bool)experimentalNotificationsEnabled;
- (id)fantasyFontFamily;
- (bool)fetchAPIEnabled;
- (id)fixedFontFamily;
- (bool)forceSoftwareWebGLRendering;
- (bool)fullScreenEnabled;
- (bool)gamepadsEnabled;
- (bool)hiddenPageCSSAnimationSuspensionEnabled;
- (bool)hiddenPageDOMTimerThrottlingEnabled;
- (bool)httpEquivEnabled;
- (bool)hyperlinkAuditingEnabled;
- (id)identifier;
- (bool)imageControlsEnabled;
- (double)incrementalRenderingSuppressionTimeoutInSeconds;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sendChangeNotification:(bool)arg2;
- (bool)inlineMediaPlaybackRequiresPlaysInlineAttribute;
- (bool)invisibleAutoplayNotPermitted;
- (bool)isAVFoundationEnabled;
- (bool)isAVFoundationNSURLSessionEnabled;
- (bool)isCSSGridLayoutEnabled;
- (bool)isDNSPrefetchingEnabled;
- (bool)isDOMPasteAllowed;
- (bool)isFrameFlatteningEnabled;
- (bool)isHixie76WebSocketProtocolEnabled;
- (bool)isInheritURIQueryComponentEnabled;
- (bool)isJavaEnabled;
- (bool)isJavaScriptEnabled;
- (bool)isQTKitEnabled;
- (bool)isSpatialNavigationEnabled;
- (bool)isVideoPluginProxyEnabled;
- (bool)isWebSecurityEnabled;
- (bool)isXSSAuditorEnabled;
- (bool)javaScriptCanAccessClipboard;
- (bool)javaScriptCanOpenWindowsAutomatically;
- (bool)javaScriptMarkupEnabled;
- (int)javaScriptRuntimeFlags;
- (bool)loadsImagesAutomatically;
- (bool)loadsSiteIconsIgnoringImageLoadingPreference;
- (bool)localFileContentSniffingEnabled;
- (bool)localStorageEnabled;
- (bool)lowPowerVideoAudioBufferSizeEnabled;
- (bool)mediaControlsScaleWithPageZoom;
- (bool)mediaDataLoadsAutomatically;
- (id)mediaKeysStorageDirectory;
- (bool)mediaPlaybackAllowsAirPlay;
- (bool)mediaPlaybackAllowsInline;
- (bool)mediaPlaybackRequiresUserGesture;
- (bool)mediaSourceEnabled;
- (bool)metaRefreshEnabled;
- (int)minimumFontSize;
- (int)minimumLogicalFontSize;
- (bool)mockCaptureDevicesEnabled;
- (bool)mockScrollbarsEnabled;
- (bool)networkDataUsageTrackingEnabled;
- (id)networkInterfaceName;
- (bool)notificationsEnabled;
- (bool)offlineWebApplicationCacheEnabled;
- (bool)overrideUserGestureRequirementForMainContent;
- (bool)pageCacheSupportsPlugins;
- (bool)paginateDuringLayoutEnabled;
- (id)pictographFontFamily;
- (bool)plugInSnapshottingEnabled;
- (bool)privateBrowsingEnabled;
- (bool)requestAnimationFrameEnabled;
- (bool)resourceLoadStatisticsEnabled;
- (id)sansSerifFontFamily;
- (id)serifFontFamily;
- (bool)serviceControlsEnabled;
- (void)setAVFoundationEnabled:(bool)arg1;
- (void)setAVFoundationNSURLSessionEnabled:(bool)arg1;
- (void)setAVKitEnabled:(bool)arg1;
- (void)setAccelerated2dCanvasEnabled:(bool)arg1;
- (void)setAcceleratedCompositingEnabled:(bool)arg1;
- (void)setAcceleratedDrawingEnabled:(bool)arg1;
- (void)setAllowFileAccessFromFileURLs:(bool)arg1;
- (void)setAllowUniversalAccessFromFileURLs:(bool)arg1;
- (void)setAllowsAirPlayForMediaPlayback:(bool)arg1;
- (void)setAllowsAlternateFullscreen:(bool)arg1;
- (void)setAllowsAnimatedImageLooping:(bool)arg1;
- (void)setAllowsAnimatedImages:(bool)arg1;
- (void)setAllowsInlineMediaPlaybackAfterFullscreen:(bool)arg1;
- (void)setAllowsPictureInPictureMediaPlayback:(bool)arg1;
- (void)setApplicationCacheDefaultOriginQuota:(long long)arg1;
- (void)setApplicationCacheTotalQuota:(long long)arg1;
- (void)setApplicationChromeModeEnabled:(bool)arg1;
- (void)setAsynchronousSpellCheckingEnabled:(bool)arg1;
- (void)setAttachmentElementEnabled:(bool)arg1;
- (void)setAudioPlaybackRequiresUserGesture:(bool)arg1;
- (void)setAudioSessionCategoryOverride:(unsigned int)arg1;
- (void)setAuthorAndUserStylesEnabled:(bool)arg1;
- (void)setAutomaticallyDetectsCacheModel:(bool)arg1;
- (void)setAutosaves:(bool)arg1;
- (void)setBackspaceKeyNavigationEnabled:(bool)arg1;
- (void)setCSSGridLayoutEnabled:(bool)arg1;
- (void)setCacheModel:(unsigned long long)arg1;
- (void)setCanvasUsesAcceleratedDrawing:(bool)arg1;
- (void)setCursiveFontFamily:(id)arg1;
- (void)setCustomElementsEnabled:(bool)arg1;
- (void)setDNSPrefetchingEnabled:(bool)arg1;
- (void)setDOMPasteAllowed:(bool)arg1;
- (void)setDOMTimersThrottlingEnabled:(bool)arg1;
- (void)setDatabasesEnabled:(bool)arg1;
- (void)setDefaultFixedFontSize:(int)arg1;
- (void)setDefaultFontSize:(int)arg1;
- (void)setDefaultTextEncodingName:(id)arg1;
- (void)setDeveloperExtrasEnabled:(bool)arg1;
- (void)setDiagnosticLoggingEnabled:(bool)arg1;
- (void)setDiskImageCacheEnabled:(bool)arg1;
- (void)setDisplayListDrawingEnabled:(bool)arg1;
- (void)setDownloadAttributeEnabled:(bool)arg1;
- (void)setEditableLinkBehavior:(int)arg1;
- (void)setEnableInheritURIQueryComponent:(bool)arg1;
- (void)setExperimentalNotificationsEnabled:(bool)arg1;
- (void)setFantasyFontFamily:(id)arg1;
- (void)setFetchAPIEnabled:(bool)arg1;
- (void)setFixedFontFamily:(id)arg1;
- (void)setForceSoftwareWebGLRendering:(bool)arg1;
- (void)setFrameFlatteningEnabled:(bool)arg1;
- (void)setFullScreenEnabled:(bool)arg1;
- (void)setGamepadsEnabled:(bool)arg1;
- (void)setHTTPEquivEnabled:(bool)arg1;
- (void)setHiddenPageCSSAnimationSuspensionEnabled:(bool)arg1;
- (void)setHiddenPageDOMTimerThrottlingEnabled:(bool)arg1;
- (void)setHixie76WebSocketProtocolEnabled:(bool)arg1;
- (void)setHyperlinkAuditingEnabled:(bool)arg1;
- (void)setImageControlsEnabled:(bool)arg1;
- (void)setIncrementalRenderingSuppressionTimeoutInSeconds:(double)arg1;
- (void)setInlineMediaPlaybackRequiresPlaysInlineAttribute:(bool)arg1;
- (void)setInvisibleAutoplayNotPermitted:(bool)arg1;
- (void)setJavaEnabled:(bool)arg1;
- (void)setJavaScriptCanAccessClipboard:(bool)arg1;
- (void)setJavaScriptCanOpenWindowsAutomatically:(bool)arg1;
- (void)setJavaScriptEnabled:(bool)arg1;
- (void)setJavaScriptMarkupEnabled:(bool)arg1;
- (void)setJavaScriptRuntimeFlags:(int)arg1;
- (void)setLoadsImagesAutomatically:(bool)arg1;
- (void)setLoadsSiteIconsIgnoringImageLoadingPreference:(bool)arg1;
- (void)setLocalFileContentSniffingEnabled:(bool)arg1;
- (void)setLocalStorageEnabled:(bool)arg1;
- (void)setLowPowerVideoAudioBufferSizeEnabled:(bool)arg1;
- (void)setMediaControlsScaleWithPageZoom:(bool)arg1;
- (void)setMediaDataLoadsAutomatically:(bool)arg1;
- (void)setMediaKeysStorageDirectory:(id)arg1;
- (void)setMediaPlaybackAllowsAirPlay:(bool)arg1;
- (void)setMediaPlaybackAllowsInline:(bool)arg1;
- (void)setMediaPlaybackRequiresUserGesture:(bool)arg1;
- (void)setMediaSourceEnabled:(bool)arg1;
- (void)setMetaRefreshEnabled:(bool)arg1;
- (void)setMinimumFontSize:(int)arg1;
- (void)setMinimumLogicalFontSize:(int)arg1;
- (void)setMockCaptureDevicesEnabled:(bool)arg1;
- (void)setMockScrollbarsEnabled:(bool)arg1;
- (void)setNetworkDataUsageTrackingEnabled:(bool)arg1;
- (void)setNetworkInterfaceName:(id)arg1;
- (void)setNotificationsEnabled:(bool)arg1;
- (void)setOfflineWebApplicationCacheEnabled:(bool)arg1;
- (void)setOverrideUserGestureRequirementForMainContent:(bool)arg1;
- (void)setPageCacheSupportsPlugins:(bool)arg1;
- (void)setPaginateDuringLayoutEnabled:(bool)arg1;
- (void)setPictographFontFamily:(id)arg1;
- (void)setPlugInSnapshottingEnabled:(bool)arg1;
- (void)setPlugInsEnabled:(bool)arg1;
- (void)setPrivateBrowsingEnabled:(bool)arg1;
- (void)setQTKitEnabled:(bool)arg1;
- (void)setRequestAnimationFrameEnabled:(bool)arg1;
- (void)setResourceLoadStatisticsEnabled:(bool)arg1;
- (void)setSansSerifFontFamily:(id)arg1;
- (void)setSerifFontFamily:(id)arg1;
- (void)setServiceControlsEnabled:(bool)arg1;
- (void)setShadowDOMEnabled:(bool)arg1;
- (void)setShouldConvertPositionStyleOnCopy:(bool)arg1;
- (void)setShouldDisplayCaptions:(bool)arg1;
- (void)setShouldDisplaySubtitles:(bool)arg1;
- (void)setShouldDisplayTextDescriptions:(bool)arg1;
- (void)setShouldRespectImageOrientation:(bool)arg1;
- (void)setShowDebugBorders:(bool)arg1;
- (void)setShowRepaintCounter:(bool)arg1;
- (void)setShrinksStandaloneImagesToFit:(bool)arg1;
- (void)setSimpleLineLayoutDebugBordersEnabled:(bool)arg1;
- (void)setSpatialNavigationEnabled:(bool)arg1;
- (void)setStandardFontFamily:(id)arg1;
- (void)setStorageBlockingPolicy:(int)arg1;
- (void)setStorageTrackerEnabled:(bool)arg1;
- (void)setSubpixelCSSOMElementMetricsEnabled:(bool)arg1;
- (void)setSuppressesIncrementalRendering:(bool)arg1;
- (void)setTextDirectionSubmenuInclusionBehavior:(int)arg1;
- (void)setUseLegacyTextAlignPositionedElementBehavior:(bool)arg1;
- (void)setUsePreHTML5ParserQuirks:(bool)arg1;
- (void)setUserStyleSheetEnabled:(bool)arg1;
- (void)setUserStyleSheetLocation:(id)arg1;
- (void)setUsesEncodingDetector:(bool)arg1;
- (void)setUsesPageCache:(bool)arg1;
- (void)setVideoPlaybackRequiresUserGesture:(bool)arg1;
- (void)setVideoPluginProxyEnabled:(bool)arg1;
- (void)setWantsBalancedSetDefersLoadingBehavior:(bool)arg1;
- (void)setWebArchiveDebugModeEnabled:(bool)arg1;
- (void)setWebAudioEnabled:(bool)arg1;
- (void)setWebGL2Enabled:(bool)arg1;
- (void)setWebGLEnabled:(bool)arg1;
- (void)setWebSecurityEnabled:(bool)arg1;
- (void)setXSSAuditorEnabled:(bool)arg1;
- (void)setZoomsTextOnly:(bool)arg1;
- (bool)shadowDOMEnabled;
- (bool)shouldConvertPositionStyleOnCopy;
- (bool)shouldDisplayCaptions;
- (bool)shouldDisplaySubtitles;
- (bool)shouldDisplayTextDescriptions;
- (bool)shouldRespectImageOrientation;
- (bool)showDebugBorders;
- (bool)showRepaintCounter;
- (bool)shrinksStandaloneImagesToFit;
- (bool)simpleLineLayoutDebugBordersEnabled;
- (id)standardFontFamily;
- (int)storageBlockingPolicy;
- (bool)storageTrackerEnabled;
- (bool)subpixelCSSOMElementMetricsEnabled;
- (bool)suppressesIncrementalRendering;
- (int)textDirectionSubmenuInclusionBehavior;
- (bool)useLegacyTextAlignPositionedElementBehavior;
- (bool)usePreHTML5ParserQuirks;
- (bool)userStyleSheetEnabled;
- (id)userStyleSheetLocation;
- (bool)usesEncodingDetector;
- (bool)usesPageCache;
- (bool)videoPlaybackRequiresUserGesture;
- (bool)wantsBalancedSetDefersLoadingBehavior;
- (bool)webArchiveDebugModeEnabled;
- (bool)webAudioEnabled;
- (bool)webGL2Enabled;
- (bool)webGLEnabled;
- (void)willAddToWebView;
- (bool)zoomsTextOnly;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)standardMailWebPreferencesForDisplayStyle:(int)arg1 regenerate:(bool)arg2;

@end