/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class WebIconFetcherPrivate;

@interface WebIconFetcher : NSObject  {
    WebIconFetcherPrivate *_private;
}

+ (id)_fetchApplicationIconForFrame:(id)arg1 target:(id)arg2 selector:(SEL)arg3;

- (id)_initWithIconFetcher:(struct PassRefPtr<WebCore::IconFetcher> { struct IconFetcher {} *x1; })arg1 client:(struct WebIconFetcherClient { int (**x1)(); struct RetainPtr<WebIconFetcher> { id x_2_1_1; } x2; id x3; SEL x4; }*)arg2;
- (void)finalize;
- (void)cancel;
- (id)init;
- (void)dealloc;

@end
