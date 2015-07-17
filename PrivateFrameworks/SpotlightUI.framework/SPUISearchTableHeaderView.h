/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUISearchTableHeaderView : UITableViewHeaderFooterView {
    SPUISearchBackdropView * _backdropView;
    <SPUISearchTableHeaderViewDelegate> * _delegate;
    UIButton * _moreButton;
    unsigned int  _section;
    NSArray * _tableHeaderViewMarginConstraints;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) SPUISearchBackdropView *backdropView;
@property (nonatomic) <SPUISearchTableHeaderViewDelegate> *delegate;
@property (nonatomic, retain) UIButton *moreButton;
@property (nonatomic) unsigned int section;
@property (retain) NSArray *tableHeaderViewMarginConstraints;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)backdropView;
- (id)delegate;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)moreButton;
- (void)moreButtonPressed;
- (unsigned int)section;
- (void)setBackdropView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFloating:(BOOL)arg1;
- (void)setMoreButton:(id)arg1;
- (void)setMoreButtonVisible:(BOOL)arg1;
- (void)setSection:(unsigned int)arg1;
- (void)setTableHeaderViewMarginConstraints:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)tableHeaderViewMarginConstraints;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateLayoutOnOrientation;
- (void)updateWithTitle:(id)arg1 section:(unsigned int)arg2 isExpanded:(BOOL)arg3;

@end