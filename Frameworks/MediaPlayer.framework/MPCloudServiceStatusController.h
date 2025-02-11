/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPCloudServiceStatusController : NSObject <SSVPlaybackLeaseDelegate> {
    unsigned int _URLBagObservationCount;
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned int _accountStoreChangeObservationCount;
    unsigned int _automaticLeaseRefreshCount;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    unsigned int _cloudLibraryObservationCount;
    SSVFairPlaySubscriptionController *_fairPlaySubscriptionController;
    unsigned int _fairPlaySubscriptionStatusObservationCount;
    BOOL _hasLoadedMatchStatus;
    BOOL _hasLoadedURLBag;
    BOOL _hasSubscriptionLease;
    SSVSubscriptionStatus *_lastKnownSubscriptionStatus;
    unsigned int _matchStatus;
    unsigned int _matchStatusObservationCount;
    SSVPlaybackLease *_playbackLease;
    unsigned int _purchaseHistoryObservationCount;
    unsigned int _shouldPlaybackRequireSubscriptionLeaseObservationCount;
    unsigned int _subscriptionAvailabilityObservationCount;
    BOOL _subscriptionAvailable;
    unsigned int _subscriptionLeaseUsageCount;
    unsigned int _subscriptionStatusObservationCount;
}

@property (getter=isCloudLibraryEnabled, nonatomic, readonly) BOOL cloudLibraryEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL hasSubscriptionLease;
@property (nonatomic, readonly) BOOL hasSubscriptionSlot;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int matchStatus;
@property (nonatomic, readonly) SSVPlaybackLease *playbackLease;
@property (getter=isPurchaseHistoryEnabled, nonatomic, readonly) BOOL purchaseHistoryEnabled;
@property (nonatomic, readonly) BOOL shouldPlaybackRequireSubscriptionLease;
@property (getter=isSubscriptionAvailable, nonatomic, readonly) BOOL subscriptionAvailable;
@property (nonatomic, readonly, copy) SSVSubscriptionStatus *subscriptionStatus;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_accountStoreChangedNotification:(id)arg1;
- (id)_activeAccount;
- (void)_beginObservingAccountStoreDidChange;
- (void)_beginObservingURLBag;
- (void)_beginUsingSubscriptionLease;
- (void)_cloudClientAuthenticationDidChange;
- (BOOL)_currentCloudLibraryEnabled;
- (id)_currentFairPlaySubscriptionStatus;
- (BOOL)_currentPurchaseHistoryEnabled;
- (void)_endObservingAccountStoreDidChange;
- (void)_endObservingURLBag;
- (void)_endUsingSubscriptionLease;
- (id)_fairPlaySubscriptionController;
- (void)_fairPlaySubscriptionControllerSubscriptionStatusDidChangeNotification:(id)arg1;
- (void)_networkReachabilityDidChangeNotification:(id)arg1;
- (void)_reloadURLBag;
- (void)_setHasSubscriptionLease:(BOOL)arg1 endReasonType:(unsigned int)arg2;
- (void)_storeFrontDidChangeNotification:(id)arg1;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (void)_updateMatchStatus;
- (void)_updateWithURLBagDictionary:(id)arg1;
- (void)acquireSubscriptionLeaseWithCompletionHandler:(id /* block */)arg1;
- (void)beginAutomaticallyRefreshingSubscriptionLease;
- (void)beginObservingCloudLibraryEnabled;
- (void)beginObservingFairPlaySubscriptionStatus;
- (void)beginObservingMatchStatus;
- (void)beginObservingPurchaseHistoryEnabled;
- (void)beginObservingShouldPlaybackRequireSubscriptionLease;
- (void)beginObservingSubscriptionAvailability;
- (void)beginObservingSubscriptionLease;
- (void)beginObservingSubscriptionStatus;
- (void)dealloc;
- (void)endAutomaticallyRefreshingSubscriptionLease;
- (void)endObservingCloudLibraryEnabled;
- (void)endObservingFairPlaySubscriptionStatus;
- (void)endObservingMatchStatus;
- (void)endObservingPurchaseHistoryEnabled;
- (void)endObservingShouldPlaybackRequireSubscriptionLease;
- (void)endObservingSubscriptionAvailability;
- (void)endObservingSubscriptionLease;
- (void)endObservingSubscriptionStatus;
- (void)endSubscriptionLease;
- (void)getHasSubscriptionLease:(BOOL*)arg1 hasSubscriptionSlot:(BOOL*)arg2;
- (void)getSubscriptionAssetWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getSubscriptionStatusWithOptions:(id)arg1 statusBlock:(id /* block */)arg2;
- (BOOL)hasSubscriptionLease;
- (BOOL)hasSubscriptionSlot;
- (id)init;
- (BOOL)isCloudLibraryEnabled;
- (BOOL)isPurchaseHistoryEnabled;
- (BOOL)isSubscriptionAvailable;
- (unsigned int)matchStatus;
- (id)playbackLease;
- (void)playbackLease:(id)arg1 automaticRefreshDidFinishWithResponse:(id)arg2 error:(id)arg3;
- (void)playbackLease:(id)arg1 didEndWithReasonType:(unsigned int)arg2;
- (void)preheatSubscriptionLeaseRequestsWithCompletionHandler:(id /* block */)arg1;
- (void)refreshSubscriptionLeaseWithCompletionHandler:(id /* block */)arg1;
- (BOOL)shouldPlaybackRequireSubscriptionLease;
- (id)subscriptionStatus;

@end
