/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUICellularDataSetting : CCUISettingModule

+ (id)displayName;
+ (id)identifier;
+ (bool)isInternalButton;
+ (bool)isSupported:(int)arg1;
+ (id)statusOffString;
+ (id)statusOnString;

- (bool)_isCellularDataRestricted;
- (bool)_toggleState;
- (void)_updateState;
- (void)activate;
- (id)aggdKey;
- (void)deactivate;
- (id)glyphImageForState:(int)arg1;
- (id)selectedStateColor;

@end
