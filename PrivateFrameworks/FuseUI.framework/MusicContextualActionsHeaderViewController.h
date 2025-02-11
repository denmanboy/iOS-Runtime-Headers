/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicContextualActionsHeaderViewController : UIViewController <MusicContextualActionsHeaderViewDelegate> {
    BOOL _allowsSelection;
    MusicEntityValueContext *_entityValueContext;
    MusicContextualActionsHeaderView *_headerView;
    id /* block */ _selectionHandler;
}

@property (nonatomic) BOOL allowsSelection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MusicEntityValueContext *entityValueContext;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) id /* block */ selectionHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)allowsSelection;
- (void)contextualActionsHeaderViewWasSelected:(id)arg1;
- (id)entityValueContext;
- (id)initWithEntityValueContext:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id /* block */)selectionHandler;
- (void)setAllowsSelection:(BOOL)arg1;
- (void)setSelectionHandler:(id /* block */)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
