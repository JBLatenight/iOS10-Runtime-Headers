/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLatLng : PBCodable  {
    double _lat;
    double _lng;
}

@property double lat;
@property double lng;


- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setLng:(double)arg1;
- (void)setLat:(double)arg1;
- (double)lng;
- (double)lat;
- (void)copyTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end