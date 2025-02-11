/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAttachmentPropertiesTableViewSection : NSObject <MSCLTokenTextViewDelegate, UITextFieldDelegate> {
    SKUIClientContext *_clientContext;
    <MSCLAttachmentPropertiesTableViewSectionDelegate> *_sectionDelegate;
    float _sectionHeaderHeight;
    int _sectionType;
    NSArray *_tableViewCells;
    MSCLVideoCoverImageSelectionView *_videoCoverImageView;
}

@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <MSCLAttachmentPropertiesTableViewSectionDelegate> *sectionDelegate;
@property (nonatomic, readonly) float sectionHeaderHeight;
@property (nonatomic, readonly) int sectionType;
@property (nonatomic, readonly) UIImage *selectedCoverImage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_newTableViewCellWithContentView:(id)arg1;
- (id)_newTextFieldCellWithTitle:(id)arg1 placeholder:(id)arg2 value:(id)arg3;
- (id)_newTextViewCellWithTitle:(id)arg1 placeholder:(id)arg2 artists:(id)arg3;
- (id)clientContext;
- (void)commitValuesToAttachment:(id)arg1;
- (id)initWithSectionType:(int)arg1 clientContext:(id)arg2;
- (int)numberOfRowsInTableView:(id)arg1;
- (void)resignFirstResponder;
- (id)sectionDelegate;
- (float)sectionHeaderHeight;
- (int)sectionType;
- (id)selectedCoverImage;
- (void)setCoverImage:(id)arg1;
- (void)setSectionDelegate:(id)arg1;
- (void)setTableCellsWithAttachment:(id)arg1 configuration:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (void)textView:(id)arg1 didChange:(int)arg2;
- (id)tokenTextViewForRowAtIndexPath:(id)arg1;

@end
