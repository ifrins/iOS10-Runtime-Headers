/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserViewController : UIViewController <CKBrowserViewControllerProtocol> {
    IMBalloonPlugin * _balloonPlugin;
    IMBalloonPluginDataSource * _balloonPluginDataSource;
    CKBrowserDragManager * _browserDragManager;
    NSString * _conversationID;
    long long  _currentBrowserConsumer;
    UIView * _dragTargetView;
    bool  _isiMessage;
    UIViewController * _presentationViewController;
    NSObject<CKBrowserViewControllerSendDelegate> * _sendDelegate;
}

@property (nonatomic, retain) NSNumber *adamID;
@property (nonatomic, readonly) unsigned long long badgeValue;
@property (nonatomic, readonly) IMBalloonPlugin *balloonPlugin;
@property (nonatomic, retain) IMBalloonPluginDataSource *balloonPluginDataSource;
@property (nonatomic, retain) CKBrowserDragManager *browserDragManager;
@property (nonatomic, readonly) long long browserPresentationStyle;
@property (nonatomic, readonly) bool canReplaceDataSource;
@property (nonatomic) NSString *conversationID;
@property (nonatomic) long long currentBrowserConsumer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIView *dragTargetView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool inExpandedPresentation;
@property (nonatomic) bool isiMessage;
@property (nonatomic, readonly) bool mayBeKeptInViewHierarchy;
@property (nonatomic, readonly) long long parentModalPresentationStyle;
@property (nonatomic, readonly) <UIViewControllerTransitioningDelegate> *parentTransitioningDelegate;
@property (nonatomic, retain) UIViewController *presentationViewController;
@property (nonatomic) NSObject<CKBrowserViewControllerSendDelegate> *sendDelegate;
@property (nonatomic, readonly) bool shouldShowChatChrome;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsQuickView;
@property (nonatomic, readonly) bool wantsDarkUI;
@property (nonatomic, readonly) bool wantsOpaqueUI;

+ (id)currentPPTTestName;
+ (bool)supportsMessagesAppExtendedLaunchTest;

- (void).cxx_destruct;
- (void)_updateContentOverlayInsetsForSelfAndChildren;
- (id)balloonPlugin;
- (id)balloonPluginDataSource;
- (id)browserDragManager;
- (long long)browserPresentationStyle;
- (id)conversationID;
- (long long)currentBrowserConsumer;
- (void)dismiss;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)dragTargetView;
- (void)finishedPPTTestNamed:(id)arg1;
- (void)finishedPPTTestNamed:(id)arg1 isCKLaunchTest:(bool)arg2;
- (bool)inExpandedPresentation;
- (id)initWithBalloonPlugin:(id)arg1;
- (id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2;
- (id)initWithBalloonPlugin:(id)arg1 pluginPayloads:(id)arg2;
- (bool)isLoaded;
- (bool)isiMessage;
- (void)loadView;
- (bool)mayBeKeptInViewHierarchy;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)presentationViewController;
- (id)sendDelegate;
- (void)setBalloonPluginDataSource:(id)arg1;
- (void)setBrowserDragManager:(id)arg1;
- (void)setConversationID:(id)arg1;
- (void)setCurrentBrowserConsumer:(long long)arg1;
- (void)setDragTargetView:(id)arg1;
- (void)setIsiMessage:(bool)arg1;
- (void)setPresentationViewController:(id)arg1;
- (void)setSendDelegate:(id)arg1;
- (bool)shouldShowChatChrome;
- (void)startPPTTestNamed:(id)arg1;
- (bool)supportsQuickView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidTransitionToCompactPresentation;
- (void)viewDidTransitionToExpandedPresentation;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToCompactPresentation;
- (void)viewWillTransitionToExpandedPresentation;
- (bool)wantsDarkUI;
- (bool)wantsOpaqueUI;

@end
