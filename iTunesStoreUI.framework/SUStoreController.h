/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUPurchaseManager, SUTabBarController, SUClient, SUSectionsResponse, UINavigationController, MFMailComposeViewController, NSDictionary, ISOperation, SULocationObserver, NSArray, NSString, NSURL;

@interface SUStoreController : NSObject <SUClientDelegate, SUPurchaseManagerDelegate, SUTabBarControllerDelegate, UIApplicationDelegate, MFMailComposeViewControllerDelegate> {
    SUClient *_client;
    SUSectionsResponse *_lastBackgroundSectionsResponse;
    SUSectionsResponse *_lastSectionsResponse;
    NSURL *_launchURL;
    ISOperation *_loadSectionsOperation;
    NSString *_localStoreFrontAtLastSuspend;
    SULocationObserver *_locationObserver;
    NSArray *_overlayConfigurations;
    SUPurchaseManager *_purchaseManager;
    BOOL _reloadForStorefrontChangeAfterAccountSetup;
    BOOL _reloadSectionsOnNextLaunch;
    NSString *_synchedStoreFrontAtLastSuspend;
    SUTabBarController *_tabBarController;
    MFMailComposeViewController *_mailComposeViewController;
    NSDictionary *_storeFrontLanguages;
}

@property(readonly) NSString * defaultPNGNameForSuspend;
@property(readonly) int statusBarStyleForSuspend;
@property(getter=isTabBarControllerLoaded,readonly) BOOL tabBarControllerLoaded;
@property(readonly) UINavigationController * topNavigationController;
@property(getter=isStoreEnabled,readonly) BOOL storeEnabled;
@property(readonly) SUTabBarController * tabBarController;
@property(retain) NSURL * launchURL;

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;

- (void)connect;
- (void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(BOOL)arg3;
- (id)tabBarController;
- (id)init;
- (void)dealloc;
- (BOOL)application:(id)arg1 handleOpenURL:(id)arg2;
- (double)defaultImageSnapshotExpiration;
- (void)tearDownUI;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)exitStoreAfterDialogsDismiss;
- (id)topNavigationController;
- (void)_cancelLoadSectionsOperation;
- (void)_handleFinishedBackgroundLoadSectionsOperation:(id)arg1;
- (BOOL)_loadSectionsAllowingCache:(BOOL)arg1 withCompletionBlock:(id)arg2;
- (void)_cancelSuspendAfterDialogsDismissed;
- (id)storeContentLanguage;
- (BOOL)libraryContainsItemIdentifier:(unsigned long long)arg1;
- (id)newScriptInterface;
- (BOOL)reportAProblemForItemIdentifier:(unsigned long long)arg1;
- (void)composeEmailByRestoringAutosavedMessage;
- (void)purchaseManager:(id)arg1 didAddPurchases:(id)arg2;
- (void)purchaseManagerDidEndUpdates:(id)arg1;
- (id)launchURL;
- (void)beginPurchaseBatch;
- (void)endPurchaseBatch;
- (void)exitStoreWithReason:(int)arg1;
- (id)overlayConfigurationForStorePage:(id)arg1;
- (void)prepareForSuspend;
- (void)presentExternalURLViewController:(id)arg1;
- (BOOL)reloadSectionWithIdentifier:(id)arg1 url:(id)arg2;
- (BOOL)showDialogForCapabilities:(id)arg1 mismatches:(id)arg2;
- (id)defaultPNGNameForSuspend;
- (int)statusBarStyleForSuspend;
- (void)_accountControllerDisappearedNotification:(id)arg1;
- (void)_dialogDidFinishNotification:(id)arg1;
- (void)_reloadForNetworkTypeChange:(id)arg1;
- (void)_selectFooterSectionNotification:(id)arg1;
- (void)_mainThreadStoreFrontChangedNotification:(id)arg1;
- (void)_storeFrontChangedNotification:(id)arg1;
- (id)preOrderQueueForClient:(id)arg1 downloadKinds:(id)arg2;
- (id)topViewControllerForClient:(id)arg1;
- (void)purchaseManagerWillBeginUpdates:(id)arg1;
- (void)setupUI;
- (void)_handleFinishedLoadSectionsOperation:(id)arg1;
- (void)_handleSectionsLoadFailedWithError:(id)arg1;
- (void)_presentSectionFetchUI;
- (BOOL)_reloadForStorefrontChange;
- (void)_retrySectionsAfterNetworkTransition;
- (void)_defaultHandleApplicationURLRequestProperties:(id)arg1;
- (void)_handleAccountURL:(id)arg1;
- (void)_handleSearchURL:(id)arg1;
- (BOOL)_isAccountViewControllerVisible;
- (BOOL)_isEnabledForNetworkConstraints:(id)arg1;
- (void)_reloadOverlayConfigurations;
- (void)_reloadWithSectionsResponse:(id)arg1;
- (id)_resumableViewController;
- (void)_saveArchivedNavigationPath;
- (BOOL)_showWildcatAccountViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)isComposingEmail;
- (void)setLaunchURL:(id)arg1;
- (void)_restrictionsChangedNotification:(id)arg1;
- (id)downloadQueueForClient:(id)arg1 downloadKinds:(id)arg2;
- (BOOL)client:(id)arg1 presentModalViewController:(id)arg2 animated:(BOOL)arg3;
- (BOOL)client:(id)arg1 presentAccountViewController:(id)arg2 animated:(BOOL)arg3;
- (BOOL)client:(id)arg1 openInternalURL:(id)arg2;
- (void)_bagDidLoadNotification:(id)arg1;
- (void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 failedToAddPurchases:(id)arg2;
- (BOOL)gotoStorePage:(id)arg1 animated:(BOOL)arg2;
- (BOOL)matchesClientApplication:(id)arg1;
- (BOOL)isTabBarControllerLoaded;
- (void)handleApplicationURL:(id)arg1;
- (BOOL)selectSectionWithIdentifier:(id)arg1;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (id)copySuspendSettings;
- (void)cancelAllOperations;
- (BOOL)isStoreEnabled;

@end
