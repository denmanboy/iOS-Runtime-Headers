/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaPlaylistDetailViewController : MusicMediaProductDetailViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    NSString *_curatorStoreID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelEditing;
- (void)_handleCameraActionFromButton:(id)arg1;
- (id)_loadDetailHeaderConfiguration;
- (id)_loadProductHeaderContentViewController;
- (id)_loadProductSplitDetailViewController;
- (id)_loadProductSplitMainViewController;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 existingJSProductNativeViewController:(id)arg4 forContentCreation:(BOOL)arg5;
- (id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 existingJSProductNativeViewController:(id)arg4 forContentCreation:(BOOL)arg5 curatorStoreID:(id)arg6;
- (void)mediaProductHeaderContentViewController:(id)arg1 didSelectCameraButton:(id)arg2;
- (void)mediaProductSplitDetailViewController:(id)arg1 didSelectCameraButton:(id)arg2;
- (void)viewDidLoad;

@end
