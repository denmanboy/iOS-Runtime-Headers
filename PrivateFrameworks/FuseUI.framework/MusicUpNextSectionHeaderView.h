/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicUpNextSectionHeaderView : UITableViewHeaderFooterView {
    UIButton *_addButton;
    UIButton *_clearButton;
    <MusicUpNextSectionHeaderDelegate> *_delegate;
    MusicUpNextPunchOutView *_punchOutView;
    int _section;
    BOOL _showsAddButton;
    BOOL _showsClearButton;
    UILabel *_titleLabel;
}

@property (nonatomic) <MusicUpNextSectionHeaderDelegate> *delegate;
@property (nonatomic, copy) NSString *headerText;
@property (nonatomic) int section;
@property (nonatomic) BOOL showsAddButton;
@property (nonatomic) BOOL showsClearButton;

+ (float)heightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_addButtonPressed;
- (id)_buttonStringForText:(id)arg1;
- (void)_clearButtonPressed;
- (id)delegate;
- (void)didMoveToSuperview;
- (id)headerText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)invalidateIntrinsicContentSize;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)removeFromSuperview;
- (int)section;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHeaderText:(id)arg1;
- (void)setSection:(int)arg1;
- (void)setShowsAddButton:(BOOL)arg1;
- (void)setShowsClearButton:(BOOL)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (BOOL)showsAddButton;
- (BOOL)showsClearButton;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)tintColorDidChange;

@end
