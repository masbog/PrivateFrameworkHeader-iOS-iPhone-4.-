/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class NSString, NSMutableArray;

@interface SCRCArgumentSubcommand : NSObject  {
    NSString *_subcommandName;
    NSMutableArray *_optionArray;
}

+ (id)subcommandWithName:(id)arg1;

- (void)addOptions;
- (id)subcommandName;
- (id)optionArray;
- (id)formattedHelpHeader;
- (id)formattedHelpFooter;
- (void)addOption:(id)arg1 argument:(id)arg2 target:(id)arg3 action:(SEL)arg4 argumentDescription:(id)arg5 required:(BOOL)arg6;
- (void)showHelp;
- (int)compare:(id)arg1;
- (unsigned int)hash;
- (int)run;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1;
- (void)stop;

@end
