/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRNLRConfigRequest : TRNearbyServicesCommunicationAbstractMessage {
    NSString * _languageCode;
    NSString * _networkPassword;
    NSString * _networkSSID;
    NSString * _regionCode;
}

@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSString *networkPassword;
@property (nonatomic, copy) NSString *networkSSID;
@property (nonatomic, copy) NSString *regionCode;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)languageCode;
- (id)networkPassword;
- (id)networkSSID;
- (id)regionCode;
- (void)setLanguageCode:(id)arg1;
- (void)setNetworkPassword:(id)arg1;
- (void)setNetworkSSID:(id)arg1;
- (void)setRegionCode:(id)arg1;

@end
