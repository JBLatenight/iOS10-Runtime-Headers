/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABEKParticipantMatchingSearchOperationDelegate : NSObject <ABPredicateDelegate> {
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id /* block */)completionHandler;
- (void)dealloc;
- (bool)predicateShouldContinue:(id)arg1;
- (bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
