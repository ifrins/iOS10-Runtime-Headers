/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessFriendsCloudKitManager : NSObject <APSConnectionDelegate, HDFitnessFriendsManagerReadyObserver> {
    HDFitnessFriendsNotificationStep * _achievementNotificationStep;
    CKShare * _activityDataShare;
    HDFitnessFriendsNotificationStep * _activitySnapshotNotificationStep;
    APSConnection * _apsConnection;
    bool  _cloudKitAccountActive;
    HDFitnessFriendsCloudKitUtility * _cloudKitUtility;
    CKContainer * _container;
    bool  _fetchExecuting;
    bool  _fetchPending;
    HDFitnessFriendsManager * _fitnessFriendsManager;
    bool  _hasCompletedFirstFetch;
    HDFitnessFriendsNotificationStep * _notificationEventNotificationStep;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    bool  _pushNotificationRecieved;
    bool  _readyForOperations;
    HDFitnessFriendsNotificationStep * _relationshipNotificationStep;
    HDFitnessFriendsNotificationStep * _remoteRelationshipNotificationStep;
    NSObject<OS_dispatch_queue> * _serialQueue;
    HDFitnessFriendsCloudKitServerChangeTokenCache * _serverChangeTokenCache;
    HDFitnessFriendsNotificationStep * _workoutNotificationStep;
}

@property (nonatomic, retain) HDFitnessFriendsCloudKitUtility *cloudKitUtility;
@property (nonatomic, retain) CKContainer *container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCompletedFirstFetch;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool readyForOperations;
@property (readonly) Class superclass;

+ (id)_activityDataShareRecordID;
+ (id)_subscriptionWithID:(id)arg1 recordType:(id)arg2 highPriority:(bool)arg3;
+ (id)activityDataRecordZoneID;
+ (id)activityDataRootRecordID;

- (void).cxx_destruct;
- (id)_apsEnvironmentString;
- (void)_cloudKitAccountStatusChanged:(id)arg1;
- (void)_createActivityDataShareWithCompletion:(id /* block */)arg1;
- (void)_createNotificationSteps;
- (void)_enumerateRecordsByRecordZoneID:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_fetchAllChangesEnqueueingNewFetchIfNecessary:(bool)arg1 completion:(id /* block */)arg2;
- (void)_fetchCloudKitAccountStatusAndNotifyOfChanges;
- (id)_friendUUIDForActivityDataShareRecordZoneID:(id)arg1;
- (void)_handleIncomingNotification:(id)arg1;
- (void)_handleNewPrivateDatabaseRecordChanges:(id)arg1 sharedDatabaseRecordChanges:(id)arg2;
- (void)_pushDisable;
- (void)_pushEnable;
- (void)_queue_checkForAndHandleCloudKitAccountChanges;
- (void)_queue_clearChangeTokenCacheAndFriendListWithCompletion:(id /* block */)arg1;
- (void)_queue_notifyObserversOfBeginUpdates;
- (void)_queue_notifyObserversOfEndUpdates;
- (void)_queue_notifyObserversOfFinishedFetching;
- (void)_queue_performNewAccountInitialSetupTasks;
- (void)_queue_performNotificationStep:(id)arg1 onRecords:(id)arg2 dispatchGroup:(id)arg3;
- (void)_queue_setHasCompletedFirstFetch:(bool)arg1;
- (void)_queue_startFetchAllChangesOperationWithCompletion:(id /* block */)arg1;
- (void)_saveSubscriptions:(id)arg1 intoDatabase:(id)arg2 completion:(id /* block */)arg3;
- (void)_subscribeToChangesInDatabase:(id)arg1 subscriptionPrefix:(id)arg2 recordTypesWithPriority:(id)arg3 completion:(id /* block */)arg4;
- (void)_subscribeToChangesInPrivateDatabaseWithCompletion:(id /* block */)arg1;
- (void)_subscribeToChangesInSharedDatabaseWithCompletion:(id /* block */)arg1;
- (void)_verifyOrCreateSubscriptionsWithCompletion:(id /* block */)arg1;
- (void)acceptSharesWithURLs:(id)arg1 completion:(id /* block */)arg2;
- (void)addObserver:(id)arg1;
- (void)addParticipantWithCloudKitAddress:(id)arg1 toShares:(id)arg2 completion:(id /* block */)arg3;
- (void)cloudKitAccountStatusWithCompletion:(id /* block */)arg1;
- (id)cloudKitUtility;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (id)container;
- (void)createShareWithRootRecord:(id)arg1 otherRecordsToSave:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void)fetchAllChangesIfNotCurrentlyFetchingWithCompletion:(id /* block */)arg1;
- (void)fetchAllChangesWithCompletion:(id /* block */)arg1;
- (void)fetchAndHandleAccountStatus;
- (void)fetchOrCreateActivityDataShareWithCompletion:(id /* block */)arg1;
- (void)fetchShareWithShareRecordID:(id)arg1 completion:(id /* block */)arg2;
- (void)fitnessFriendsManagerReady:(id)arg1;
- (void)forceSaveRecordsIntoPrivateDatabaseIgnoringServerChanges:(id)arg1 completion:(id /* block */)arg2;
- (bool)hasCompletedFirstFetch;
- (id)init;
- (bool)readyForOperations;
- (void)removeObserver:(id)arg1;
- (void)removeParticpantWithCloudKitAddress:(id)arg1 toShares:(id)arg2 completion:(id /* block */)arg3;
- (void)saveRecordsIntoPrivateDatabase:(id)arg1 completion:(id /* block */)arg2;
- (void)setCloudKitUtility:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setHasCompletedFirstFetch:(bool)arg1;
- (id)shareURLForShare:(id)arg1;

@end
