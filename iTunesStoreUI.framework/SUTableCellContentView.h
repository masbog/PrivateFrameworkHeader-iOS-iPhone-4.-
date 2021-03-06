/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUCellConfiguration, UIView, UIBezierPath, NSMutableArray;

@interface SUTableCellContentView : UIView <SUCellConfigurationView> {
    int _clipCorners;
    UIBezierPath *_clipPath;
    SUCellConfiguration *_configuration;
    unsigned int _drawAsDisabled : 1;
    unsigned int _highlighted : 1;
    unsigned int _highlightsOnlyContentView : 1;
    UIView *_overlayView;
    NSMutableArray *_subviews;
    unsigned int _useSubviewLayout : 1;
}

@property BOOL usesSubviews;
@property(getter=isDeleteConfirmationVisible) BOOL deleteConfirmationVisisble;
@property BOOL drawAsDisabled;
@property BOOL highlightsOnlyContentView;
@property(getter=isHighlighted) BOOL highlighted;
@property(retain) SUCellConfiguration * configuration;
@property int clipCorners;

+ (void)_initializeSafeCategory;

- (void)setHighlighted:(BOOL)arg1;
- (id)_scriptingInfo;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setConfiguration:(id)arg1;
- (id)configuration;
- (void)reloadView;
- (BOOL)isDeleteConfirmationVisible;
- (BOOL)drawAsDisabled;
- (BOOL)highlightsOnlyContentView;
- (void)setDeleteConfirmationVisisble:(BOOL)arg1;
- (void)setDrawAsDisabled:(BOOL)arg1;
- (void)setHighlightsOnlyContentView:(BOOL)arg1;
- (void)setUsesSubviews:(BOOL)arg1;
- (void)setUsesSubviews:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)usesSubviews;
- (id)_clippedImageForImage:(id)arg1;
- (void)_reloadSubviewAlphasAnimated:(BOOL)arg1;
- (void)_reloadSubviewsForConfiguration;
- (void)_removeSubviewsForConfiguration;
- (void)_startUsingSubviewLayout;
- (void)_stopUsingSubviewLayout;
- (void)_updateDisabledStyleForSubviews;
- (int)clipCorners;
- (id)_clipPath;
- (void)setClipCorners:(int)arg1;
- (id)description;
- (id)accessibilityLabel;
- (id)accessibilityLanguage;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;

@end
