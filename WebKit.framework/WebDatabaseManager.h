/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@interface WebDatabaseManager : NSObject  {
}

+ (void)willBeginFirstTransaction;
+ (void)didFinishLastTransaction;
+ (id)sharedWebDatabaseManager;
+ (void)scheduleEmptyDatabaseRemoval;
+ (void)removeEmptyDatabaseFiles;
+ (void)startBackgroundTask;
+ (void)endBackgroundTask;

- (id)origins;
- (id)databasesWithOrigin:(id)arg1;
- (id)detailsForDatabase:(id)arg1 withOrigin:(id)arg2;
- (void)deleteAllDatabases;
- (BOOL)deleteOrigin:(id)arg1;
- (BOOL)deleteDatabase:(id)arg1 withOrigin:(id)arg2;
- (id)init;

@end
