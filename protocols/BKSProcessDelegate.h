/* Generated by RuntimeBrowser.
 */

@protocol BKSProcessDelegate <NSObject>

@required

- (void)process:(BKSProcess *)arg1 isBeingDebugged:(bool)arg2;
- (void)process:(BKSProcess *)arg1 taskStateDidChange:(int)arg2;
- (void)processWillExpire:(BKSProcess *)arg1;

@end