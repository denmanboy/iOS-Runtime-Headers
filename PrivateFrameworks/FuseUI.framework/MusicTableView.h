/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicTableView : MusicBasicTableView {
    BOOL _enforcesMinimumLayoutMargin;
    int _highlightedSectionHeaderViewIndex;
    BOOL _rightSeparatorInsetFollowsLayoutMargin;
    int _selectedSectionHeaderViewIndex;
    BOOL _shouldTreatContentOffsetChangesAsDeltas;
}

@property (nonatomic) <MusicTableViewDelegate> *delegate;
@property (nonatomic) BOOL enforcesMinimumLayoutMargin;
@property (nonatomic, readonly) int indexForSelectedSectionHeader;
@property (nonatomic) BOOL rightSeparatorInsetFollowsLayoutMargin;
@property (nonatomic) BOOL shouldTreatContentOffsetChangesAsDeltas;
@property (nonatomic, readonly, copy) NSArray *visibleSectionHeaderViews;

- (void)_clearHeaderViewHighlightAnimated:(BOOL)arg1;
- (void)_clearHeaderViewSelectionAnimated:(BOOL)arg1;
- (int)_sectionForSelectableHeaderView:(id)arg1;
- (BOOL)_shouldDrawSeparatorAtBottomOfSection:(int)arg1;
- (void)_touchesBegan:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3;
- (void)_touchesCancelled:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3;
- (void)_touchesEnded:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3;
- (void)_touchesMoved:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3;
- (void)_updateRightSeparatorInset;
- (void)deselectHeaderForSection:(int)arg1 animated:(BOOL)arg2;
- (BOOL)enforcesMinimumLayoutMargin;
- (int)indexForSelectedSectionHeader;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })layoutMargins;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (BOOL)rightSeparatorInsetFollowsLayoutMargin;
- (void)selectHeaderForSection:(int)arg1 animated:(BOOL)arg2;
- (void)setEnforcesMinimumLayoutMargin:(BOOL)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setRightSeparatorInsetFollowsLayoutMargin:(BOOL)arg1;
- (void)setShouldTreatContentOffsetChangesAsDeltas:(BOOL)arg1;
- (BOOL)shouldTreatContentOffsetChangesAsDeltas;
- (void)tintColorDidChange;
- (id)visibleSectionHeaderViews;

@end
