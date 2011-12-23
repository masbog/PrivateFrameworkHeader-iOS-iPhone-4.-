/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableDictionary, NSMutableSet, NSString, NSDictionary, NSBundle;

@interface WebBasePluginPackage : NSObject <WebCorePluginInfo> {
    NSMutableSet *pluginDatabases;
    NSString *name;
    NSString *path;
    NSString *pluginDescription;
    NSBundle *bundle;
    struct __CFBundle { } *cfBundle;
    NSDictionary *MIMEToDescription;
    NSDictionary *MIMEToExtensions;
    NSMutableDictionary *extensionToMIME;
    int (*BP_CreatePluginMIMETypesPreferences)();
}

+ (id)pluginWithPath:(id)arg1;
+ (id)preferredLocalizationName;
+ (void)initialize;

- (BOOL)getPluginInfoFromPLists;
- (id)extensionEnumerator;
- (BOOL)isJavaPlugIn;
- (BOOL)isNativeLibraryData:(id)arg1;
- (void)wasAddedToPluginDatabase:(id)arg1;
- (void)wasRemovedFromPluginDatabase:(id)arg1;
- (id)pathByResolvingSymlinksAndAliasesInPath:(id)arg1;
- (void)setMIMEToExtensionsDictionary:(id)arg1;
- (void)setMIMEToDescriptionDictionary:(id)arg1;
- (void)setPluginDescription:(id)arg1;
- (void)createPropertyListFile;
- (id)pListForPath:(id)arg1 createFile:(BOOL)arg2;
- (BOOL)getPluginInfoFromBundleAndMIMEDictionary:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)path;
- (id)bundle;
- (void)finalize;
- (BOOL)isQuickTimePlugIn;
- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)description;
- (BOOL)load;
- (void)setPath:(id)arg1;
- (id)extensionsForMIMEType:(id)arg1;
- (id)MIMETypeForExtension:(id)arg1;
- (void)unload;
- (unsigned long)versionNumber;
- (id)filename;
- (id)pluginDescription;
- (id)MIMETypeEnumerator;
- (id)descriptionForMIMEType:(id)arg1;
- (oneway void)_webcore_releaseOnWebThread;
- (oneway void)release;

@end