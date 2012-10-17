/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class IUUserMessageDataSource, MPButton, NSTimer, UIImageView, UILabel, UIProgressView;

@interface IUUserMessageView : UIView
{
    UIImageView *_cloudImageView;
    NSTimer *_cloudProgressTimer;
    UIProgressView *_cloudProgressView;
    IUUserMessageDataSource *_dataSource;
    MPButton *_findContentButton;
    UIImageView *_imageView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) IUUserMessageDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)_sizeLabelToFit:(id)arg1;
- (void)_reloadFindContentButton;
- (void)_reloadView;
- (id)_newFindContentButton;
- (id)_newTitleLabel;
- (id)_newSubtitleLabel;
- (id)_newLabel;
- (void)_storeRestrictionsChangedNotification:(id)arg1;
- (void)_findContentButton:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

