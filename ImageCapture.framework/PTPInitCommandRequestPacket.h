/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSString;

@interface PTPInitCommandRequestPacket : NSObject  {
    unsigned char _initiatorGUID[16];
    NSString *_initiatorFriendlyName;
}


- (id)initWithInitiatorGUID:(char *)arg1 initiatorFriendlyName:(id)arg2;
- (const char *)initiatorGUID;
- (void)setInitiatorGUID:(char *)arg1;
- (id)initiatorFriendlyName;
- (void)setInitiatorFriendlyName:(id)arg1;
- (id)contentForTCP;
- (id)initWithTCPBuffer:(void*)arg1;
- (void)dealloc;
- (id)description;

@end
