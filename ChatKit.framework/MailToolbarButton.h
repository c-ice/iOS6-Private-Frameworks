/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIButton.h"

@class UIImageView, UILabel;

@interface MailToolbarButton : UIButton
{
    UILabel *_titleLabel;
    UIImageView *_iconView;
    BOOL _isRed;
    BOOL _isMinibar;
    BOOL _usesAlternateButtonWidth;
}

@property(nonatomic) BOOL usesAlternateButtonWidth; // @synthesize usesAlternateButtonWidth=_usesAlternateButtonWidth;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)setTitle:(id)arg1;
- (void)updateForMiniBarState:(BOOL)arg1;
- (struct CGPoint)_offsetForMiniBarState:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)dealloc;
- (id)initAsRed:(BOOL)arg1;

@end

