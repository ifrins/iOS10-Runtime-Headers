/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAlternateTextTrack : MPAlternateTrack {
    NSLocale * _locale;
    NSString * _name;
    long long  _tag;
    long long  _type;
}

@property (nonatomic, readonly) bool isInBand;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic) long long tag;
@property (nonatomic, readonly) long long type;

+ (id)autoTrack;
+ (id)offTrack;

- (void).cxx_destruct;
- (id)_displayNameForName:(id)arg1;
- (long long)compare:(id)arg1;
- (id)displayName;
- (id)initWithType:(long long)arg1 name:(id)arg2 locale:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isInBand;
- (id)locale;
- (void)setTag:(long long)arg1;
- (long long)tag;
- (long long)type;

@end