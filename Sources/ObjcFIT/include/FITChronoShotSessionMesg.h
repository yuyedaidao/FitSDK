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

@interface FITChronoShotSessionMesg : FITMessage
- (id)init;
// Timestamp 
- (BOOL)isTimestampValid;
- (FITDate *)getTimestamp;
- (void)setTimestamp:(FITDate *)timestamp;
// MinSpeed 
- (BOOL)isMinSpeedValid;
- (FITFloat32)getMinSpeed;
- (void)setMinSpeed:(FITFloat32)minSpeed;
// MaxSpeed 
- (BOOL)isMaxSpeedValid;
- (FITFloat32)getMaxSpeed;
- (void)setMaxSpeed:(FITFloat32)maxSpeed;
// AvgSpeed 
- (BOOL)isAvgSpeedValid;
- (FITFloat32)getAvgSpeed;
- (void)setAvgSpeed:(FITFloat32)avgSpeed;
// ShotCount 
- (BOOL)isShotCountValid;
- (FITUInt16)getShotCount;
- (void)setShotCount:(FITUInt16)shotCount;
// ProjectileType 
- (BOOL)isProjectileTypeValid;
- (FITProjectileType)getProjectileType;
- (void)setProjectileType:(FITProjectileType)projectileType;
// GrainWeight 
- (BOOL)isGrainWeightValid;
- (FITFloat32)getGrainWeight;
- (void)setGrainWeight:(FITFloat32)grainWeight;

@end

NS_ASSUME_NONNULL_END