/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString;

@interface LBSGUserProfile : PBCodable  {
    NSString *_userName;
    NSString *_authToken;
}

@property(readonly) BOOL hasUserName;
@property(readonly) BOOL hasAuthToken;
@property(retain) NSString * authToken;
@property(retain) NSString * userName;


- (id)userName;
- (void)setAuthToken:(id)arg1;
- (id)authToken;
- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)hasUserName;
- (BOOL)hasAuthToken;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setUserName:(id)arg1;

@end
