/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStorePageItemPinningConfiguration : NSObject {
    bool  _hasValidPinningContentInset;
    bool  _hasValidPinningStyle;
    bool  _hasValidPinningTransitionStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _pinningContentInset;
    long long  _pinningStyle;
    long long  _pinningTransitionStyle;
}

@property (nonatomic, readonly) bool hasValidPinningContentInset;
@property (nonatomic, readonly) bool hasValidPinningStyle;
@property (nonatomic, readonly) bool hasValidPinningTransitionStyle;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } pinningContentInset;
@property (nonatomic) long long pinningStyle;
@property (nonatomic) long long pinningTransitionStyle;

- (bool)hasValidPinningContentInset;
- (bool)hasValidPinningStyle;
- (bool)hasValidPinningTransitionStyle;
- (void)invalidatePinningContentInset;
- (void)invalidatePinningStyle;
- (void)invalidatePinningTransitionStyle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })pinningContentInset;
- (long long)pinningStyle;
- (long long)pinningTransitionStyle;
- (void)setPinningContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPinningStyle:(long long)arg1;
- (void)setPinningTransitionStyle:(long long)arg1;

@end