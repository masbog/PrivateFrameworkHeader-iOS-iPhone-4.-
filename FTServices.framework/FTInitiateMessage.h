/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSArray, NSString, NSData, NSDictionary, NSNumber;

@interface FTInitiateMessage : FTMessage  {
    NSData *_selfBlob;
    NSData *_selfPushToken;
    NSNumber *_selfNATType;
    NSData *_selfNatIP;
    NSString *_aliasUserID;
    NSData *_aliasSignature;
    NSArray *_peers;
    NSArray *_canonicalizedPeers;
    NSDictionary *_regionInformation;
}

@property(copy) NSDictionary * regionInformation;
@property(copy) NSArray * canonicalizedPeers;
@property(copy) NSData * aliasSignature;
@property(copy) NSString * aliasUserID;
@property(copy) NSArray * peers;
@property(copy) NSData * selfNatIP;
@property(copy) NSNumber * selfNATType;
@property(copy) NSData * selfPushToken;
@property(copy) NSData * selfBlob;


- (id)selfBlob;
- (void)setSelfBlob:(id)arg1;
- (id)peers;
- (void)setPeers:(id)arg1;
- (id)bagKey;
- (void)dealloc;
- (void)handleResponseDictionary:(id)arg1;
- (id)additionalMessageHeaders;
- (void)setSelfPushToken:(id)arg1;
- (id)selfNATType;
- (void)setSelfNATType:(id)arg1;
- (id)selfPushToken;
- (id)selfNatIP;
- (id)canonicalizedPeers;
- (id)regionInformation;
- (void)setRegionInformation:(id)arg1;
- (void)setCanonicalizedPeers:(id)arg1;
- (id)aliasSignature;
- (void)setAliasSignature:(id)arg1;
- (id)aliasUserID;
- (void)setAliasUserID:(id)arg1;
- (void)setSelfNatIP:(id)arg1;
- (id)requiredKeys;
- (id)messageBody;

@end
