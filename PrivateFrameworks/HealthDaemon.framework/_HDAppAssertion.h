/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDAppAssertion : NSObject {
    HDAppAssertionManager * _assertionManager;
    NSString * _bundleIdentifier;
    HDDaemon * _daemon;
    bool  _invalidated;
    double  _lastLaunchAttempt;
    long long  _launchErrorCount;
    NSMutableArray * _pendingDataTypeCodes;
    NSMutableDictionary * _pendingLaunchCompletions;
    NSMutableSet * _processAssertions;
    NSObject<OS_dispatch_source> * _processDeathSource;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) HDAppAssertionManager *assertionManager;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic) HDDaemon *daemon;
@property (nonatomic) bool invalidated;
@property (nonatomic, readonly) double lastLaunchAttempt;
@property (nonatomic, readonly) long long launchErrorCount;
@property (nonatomic, readonly) double nextLaunchAttempt;
@property (nonatomic, readonly) NSMutableArray *pendingDataTypeCodes;
@property (nonatomic, retain) NSMutableDictionary *pendingLaunchCompletions;
@property (nonatomic, retain) NSMutableSet *processAssertions;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *processDeathSource;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_queue_acquireAssertionWithCompletion:(id /* block */)arg1;
- (void)_queue_invalidate;
- (id)assertionManager;
- (id)bundleIdentifier;
- (id)daemon;
- (void)extendForDataType:(long long)arg1 completion:(id /* block */)arg2;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 assertionManager:(id)arg2 daemon:(id)arg3 queue:(id)arg4;
- (void)invalidateForDataType:(long long)arg1;
- (bool)invalidated;
- (bool)isEqual:(id)arg1;
- (double)lastLaunchAttempt;
- (long long)launchErrorCount;
- (void)launchWithCompletion:(id /* block */)arg1;
- (double)nextLaunchAttempt;
- (id)pendingDataTypeCodes;
- (id)pendingLaunchCompletions;
- (id)processAssertions;
- (id)processDeathSource;
- (id)queue;
- (void)setAssertionManager:(id)arg1;
- (void)setDaemon:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setPendingLaunchCompletions:(id)arg1;
- (void)setProcessAssertions:(id)arg1;
- (void)setProcessDeathSource:(id)arg1;
- (void)setQueue:(id)arg1;

@end