/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUDisplayLinkApplier : HUApplier {
    bool  _applyOnlyOnProgressChanges;
    CADisplayLink * _displayLink;
    id /* block */  _progressInputBlock;
}

@property (nonatomic) bool applyOnlyOnProgressChanges;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic, copy) id /* block */ progressInputBlock;

- (void).cxx_destruct;
- (void)_displayLinkTick;
- (void)_invalidateDisplayLinkIfNecessary;
- (bool)applyOnlyOnProgressChanges;
- (bool)complete:(bool)arg1;
- (id)displayLink;
- (id)init;
- (id)initWithProgressInputBlock:(id /* block */)arg1;
- (id /* block */)progressInputBlock;
- (void)setApplyOnlyOnProgressChanges:(bool)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setProgressInputBlock:(id /* block */)arg1;
- (bool)start;

@end
