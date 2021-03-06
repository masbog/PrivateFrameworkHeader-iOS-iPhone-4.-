/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableArray, NSArray;

@interface IMPeopleCollection : IMPeople  {
    NSMutableArray *_collectedPeople;
}

@property(readonly) NSArray * collectedIMPeople;


- (id)init;
- (void)dealloc;
- (id)people;
- (BOOL)collectsIMPeople:(id)arg1;
- (void)addIMPeople:(id)arg1;
- (void)removeIMPeople:(id)arg1;
- (void)_collectionNotification:(id)arg1;
- (BOOL)containsPerson:(id)arg1;
- (id)collectedIMPeople;
- (id)groups;

@end
