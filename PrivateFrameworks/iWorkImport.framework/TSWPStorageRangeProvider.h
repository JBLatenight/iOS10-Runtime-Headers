/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStorageRangeProvider : NSObject {
    NSString * _identifier;
    NSObject * _object;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSObject *object;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (void)dealloc;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)nextRange;
- (id)object;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (unsigned long long)rangeEnd;
- (unsigned long long)rangeLength;
- (unsigned long long)rangeStart;
- (void)setRangeStart:(unsigned long long)arg1;

@end
