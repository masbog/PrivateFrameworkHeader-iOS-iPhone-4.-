/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLOptionElement : DOMHTMLElement  {
}

@property(retain,readonly) DOMHTMLFormElement * form;
@property BOOL defaultSelected;
@property(copy,readonly) NSString * text;
@property(readonly) int index;
@property BOOL disabled;
@property(copy) NSString * label;
@property BOOL selected;
@property(copy) NSString * value;


- (void)setDisabled:(BOOL)arg1;
- (BOOL)selected;
- (id)form;
- (id)label;
- (void)setSelected:(BOOL)arg1;
- (id)value;
- (BOOL)disabled;
- (int)index;
- (void)setValue:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)text;
- (BOOL)defaultSelected;
- (void)setDefaultSelected:(BOOL)arg1;
- (id)createSelectedItem;
- (id)createPickerCell;
- (void)populateCell:(id)arg1;
- (id)itemTitle;

@end