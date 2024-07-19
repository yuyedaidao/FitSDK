/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2024 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.141.0Release
// Tag = production/release/21.141.0-0-g2aa27e1
/////////////////////////////////////////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>

#import "FITDate.h"
#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITMonitoringInfoMesg : FITMessage
- (id)init;
// Timestamp 
- (BOOL)isTimestampValid;
- (FITDate *)getTimestamp;
- (void)setTimestamp:(FITDate *)timestamp;
// LocalTimestamp 
- (BOOL)isLocalTimestampValid;
- (FITLocalDateTime)getLocalTimestamp;
- (void)setLocalTimestamp:(FITLocalDateTime)localTimestamp;
// ActivityType 
@property(readonly,nonatomic) uint8_t numActivityTypeValues;
- (BOOL)isActivityTypeValidforIndex : (uint8_t)index;
- (FITActivityType)getActivityTypeforIndex : (uint8_t)index;
- (void)setActivityType:(FITActivityType)activityType forIndex:(uint8_t)index;
// CyclesToDistance 
@property(readonly,nonatomic) uint8_t numCyclesToDistanceValues;
- (BOOL)isCyclesToDistanceValidforIndex : (uint8_t)index;
- (FITFloat32)getCyclesToDistanceforIndex : (uint8_t)index;
- (void)setCyclesToDistance:(FITFloat32)cyclesToDistance forIndex:(uint8_t)index;
// CyclesToCalories 
@property(readonly,nonatomic) uint8_t numCyclesToCaloriesValues;
- (BOOL)isCyclesToCaloriesValidforIndex : (uint8_t)index;
- (FITFloat32)getCyclesToCaloriesforIndex : (uint8_t)index;
- (void)setCyclesToCalories:(FITFloat32)cyclesToCalories forIndex:(uint8_t)index;
// RestingMetabolicRate 
- (BOOL)isRestingMetabolicRateValid;
- (FITUInt16)getRestingMetabolicRate;
- (void)setRestingMetabolicRate:(FITUInt16)restingMetabolicRate;

@end

NS_ASSUME_NONNULL_END