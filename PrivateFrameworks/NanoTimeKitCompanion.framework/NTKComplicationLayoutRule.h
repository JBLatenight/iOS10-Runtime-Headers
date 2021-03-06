/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKComplicationLayoutRule : NTKLayoutRule {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _keylinePadding;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } keylinePadding;

+ (id)layoutRuleWithReferenceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 horizontalLayout:(long long)arg2 verticalLayout:(long long)arg3 keylinePadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4;
+ (id)layoutRuleWithReferenceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 horizontalLayout:(long long)arg2 verticalLayout:(long long)arg3 keylinePadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4 clip:(bool)arg5;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })keylinePadding;

@end
