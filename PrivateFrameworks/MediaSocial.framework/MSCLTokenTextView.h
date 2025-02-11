/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLTokenTextView : UITextView {
    <MSCLTokenTextViewDelegate> *_changeDelegate;
    int _maximumTagLength;
    NSString *_tagDelimeter;
    NSMutableArray *_tokenViews;
}

@property (nonatomic) <MSCLTokenTextViewDelegate> *changeDelegate;
@property (nonatomic) int maximumTagLength;
@property (nonatomic, readonly, copy) NSString *pendingTagForSelectedRange;
@property (nonatomic, copy) NSString *tagDelimeter;

- (void).cxx_destruct;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_tagRangeForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)changeDelegate;
- (void)enumerateTokenAttachmentsUsingBlock:(id /* block */)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (void)insertTokenWithAttachment:(id)arg1;
- (int)maximumTagLength;
- (id)pendingTagForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 usedRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (id)pendingTagForSelectedRange;
- (void)reloadTokenSelection;
- (void)reloadTokenViews;
- (void)replaceTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withTokenAttachment:(id)arg2 suffix:(id)arg3;
- (BOOL)resignFirstResponder;
- (BOOL)selectTokenAtIndex:(int)arg1;
- (void)setChangeDelegate:(id)arg1;
- (void)setMaximumTagLength:(int)arg1;
- (void)setTagDelimeter:(id)arg1;
- (id)tagDelimeter;
- (id)textWithResolvedTokenStrings;

@end
