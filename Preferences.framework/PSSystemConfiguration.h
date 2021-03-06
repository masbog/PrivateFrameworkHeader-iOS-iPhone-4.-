/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSystemConfiguration : NSObject  {
    struct __SCPreferences { } *_prefs;
}

+ (void)releaseSharedInstance;
+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (unsigned char)lockAndSynchronize;
- (struct __CFString { }*)dataServiceID;
- (struct __CFString { }*)voicemailServiceID;
- (struct __CFString { }*)getServiceIDForPDPContext:(unsigned int)arg1;
- (id)interfaceConfigurationValueForKey:(struct __CFString { }*)arg1 serviceID:(struct __CFString { }*)arg2;
- (void)setInterfaceConfigurationValue:(id)arg1 forKey:(struct __CFString { }*)arg2 serviceID:(struct __CFString { }*)arg3;
- (id)protocolConfiguration:(struct __CFString { }*)arg1 serviceID:(struct __CFString { }*)arg2;
- (void)setProtocolConfiguration:(id)arg1 protocolType:(struct __CFString { }*)arg2 serviceID:(struct __CFString { }*)arg3;
- (id)protocolConfigurationValueForKey:(struct __CFString { }*)arg1 protocolType:(struct __CFString { }*)arg2 serviceID:(struct __CFString { }*)arg3;
- (void)setProtocolConfigurationValue:(id)arg1 forKey:(struct __CFString { }*)arg2 protocolType:(struct __CFString { }*)arg3 serviceID:(struct __CFString { }*)arg4;

@end
