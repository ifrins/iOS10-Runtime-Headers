/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFUserAuthenticationController : NSObject <SBFAuthenticationStatusProvider, SBFMobileKeyBagObserver, SBFPasscodeFieldChangeObserver, SBFUserAuthenticationModelDelegate> {
    SBFAuthenticationAssertionManager * _assertionManager;
    long long  _authenticationState;
    bool  _hasBeenAuthenticatedOnceSinceBoot;
    bool  _hasPasscodeSet;
    bool  _inSecureMode;
    SBFMobileKeyBag * _keybag;
    bool  _lastAuthStateWasAuthenticated;
    NSData * _lastIncorrectPasscodeAttempt;
    NSDate * _lastRevokedAuthenticationDate;
    <SBFUserAuthenticationModel> * _model;
    NSHashTable * _observers;
    bool  _okToSendNotifications;
    <SBFAuthenticationPolicy> * _policy;
    NSMutableArray * _responders;
    struct __CFRunLoopObserver { } * _runLoopObserver;
    bool  _shouldFetchAuthenticationState;
    SBFAuthenticationAssertion * _transientAuthCheckingAssertion;
    PCPersistentTimer * _unblockTimer;
}

@property (getter=_assertionManager, setter=_setAssertionManager:, nonatomic, retain) SBFAuthenticationAssertionManager *assertionManager;
@property (getter=_authenticationState, setter=_setAuthenticationState:, nonatomic) long long authenticationState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_hasBeenAuthenticatedOnceSinceBoot, setter=_setHasBeenAuthenticatedOnceSinceBoot:, nonatomic) bool hasBeenAuthenticatedOnceSinceBoot;
@property (nonatomic) bool hasPasscodeSet;
@property (readonly) unsigned long long hash;
@property (getter=_isInSecureMode, setter=_setInSecureMode:, nonatomic) bool inSecureMode;
@property (getter=_lastAuthStateWasAuthenticated, setter=_setLastAuthStateWasAuthenticated:, nonatomic) bool lastAuthStateWasAuthenticated;
@property (getter=_lastIncorrectPasscodeAttempt, setter=_setLastIncorrectPasscodeAttempt:, nonatomic, retain) NSData *lastIncorrectPasscodeAttempt;
@property (nonatomic, readonly) NSDate *lastRevokedAuthenticationDate;
@property (getter=_model, setter=_setModel:, nonatomic, retain) <SBFUserAuthenticationModel> *model;
@property (getter=_observers, setter=_setObservers:, nonatomic, retain) NSHashTable *observers;
@property (getter=_okToSendNotifications, setter=_setOkToSendNotifications:, nonatomic) bool okToSendNotifications;
@property (getter=_policy, setter=_setPolicy:, nonatomic, retain) <SBFAuthenticationPolicy> *policy;
@property (getter=_responders, setter=_setResponders:, nonatomic, retain) NSMutableArray *responders;
@property (getter=_runLoopObserver, setter=_setRunLoopObserver:, nonatomic) struct __CFRunLoopObserver { }*runLoopObserver;
@property (getter=_shouldFetchAuthenticationState, setter=_setShouldFetchAuthenticationState:, nonatomic) bool shouldFetchAuthenticationState;
@property (readonly) Class superclass;
@property (getter=_transientAuthCheckingAssertion, setter=_setTransietAuthCheckingAssertion:, nonatomic, retain) SBFAuthenticationAssertion *transientAuthCheckingAssertion;
@property (getter=_unblockTimer, setter=_setUnblockTimer:, nonatomic, retain) PCPersistentTimer *unblockTimer;

+ (long long)_extendedKeybagState;
+ (bool)_isInBioUnlockState;
+ (bool)_isInGracePeriodState;

- (void).cxx_destruct;
- (void)_addAsFirstResponder:(id)arg1;
- (void)_addPrivateAuthenticationObserver:(id)arg1;
- (id)_assertionManager;
- (bool)_authenticateIfInGracePeriod;
- (bool)_authenticateWithPasscodeData:(id)arg1 outError:(id*)arg2;
- (long long)_authenticationState;
- (bool)_boolForAuthenticationResult:(long long)arg1;
- (void)_clearBlockedState;
- (void)_clearUnblockTimer;
- (void)_establishAuthenticationStateForInit:(long long)arg1;
- (long long)_evaluateAuthenticationAttempt:(id)arg1 outError:(id*)arg2;
- (long long)_evaluateMesaAttempt:(id)arg1;
- (long long)_evaluatePasscodeAttempt:(id)arg1 outError:(id*)arg2;
- (void)_handleFailedAuthentication:(id)arg1 error:(id)arg2 responder:(id)arg3;
- (void)_handleInvalidAuthentication:(id)arg1 responder:(id)arg2;
- (void)_handleSuccessfulAuthentication:(id)arg1 responder:(id)arg2;
- (bool)_hasBeenAuthenticatedOnceSinceBoot;
- (void)_initializeAuthenticationStateAndDateForLockState:(long long)arg1;
- (void)_invalidateCachedPasscodeLockState;
- (bool)_isInSecureMode;
- (bool)_isPermanentlyBlocked;
- (bool)_isTemporarilyBlocked;
- (bool)_isUserAuthenticated;
- (bool)_lastAuthStateWasAuthenticated;
- (id)_lastIncorrectPasscodeAttempt;
- (id)_model;
- (void)_notifyAboutTemporaryBlockStatusChanged;
- (void)_notifyClientsOfAuthenticationResult:(long long)arg1 forRequest:(id)arg2 error:(id)arg3 withResponder:(id)arg4;
- (void)_notifyOfAuthenticationSuccess;
- (id)_observers;
- (bool)_okToSendNotifications;
- (bool)_performNilPasscodeCheck;
- (id)_policy;
- (bool)_processAuthenticationRequest:(id)arg1 responder:(id)arg2;
- (void)_removeAuthResponder:(id)arg1;
- (void)_removePrivateAuthenticationObserver:(id)arg1;
- (id)_responders;
- (void)_revokeAuthenticationImmediately:(bool)arg1;
- (struct __CFRunLoopObserver { }*)_runLoopObserver;
- (void)_scheduleUnblockTimer;
- (void)_setAssertionManager:(id)arg1;
- (void)_setAuthState:(long long)arg1;
- (void)_setAuthenticationState:(long long)arg1;
- (void)_setHasBeenAuthenticatedOnceSinceBoot:(bool)arg1;
- (void)_setInSecureMode:(bool)arg1;
- (void)_setLastAuthStateWasAuthenticated:(bool)arg1;
- (void)_setLastIncorrectPasscodeAttempt:(id)arg1;
- (void)_setModel:(id)arg1;
- (void)_setObservers:(id)arg1;
- (void)_setOkToSendNotifications:(bool)arg1;
- (void)_setPolicy:(id)arg1;
- (void)_setResponders:(id)arg1;
- (void)_setRunLoopObserver:(struct __CFRunLoopObserver { }*)arg1;
- (void)_setSecureMode:(bool)arg1 postNotification:(bool)arg2;
- (void)_setShouldFetchAuthenticationState:(bool)arg1;
- (void)_setTransietAuthCheckingAssertion:(id)arg1;
- (void)_setUnblockTimer:(id)arg1;
- (void)_setupPolicy:(id)arg1;
- (void)_setup_runLoopObserverIfNecessary;
- (bool)_shouldFetchAuthenticationState;
- (bool)_shouldRevokeAuthenticationNow;
- (double)_timeUntilUnblockedSinceReferenceDate;
- (id)_transientAuthCheckingAssertion;
- (id)_unblockTimer;
- (void)_unblockTimerFired;
- (void)_uncachePasscodeIfNecessary;
- (void)_updateAuthenticationState;
- (void)_updateAuthenticationStateAndDateForLockState:(id)arg1;
- (void)_updateAuthenticationStateAndFirstAuthenticationForLockState:(long long)arg1;
- (void)_updateAuthenticationStateImmediately:(bool)arg1;
- (void)_updateHasPasscodeSetForLockState:(long long)arg1;
- (void)_updateSecureModeIfNecessaryForNewAuthState;
- (void)addAsFirstResponder:(id)arg1;
- (void)addAuthenticationAssertion:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)deviceLockModelRequestsDeviceWipe:(id)arg1;
- (void)deviceLockStateMayHaveChangedForModel:(id)arg1;
- (bool)hasAuthenticatedAtLeastOnceSinceBoot;
- (bool)hasPasscodeSet;
- (id)initWithAssertionManager:(id)arg1 policy:(id)arg2;
- (id)initWithAssertionManager:(id)arg1 policy:(id)arg2 keybag:(id)arg3 model:(id)arg4;
- (bool)isAssertionValid:(id)arg1;
- (bool)isAuthenticated;
- (bool)isAuthenticatedCached;
- (void)keybag:(id)arg1 extendedStateDidChange:(id)arg2;
- (void)keybagDidUnlockForTheFirstTime:(id)arg1;
- (id)lastRevokedAuthenticationDate;
- (void)notePasscodeEntryBegan;
- (void)notePasscodeEntryCancelled;
- (void)processAuthenticationRequest:(id)arg1;
- (void)processAuthenticationRequest:(id)arg1 responder:(id)arg2;
- (void)removeAuthenticationAssertion:(id)arg1;
- (void)removeResponder:(id)arg1;
- (void)revokeAuthenticationIfNecessary;
- (void)revokeAuthenticationImmediately;
- (void)revokeAuthenticationImmediatelyIfNecessary;
- (void)setHasPasscodeSet:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
