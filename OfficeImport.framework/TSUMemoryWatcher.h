/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TSUFlushingManager;

@interface TSUMemoryWatcher : NSObject  {
    TSUFlushingManager *_flushingManager;
    BOOL _going;
    BOOL _stop;
}


- (void)dealloc;
- (id)initWithFlushingManager:(id)arg1;
- (void)beginObserving;
- (void)stopObserving;

@end
