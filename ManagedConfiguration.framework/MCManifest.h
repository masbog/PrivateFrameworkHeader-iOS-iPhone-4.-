/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, NSMutableDictionary;

@interface MCManifest : NSObject  {
    NSString *_path;
    NSMutableDictionary *_manifest;
    struct dispatch_queue_s { } *_syncQueue;
}

+ (void)_setManifestPath:(id)arg1;
+ (id)sharedManifest;

- (id)init;
- (void)dealloc;
- (void)invalidateCache;
- (id)manifest;
- (void)_setManifest:(id)arg1;
- (id)identifiersOfProfilesWithFilterFlags:(int)arg1;
- (id)allInstalledProfileIdentifiers;
- (void)addIdentifierToManifest:(id)arg1 flag:(int)arg2;
- (void)removeIdentifierFromManifest:(id)arg1;
- (id)_manifest;

@end
