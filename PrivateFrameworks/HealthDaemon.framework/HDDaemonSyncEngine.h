/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDaemonSyncEngine : NSObject <HDSyncEngine> {
    HDProfile * _profile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HDProfile *profile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_performSyncSession:(id)arg1 error:(id*)arg2;
- (long long)_receivedAnchorForEntityClass:(Class)arg1 store:(id)arg2 error:(id*)arg3;
- (void)_resetStore:(id)arg1;
- (bool)_sendChanges:(id)arg1 session:(id)arg2 error:(id*)arg3;
- (bool)_setReceivedAnchor:(long long)arg1 forEntityClass:(Class)arg2 store:(id)arg3 error:(id*)arg4;
- (id)_syncAnchorMapForSyncEntityClass:(Class)arg1 session:(id)arg2 error:(id*)arg3;
- (bool)_synchronizeSyncEntityClass:(Class)arg1 session:(id)arg2 predicate:(id)arg3 startAnchor:(long long*)arg4 finalAnchor:(long long)arg5 postTransactionBlocks:(id)arg6 error:(id*)arg7;
- (long long)_validateAnchorsForSyncChange:(id)arg1 store:(id)arg2 error:(id*)arg3;
- (bool)_validateSequenceNumberForSyncChange:(id)arg1 store:(id)arg2 error:(id*)arg3;
- (bool)applyAcknowledgedAnchorMap:(id)arg1 forStore:(id)arg2 resetNext:(bool)arg3 error:(id*)arg4;
- (bool)applySyncChange:(id)arg1 forStore:(id)arg2 error:(id*)arg3;
- (bool)applySyncObjectCollection:(id)arg1 forStore:(id)arg2 error:(id*)arg3;
- (bool)getReceivedAnchorMap:(id)arg1 forStore:(id)arg2 error:(id*)arg3;
- (id)initWithProfile:(id)arg1;
- (bool)performSyncSession:(id)arg1 error:(id*)arg2;
- (id)profile;
- (void)resetAnchorsWithFailedChanges:(id)arg1 store:(id)arg2;
- (void)resetStore:(id)arg1;
- (void)setProfile:(id)arg1;

@end