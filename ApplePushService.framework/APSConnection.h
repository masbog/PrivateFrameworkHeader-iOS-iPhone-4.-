/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@class <APSConnectionDelegate>, NSArray, NSString, NSLock, NSMutableDictionary;

@interface APSConnection : NSObject  {
    <APSConnectionDelegate> *_delegate;
    NSLock *_lock;
    NSString *_environmentName;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSString *_connectionPortName;
    unsigned int _connectionPort;
    int _serverPID;
    unsigned int _connectionServerPort;
    struct __CFMachPort { } *_connectionSeverCFMachPort;
    NSArray *_enabledTopics;
    NSArray *_ignoredTopics;
    NSMutableDictionary *_subtopics;
    BOOL _enableCriticalReliability;
}

@property(readonly) int serverPID;
@property <APSConnectionDelegate> * delegate;

+ (struct __SecIdentity { }*)copyIdentity;
+ (double)keepAliveIntervalForEnvironmentName:(id)arg1;
+ (id)connectionsDebuggingState;

- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)_connect;
- (int)serverPID;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2;
- (void)_connectionServerPortInvalidated;
- (id)_dataForPropertyList:(id)arg1;
- (void)_sendEnabledTopics;
- (void)_sendIgnoredTopics;
- (BOOL)hasIdentity;
- (void)_sendEnableCriticalReliability;
- (void)_deliverMessageForTopic:(id)arg1 userInfo:(id)arg2;
- (void)_deliverPublicToken:(id)arg1;
- (id)initWithEnvironmentName:(id)arg1;
- (void)setEnabledTopics:(id)arg1;
- (id)publicToken;
- (void)removeFromRunLoop;
- (void)setIgnoredTopics:(id)arg1;
- (void)setSubtopic:(id)arg1 forEnabledTopic:(id)arg2;
- (void)_disconnect;
- (void)scheduleInRunLoop:(id)arg1;
- (void)setEnableCriticalReliability:(BOOL)arg1;

@end
