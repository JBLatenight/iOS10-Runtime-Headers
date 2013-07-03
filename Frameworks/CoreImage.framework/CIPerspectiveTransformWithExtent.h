/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector;

@interface CIPerspectiveTransformWithExtent : CIFilter  {
    CIImage *inputImage;
    CIVector *inputExtent;
    CIVector *inputTopLeft;
    CIVector *inputTopRight;
    CIVector *inputBottomRight;
    CIVector *inputBottomLeft;
}

@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputExtent;
@property(retain) CIVector * inputTopLeft;
@property(retain) CIVector * inputTopRight;
@property(retain) CIVector * inputBottomRight;
@property(retain) CIVector * inputBottomLeft;

+ (id)customAttributes;

- (id)inputBottomLeft;
- (id)inputBottomRight;
- (id)inputTopRight;
- (id)inputTopLeft;
- (void)setInputTopLeft:(id)arg1;
- (void)setInputTopRight:(id)arg1;
- (void)setInputBottomRight:(id)arg1;
- (void)setInputBottomLeft:(id)arg1;
- (id)inputExtent;
- (void)setInputExtent:(id)arg1;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end