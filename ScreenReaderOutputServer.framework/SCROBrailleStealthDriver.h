/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class NSString;

@interface SCROBrailleStealthDriver : NSObject <SCROBrailleDriverProtocol> {
    BOOL _isDriverLoaded;
    NSString *_modelIdentifier;
    int _mainSize;
    int _statusSize;
}


- (id)init;
- (void)dealloc;
- (BOOL)unloadDriver;
- (BOOL)isInputEnabled;
- (int)mainSize;
- (id)getInputEvents;
- (BOOL)setStatusCells:(const char *)arg1 length:(int)arg2;
- (int)statusSize;
- (unsigned int)interfaceVersion;
- (int)loadDriverWithIOElement:(id)arg1;
- (BOOL)isDriverLoaded;
- (BOOL)isSleeping;
- (id)modelIdentifier;
- (BOOL)supportsBlinkingCursor;
- (BOOL)postsKeyboardEvents;
- (BOOL)setMainCells:(const char *)arg1 length:(int)arg2;

@end
