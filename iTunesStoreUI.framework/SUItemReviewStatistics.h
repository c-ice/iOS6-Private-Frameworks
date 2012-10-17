/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface SUItemReviewStatistics : NSObject <NSCopying>
{
    float _averageUserRating;
    int _numberOfUserRatings;
    NSString *_numberOfUserRatingsString;
    int _numberOfUserReviews;
    NSString *_numberOfUserReviewsString;
}

@property(copy, nonatomic) NSString *numberOfUserReviewsString; // @synthesize numberOfUserReviewsString=_numberOfUserReviewsString;
@property(nonatomic) int numberOfUserReviews; // @synthesize numberOfUserReviews=_numberOfUserReviews;
@property(copy, nonatomic) NSString *numberOfUserRatingsString; // @synthesize numberOfUserRatingsString=_numberOfUserRatingsString;
@property(nonatomic) int numberOfUserRatings; // @synthesize numberOfUserRatings=_numberOfUserRatings;
@property(nonatomic) float averageUserRating; // @synthesize averageUserRating=_averageUserRating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

