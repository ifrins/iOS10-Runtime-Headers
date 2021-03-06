/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXSpringBoardServer : AXServer <AXSystemAppServer> {
    AXAccessQueue * _accessQueue;
    NSMutableArray * _actionHandlers;
    id /* block */  _currentAlertHandler;
    NSMutableDictionary * _reachabilityHandlers;
}

@property (nonatomic, retain) AXAccessQueue *accessQueue;
@property (nonatomic, retain) NSMutableArray *actionHandlers;
@property (nonatomic, copy) id /* block */ currentAlertHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *reachabilityHandlers;
@property (readonly) Class superclass;

+ (id)server;

- (id)_axSpringBoardServerInstance;
- (id)_axSpringBoardServerInstanceDelegate;
- (id)_axSpringBoardServerInstanceIfExists;
- (void)_didConnectToClient;
- (void)_didConnectToServer;
- (void)_getPasscodeStatusImmediate:(id /* block */)arg1;
- (id)_handleActionResult:(id)arg1;
- (id)_handleReachabilityResult:(id)arg1;
- (id)_handleReplyResult:(id)arg1;
- (bool)_isSystemAppFrontmostExcludingSiri:(bool)arg1;
- (void)_isSystemAppFrontmostExcludingSiri:(bool)arg1 completion:(id /* block */)arg2;
- (id)_messageForMediaPlayingQueryForBundleID:(id)arg1;
- (id)_serviceName;
- (bool)_shouldDispatchLocally;
- (bool)_shouldValidateEntitlements;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (id)accessQueue;
- (void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2;
- (id)actionHandlers;
- (int)activeApplicationOrientation;
- (long long)activeInterfaceOrientation;
- (void)activeInterfaceOrientation:(id /* block */)arg1;
- (id)allowedMedusaGestures;
- (id)applicationWithIdentifier:(id)arg1;
- (bool)areSystemGesturesDisabledByAccessibility;
- (bool)areSystemGesturesDisabledNatively;
- (void)cancelReachabilityDetection;
- (void)cleanupAlertHandler;
- (bool)clearSideAppState;
- (void)copyStringToPasteboard:(id)arg1;
- (id /* block */)currentAlertHandler;
- (void)dealloc;
- (void)dismissAppSwitcher;
- (bool)dismissSiri;
- (id)focusedAppPID;
- (id)focusedAppProcess;
- (id)focusedApps;
- (bool)hasActiveCall;
- (bool)hasActiveOrPendingCall;
- (bool)hasActiveOrPendingCallOrFaceTime;
- (void)hideAlert;
- (void)hideNotificationCenter;
- (id)init;
- (id)installedApps;
- (bool)isAppSwitcherVisible;
- (bool)isControlCenterVisible;
- (bool)isInspectorMinimized;
- (bool)isMagnifierVisible;
- (void)isMagnifierVisibleWithCompletion:(id /* block */)arg1;
- (bool)isMakingEmergencyCall;
- (bool)isMediaPlaying;
- (bool)isMediaPlayingForApp:(id)arg1;
- (void)isMediaPlayingForApp:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isMultiTaskingActive;
- (bool)isNotificationCenterVisible;
- (bool)isNowPlayingUIVisible;
- (bool)isOrientationLocked;
- (bool)isPointInsideAccessibilityInspector:(id)arg1;
- (bool)isPurpleBuddyAppFrontmost;
- (bool)isReceivingAirPlay;
- (bool)isRingerMuted;
- (bool)isScreenLockedWithPasscode:(bool*)arg1;
- (bool)isScreenSaverVisible;
- (bool)isSettingsAppFrontmost;
- (bool)isSideSwitchUsedForOrientation;
- (bool)isSideSwitcherVisible;
- (bool)isSiriTalkingOrListening;
- (bool)isSiriVisible;
- (bool)isSoftwareUpdateUIVisible;
- (bool)isSpeakThisTemporarilyDisabled;
- (bool)isStickyNotificationVisible;
- (bool)isSyncingRestoringResettingOrUpdating;
- (bool)isSystemAppFrontmost;
- (void)isSystemAppFrontmost:(id /* block */)arg1;
- (bool)isSystemAppFrontmostExludingSiri;
- (bool)isSystemAppShowingAnAlert;
- (bool)isSystemSleeping;
- (bool)isVoiceControlRunning;
- (void)launchMagnifierApp;
- (bool)loadGAXBundleForUnmanagedASAM;
- (void)openAppSwitcher;
- (void)openAssistiveTouchCustomGestureCreation;
- (void)openSCATCustomGestureCreation;
- (bool)openSiri;
- (void)openVoiceControl;
- (void)pauseMedia;
- (void)pauseMediaForApp:(id)arg1;
- (bool)performMedusaGesture:(unsigned long long)arg1;
- (int)pid;
- (void)pid:(id /* block */)arg1;
- (int)purpleBuddyPID;
- (void)purpleBuddyPID:(id /* block */)arg1;
- (id)reachabilityHandlers;
- (double)reachabilityOffset;
- (void)registerReachabilityHandler:(id /* block */)arg1 withIdentifierCallback:(id /* block */)arg2;
- (void)registerSpringBoardActionHandler:(id /* block */)arg1 withIdentifierCallback:(id /* block */)arg2;
- (void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2;
- (void)removeActionHandler:(id)arg1;
- (void)removeReachabilityHandler:(id)arg1;
- (void)resetDimTimer;
- (void)resumeMedia;
- (void)resumeMediaForApp:(id)arg1;
- (void)revealSpotlight;
- (id)runningAppPIDs;
- (id)runningAppProcesses;
- (void)screenLockStatus:(id /* block */)arg1;
- (void)setAccessQueue:(id)arg1;
- (void)setActionHandlers:(id)arg1;
- (void)setCancelGestureActivation:(unsigned long long)arg1 cancelEnabled:(bool)arg2;
- (void)setCurrentAlertHandler:(id /* block */)arg1;
- (void)setHearingAidControlVisible:(bool)arg1;
- (void)setOrientationLocked:(bool)arg1;
- (void)setReachabilityActive:(bool)arg1;
- (void)setReachabilityHandlers:(id)arg1;
- (void)setShowSpeechPlaybackControls:(bool)arg1;
- (void)setSiriIsTalking:(bool)arg1;
- (void)setVolume:(double)arg1;
- (void)showAlert:(long long)arg1 withHandler:(id /* block */)arg2;
- (void)showAlert:(long long)arg1 withHandler:(id /* block */)arg2 withData:(id)arg3;
- (void)showControlCenter:(bool)arg1;
- (void)showNotificationCenter;
- (bool)showNotificationCenter:(bool)arg1;
- (void)simulateEdgePressHaptics;
- (void)startHearingAidServer;
- (void)systemAppInfoWithQuery:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)takeScreenshot;
- (bool)toggleIncomingCall;
- (void)toggleNotificationCenter;
- (int)topEventPidOverride;
- (void)unlockDevice;
- (double)volumeLevel;
- (void)wakeUpDeviceIfNecessary;

@end
