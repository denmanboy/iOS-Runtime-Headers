/* Generated by RuntimeBrowser.
 */

@protocol MusicTableViewDelegate <UITableViewDelegate>

@optional

- (void)tableView:(MusicTableView *)arg1 didDeselectHeaderViewForSection:(int)arg2;
- (void)tableView:(MusicTableView *)arg1 didSelectAddButtonForCell:(UITableViewCell *)arg2 events:(unsigned int)arg3;
- (void)tableView:(MusicTableView *)arg1 didSelectContextualActionsButton:(UIButton *)arg2 forCell:(UITableViewCell *)arg3;
- (void)tableView:(MusicTableView *)arg1 didSelectContextualActionsButton:(UIButton *)arg2 forSectionHeaderView:(UIView<MusicEntityContentDescriptorViewConfiguring> *)arg3;
- (void)tableView:(MusicTableView *)arg1 didSelectHeaderViewForSection:(int)arg2;
- (void)tableView:(MusicTableView *)arg1 didSelectPlayButtonAction:(unsigned int)arg2 forCell:(UITableViewCell *)arg3;
- (void)tableView:(MusicTableView *)arg1 didSelectPlayButtonAction:(unsigned int)arg2 forSectionHeaderView:(UIView<MusicEntityContentDescriptorViewConfiguring> *)arg3;
- (BOOL)tableView:(MusicTableView *)arg1 shouldForceBottomSeparatorVisibleForSection:(int)arg2;
- (void)tableView:(MusicTableView *)arg1 willDeselectHeaderViewForSection:(int)arg2;
- (void)tableView:(MusicTableView *)arg1 willSelectHeaderViewForSection:(int)arg2;
- (void)tableViewDidLayoutSubviews:(MusicTableView *)arg1;
- (void)tableViewTintColorDidChange:(MusicTableView *)arg1;

@end
