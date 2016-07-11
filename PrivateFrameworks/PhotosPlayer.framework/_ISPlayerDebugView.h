/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface _ISPlayerDebugView : _ISTargetView {
    UIColor * _crosshairColor;
    UIView * _crosshairHorizontalLineView;
    double  _crosshairRelativePosition;
    UIView * _crosshairVerticalLineView;
    UILabel * _label;
    NSString * _text;
}

@property (nonatomic, retain) UIColor *crosshairColor;
@property (nonatomic) double crosshairRelativePosition;
@property (nonatomic, retain) NSString *text;

- (void).cxx_destruct;
- (id)crosshairColor;
- (double)crosshairRelativePosition;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setCrosshairColor:(id)arg1;
- (void)setCrosshairRelativePosition:(double)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end