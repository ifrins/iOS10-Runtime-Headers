/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassLibrary : NSObject <PKPassLibraryExportedInterface, PKXPCServiceDelegate> {
    <PKPassLibraryDelegate> * _delegate;
    unsigned long long  _interfaceType;
    PKPassLibrary * _remoteLibrary;
    <NSObject> * _remoteLibraryObserver;
    PKXPCService * _remoteService;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassLibraryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)contactlessInterfaceCanBePresentedFromSource:(long long)arg1;
+ (void)endAutomaticPassPresentationSuppressionWithRequestToken:(unsigned long long)arg1;
+ (bool)isPassLibraryAvailable;
+ (bool)isPaymentPassActivationAvailable;
+ (bool)isSuppressingAutomaticPassPresentation;
+ (unsigned long long)requestAutomaticPassPresentationSuppressionWithResponseHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_activatePaymentPass:(id)arg1 withActivationCode:(id)arg2 activationData:(id)arg3 completion:(id /* block */)arg4;
- (void)_applyDataAccessorToObject:(id)arg1;
- (void)_applyDataAccessorToObjects:(id)arg1;
- (id /* block */)_errorHandlerWithCompletion:(id /* block */)arg1;
- (id /* block */)_errorHandlerWithSemaphore:(id)arg1;
- (id)_extendedRemoteObjectProxy;
- (id)_extendedRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_extendedRemoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (id)_extendedRemoteObjectProxyWithSemaphore:(id)arg1;
- (void)_fetchImageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)_getArchivedObjectWithUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)_getDataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 objectUniqueIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)_getPassWithUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)_getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 limitResults:(bool)arg2 withRetries:(unsigned long long)arg3 handler:(id /* block */)arg4;
- (bool)_hasInterfaceOfType:(unsigned long long)arg1;
- (bool)_hasRemoteLibrary;
- (id)_inAppRemoteObjectProxy;
- (id)_inAppRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_inAppRemoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (id)_inAppRemoteObjectProxyWithSemaphore:(id)arg1;
- (id)_passesOfType:(unsigned long long)arg1 withRetries:(unsigned long long)arg2;
- (id)_passesWithRetries:(unsigned long long)arg1;
- (void)_postLibraryChangeWithUserInfo:(id)arg1;
- (id)_remoteLibrary;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (bool)_setSetting:(unsigned long long)arg1 enabled:(bool)arg2 forPass:(id)arg3;
- (void)activatePaymentPass:(id)arg1 withActivationCode:(id)arg2 completion:(id /* block */)arg3;
- (void)activatePaymentPass:(id)arg1 withActivationData:(id)arg2 completion:(id /* block */)arg3;
- (void)addPasses:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)archiveForObjectWithUniqueID:(id)arg1;
- (bool)canAddPassOfType:(unsigned long long)arg1;
- (bool)canAddPaymentPassWithPrimaryAccountIdentifier:(id)arg1;
- (void)catalogChanged:(id)arg1 withNewPasses:(id)arg2;
- (void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
- (void)contactlessInterfaceDidPresentFromSource:(long long)arg1;
- (bool)containsPass:(id)arg1;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 objectUniqueIdentifier:(id)arg3;
- (void)dealloc;
- (id)defaultPaymentPasses;
- (id)delegate;
- (id)diffForPassUpdateUserNotificationWithIdentifier:(id)arg1;
- (void)enabledValueAddedServicePassesWithCompletion:(id /* block */)arg1;
- (void)fetchContentForUniqueID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)fetchCurrentRelevantPassInfo:(id /* block */)arg1;
- (void)fetchHasCandidatePasses:(id /* block */)arg1;
- (void)fetchImageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)getContainmentStatusAndSettingsForPass:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getPassUniqueIdentifiersForFieldProperties:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getPassesAndCatalog:(bool)arg1 withHandler:(id /* block */)arg2;
- (void)getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 withHandler:(id /* block */)arg2;
- (void)getPassesWithUniqueIdentifiers:(id)arg1 handler:(id /* block */)arg2;
- (void)getRouteRelevantPassesFromLocation:(id)arg1 handler:(id /* block */)arg2;
- (void)hasInAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)hasInAppPaymentPassesForNetworks:(id)arg1 withHandler:(id /* block */)arg2;
- (void)hasInAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 withHandler:(id /* block */)arg2;
- (bool)hasPassesOfType:(unsigned long long)arg1;
- (void)inAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)inAppPaymentPassesForNetworks:(id)arg1 withHandler:(id /* block */)arg2;
- (void)inAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 withHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithMachServiceName:(id)arg1 resumeNotificationName:(id)arg2 interfaceType:(unsigned long long)arg3;
- (void)introduceDatabaseIntegrityProblem;
- (bool)isPassbookVisible;
- (bool)isPaymentPassActivationAvailable;
- (bool)isRemovingPassesOfType:(unsigned long long)arg1;
- (void)logDelayExitReasons;
- (bool)migrateData;
- (void)noteAccountChanged;
- (void)noteAccountDeleted;
- (void)noteObjectSharedWithUniqueID:(id)arg1;
- (void)notifyPassUsed:(id)arg1 fromSource:(long long)arg2;
- (void)nukeDatabaseAndExit;
- (void)openPaymentSetup;
- (void)passAdded:(id)arg1;
- (void)passRemoved:(id)arg1;
- (void)passUpdated:(id)arg1;
- (id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)passWithUniqueID:(id)arg1;
- (id)passes;
- (id)passesOfType:(unsigned long long)arg1;
- (id)passesPendingActivation;
- (void)presentContactlessInterfaceForDefaultPassFromSource:(long long)arg1 completion:(id /* block */)arg2;
- (void)presentContactlessInterfaceForPassWithUniqueIdentifier:(id)arg1 fromSource:(long long)arg2 completion:(id /* block */)arg3;
- (void)presentPaymentPass:(id)arg1;
- (void)recomputeRelevantPassesWithSearchMode:(long long)arg1;
- (id)remotePaymentPasses;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)removeAllScheduledActivities;
- (void)removePass:(id)arg1;
- (void)removePassWithUniqueID:(id)arg1 diagnosticReason:(id)arg2;
- (void)removePassesOfType:(unsigned long long)arg1;
- (void)removePassesOfType:(unsigned long long)arg1 withDiagnosticReason:(id)arg2;
- (void)removingPassesOfType:(unsigned long long)arg1 didFinishWithSuccess:(bool)arg2;
- (void)removingPassesOfType:(unsigned long long)arg1 didUpdateWithProgress:(double)arg2;
- (bool)replacePassWithPass:(id)arg1;
- (void)requestContactlessInterfaceSuppressionFromUserWithCompletion:(id /* block */)arg1;
- (void)requestPersonalizationOfPassWithUniqueIdentifier:(id)arg1 contact:(id)arg2 personalizationToken:(id)arg3 requiredPersonalizationFields:(unsigned long long)arg4 personalizationSource:(unsigned long long)arg5 handler:(id /* block */)arg6;
- (void)requestUpdateOfObjectWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)resetSettingsForPass:(id)arg1;
- (void)sendUserEditedCatalog:(id)arg1;
- (bool)setAutomaticPresentationEnabled:(bool)arg1 forPass:(id)arg2;
- (bool)setAutomaticUpdatesEnabled:(bool)arg1 forPass:(id)arg2;
- (void)setDelegate:(id)arg1;
- (bool)setNotificationServiceUpdatesEnabled:(bool)arg1 forPass:(id)arg2;
- (bool)setShowInLockScreenEnabled:(bool)arg1 forPass:(id)arg2;
- (void)shuffleGroups:(int)arg1;
- (void)updateSettings:(unsigned long long)arg1 forObjectWithUniqueID:(id)arg2;

@end