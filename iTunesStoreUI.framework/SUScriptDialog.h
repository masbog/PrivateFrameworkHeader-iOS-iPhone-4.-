/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumber, NSString;

@interface SUScriptDialog : SUScriptObject  {
    NSString *_body;
    id _buttons;
    NSNumber *_cancelButtonIndex;
    id _textFields;
    NSString *_title;
}

@property(getter=_body,setter=set_body:,retain) NSString * body;
@property(getter=_buttons,setter=set_buttons:,retain) id buttons;
@property(getter=_cancelButtonIndex,setter=set_cancelButtonIndex:,retain) NSNumber * cancelButtonIndex;
@property(getter=_textFields,setter=set_textFields:,retain) id textFields;
@property(getter=_title,setter=set_title:,retain) NSString * title;

+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void)dismiss;
- (void)dealloc;
- (void)show;
- (void)set_title:(id)arg1;
- (void)showFromDOMElement:(id)arg1;
- (void)showSheet;
- (id)_cancelButtonIndex;
- (id)_buttons;
- (void)set_body:(id)arg1;
- (void)set_buttons:(id)arg1;
- (void)set_cancelButtonIndex:(id)arg1;
- (void)set_textFields:(id)arg1;
- (void)_dismiss;
- (void)_show;
- (void)_logSheetWarnings;
- (id)_nativeDialog;
- (id)_textFields;
- (id)_body;
- (void)_showFromDOMElement:(id)arg1;
- (id)_title;
- (id)_className;

@end
