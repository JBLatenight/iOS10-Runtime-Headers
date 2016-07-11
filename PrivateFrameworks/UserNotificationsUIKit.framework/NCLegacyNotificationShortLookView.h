/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCLegacyNotificationShortLookView : NCNotificationShortLookView {
    UIView * _additionalContentAccessoryView;
    double  _additionalContentHeight;
    double  _additionalContentPercentRevealed;
    UILabel * _expandedSecondaryLabel;
    NCLegacyNotificationGrabberView * _grabber;
}

@property (nonatomic, retain) UIView *additionalContentAccessoryView;
@property (nonatomic) double additionalContentHeight;
@property (nonatomic, readonly) double additionalContentHeightDelta;
@property (nonatomic) double additionalContentPercentRevealed;
@property (getter=isAdditionalContentRevealed, nonatomic, readonly) bool additionalContentRevealed;
@property (nonatomic, retain) UILabel *expandedSecondaryLabel;
@property (nonatomic, retain) NCLegacyNotificationGrabberView *grabber;

- (void).cxx_destruct;
- (bool)_hasAdditionalContent;
- (void)_layoutAdditionalContent;
- (void)_layoutContent;
- (void)_layoutGrabber;
- (void)_updateContentVisibilityWithPercent:(double)arg1;
- (void)_updateSizeWithPercent:(double)arg1;
- (id)additionalContentAccessoryView;
- (double)additionalContentHeight;
- (double)additionalContentHeightDelta;
- (double)additionalContentPercentRevealed;
- (id)expandedSecondaryLabel;
- (id)grabber;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAdditionalContentRevealed;
- (void)layoutSubviews;
- (void)setAdditionalContentAccessoryView:(id)arg1;
- (void)setAdditionalContentHeight:(double)arg1;
- (void)setAdditionalContentPercentRevealed:(double)arg1;
- (void)setExpandedSecondaryLabel:(id)arg1;
- (void)setGrabber:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsContentWithSize:(struct CGSize { double x1; double x2; })arg1;
- (double)textHeightDelta;

@end