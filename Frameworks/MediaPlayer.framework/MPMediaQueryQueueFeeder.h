/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaQueryQueueFeeder : MPQueueFeeder <MPAVRoutingControllerDelegate, MPShuffleControllerDataSource> {
    MPMediaItem *_cloudDialogAllowedMediaItem;
    MPMediaLibraryConnectionAssertion *_connectionAssertion;
    unsigned int _currentInvalidationRevision;
    unsigned long long _feederRevisionID;
    BOOL _hasValidItems;
    MPMutableBidirectionalDictionary *_indexToIdentifierCache;
    BOOL _isPlaylistQueueFeeder;
    struct vector<long long, std::__1::allocator<long long> > { 
        long long *__begin_; 
        long long *__end_; 
        struct __compressed_pair<long long *, std::__1::allocator<long long> > { 
            long long *__first_; 
        } __end_cap_; 
    } _itemPIDs;
    MPMediaQuery *_query;
    NSArray *_queryItems;
    MPShuffleController *_shuffleController;
}

@property (nonatomic, retain) MPMediaItem *cloudDialogAllowedMediaItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) MPMediaQuery *query;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)audioSessionModeForMediaType:(unsigned int)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_commonInit;
- (void)_handleMediaLibraryDidChange;
- (id)_identifierAtIndex:(unsigned int)arg1;
- (unsigned int)_indexForPersistentID:(unsigned long long)arg1;
- (unsigned int)_indexForSongShuffledIndex:(unsigned int)arg1;
- (void)_invalidateMediaLibraryValues;
- (void)_libraryDidChangeNotification:(id)arg1;
- (id)_mediaItemForPID:(unsigned long long)arg1;
- (unsigned int)_playbackIndexByApplyShuffleType:(unsigned int)arg1 withStartIndex:(unsigned int)arg2 startIndexMediaItem:(id)arg3 shouldKeepConsistentQueueOrder:(BOOL)arg4;
- (void)_verifyQueueInvalidationCompletionHandler:(id /* block */)arg1;
- (id)audioSessionModeForItemAtIndex:(unsigned int)arg1;
- (id)cloudDialogAllowedMediaItem;
- (id)copyRawItemAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasValidItemAtIndex:(unsigned int)arg1;
- (id)identifierAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfItemWithIdentifier:(id)arg1;
- (unsigned int)indexOfMediaItem:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned int)initialPlaybackQueueDepthForStartingIndex:(unsigned int)arg1;
- (Class)itemClass;
- (unsigned int)itemCount;
- (unsigned int)itemCountForShuffleController:(id)arg1;
- (id)itemForIdentifier:(id)arg1;
- (unsigned int)itemTypeForIndex:(unsigned int)arg1;
- (id)mediaItemAtIndex:(unsigned int)arg1;
- (id)pathAtIndex:(unsigned int)arg1;
- (id)playbackInfoForIdentifier:(id)arg1;
- (void)player:(id)arg1 currentItemWillChangeFromItem:(id)arg2;
- (id)query;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCloudDialogAllowedMediaItem:(id)arg1;
- (void)setQuery:(id)arg1;
- (BOOL)shouldReuseQueueFeederForPlaybackContext:(id)arg1;
- (unsigned int)shuffleController:(id)arg1 countOfItemIdentifier:(id)arg2 withMaximumCount:(unsigned int)arg3;
- (id)shuffleController:(id)arg1 identifierForItemAtIndex:(unsigned int)arg2;
- (void)shuffleItemsWithAnchor:(unsigned int*)arg1;
- (unsigned int)unshuffledIndexOfAVItem:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

- (id)_musicEntityValueProviding_representativeCollection;
- (id)entityUniqueIdentifier;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize { float x1; float x2; })arg2 destinationScale:(float)arg3;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)MPU_contentItemIdentifierCollection;

@end
