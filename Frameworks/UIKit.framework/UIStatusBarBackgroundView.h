/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIStatusBarCorners, UIImageView, UIStatusBarStyleAttributes;

@interface UIStatusBarBackgroundView : UIView  {
    UIStatusBarStyleAttributes *_style;
    UIStatusBarCorners *_topCorners;
    UIImageView *_glowView;
    BOOL _glowEnabled;
    BOOL _suppressGlow;
}


- (id)style;
- (void)dealloc;
- (void)setSuppressesGlow:(BOOL)arg1;
- (void)setGlowAnimationEnabled:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(id)arg2 backgroundColor:(id)arg3;
- (id)_backgroundImageName;
- (id)_glowImage;
- (BOOL)_styleCanGlow;
- (void)_stopGlowAnimation;
- (void)_startGlowAnimationWaitForNextCycle:(BOOL)arg1;
- (void)_setGlowAnimationEnabled:(BOOL)arg1 waitForNextCycle:(BOOL)arg2;
- (BOOL)_topCornersAreRounded;
- (id)_baseImage;

@end