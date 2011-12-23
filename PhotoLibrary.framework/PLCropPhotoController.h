/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLCropPhotoControllerDelegate>, UIToolbar, PLCropOverlayView2;

@interface PLCropPhotoController : UIViewController <UIActionSheetDelegate> {
    PLCropOverlayView2 *_overlayView;
    <PLCropPhotoControllerDelegate> *_delegate;
    UIToolbar *_toolbar;
    unsigned int _didInitializeNavigationItem : 1;
    unsigned int _toolbarWasHidden : 1;
}

@property UIToolbar * toolbar;
@property <PLCropPhotoControllerDelegate> * delegate;


- (void)loadView;
- (void)orderOut:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setToolbar:(id)arg1;
- (id)toolbar;
- (void)viewDidUnload;
- (id)navigationItem;
- (void)dealloc;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)didReceiveMemoryWarning;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)didStopAnimatingOrderOut:(id)arg1 finished:(id)arg2 content:(void*)arg3;
- (void)displayCropActions:(id)arg1;
- (void)rotateCropRect:(id)arg1;
- (void)cancel:(id)arg1;
- (void)displayOnController:(id)arg1;
- (void)cropPhoto:(id)arg1;

@end