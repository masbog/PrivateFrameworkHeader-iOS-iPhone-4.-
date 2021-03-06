/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUKeyboardBackstopViewController, SUScriptTextFieldDelegate, UISearchField, <SUSearchFieldControllerDelegate>, UIPopoverController, SUCompletionTableViewController, SUSearchFieldConfiguration;

@interface SUSearchFieldController : NSObject <SUCompletionTableDelegate, SUKeyboardBackstopDelegate, UIPopoverControllerDelegate, UITextFieldDelegate> {
    SUCompletionTableViewController *_completionsViewController;
    SUSearchFieldConfiguration *_configuration;
    <SUSearchFieldControllerDelegate> *_delegate;
    SUKeyboardBackstopViewController *_keyboardBackstopController;
    UIPopoverController *_popoverController;
    BOOL _redisplayPopover;
    UISearchField *_searchField;
    SUScriptTextFieldDelegate *_textFieldDelegate;
}

@property(readonly) UISearchField * searchField;
@property(copy) SUSearchFieldConfiguration * searchFieldConfiguration;
@property <SUSearchFieldControllerDelegate> * delegate;


- (id)searchField;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)completionTableControllerCompletionsDidChange:(id)arg1;
- (void)keyboardBackstopDidDismiss:(id)arg1;
- (void)keyboardBackstopRequestsDismiss:(id)arg1;
- (void)_searchFieldDidChange:(id)arg1;
- (void)_searchFieldDidEnd:(id)arg1;
- (void)_searchFieldDidEndOnExit:(id)arg1;
- (void)_savedSearchTermChangedNotification:(id)arg1;
- (id)_cancelButtonView;
- (id)_defaultSearchTerm;
- (void)_fetchResultsForTerm:(id)arg1;
- (void)_fetchResultsForURL:(id)arg1;
- (void)_fetchResultsForURLRequestProperties:(id)arg1;
- (BOOL)_focusTransientViewController;
- (void)_hideCompletionsViewController;
- (id)_newBlankStorePageViewController;
- (id)_newSearchField;
- (id)_newTransientViewController;
- (void)_noEventSetSearchFieldText:(id)arg1;
- (void)_reloadCompletionsViewController;
- (void)_reloadSearchField;
- (void)_saveSearchTermToDefaults:(id)arg1;
- (void)_showCompletionsPopover;
- (void)_showCompletionsViewController;
- (void)_showKeyboardBackstopView;
- (id)_targetViewController;
- (void)_tearDownKeyboardBackstop;
- (id)_completionsViewController;
- (void)scriptDidChangeTextForTextField:(id)arg1;
- (void)completionTableController:(id)arg1 pickedCompletionItem:(id)arg2;
- (void)handleSearchURL:(id)arg1;
- (void)setSearchFieldConfiguration:(id)arg1;
- (id)searchFieldConfiguration;

@end
