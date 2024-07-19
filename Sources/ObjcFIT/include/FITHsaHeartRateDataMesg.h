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

@interface FITHsaHeartRateDataMesg : FITMessage
- (id)init;
// Timestamp 
- (BOOL)isTimestampValid;
- (FITDate *)getTimestamp;
- (void)setTimestamp:(FITDate *)timestamp;
// ProcessingInterval 
- (BOOL)isProcessingIntervalValid;
- (FITUInt16)getProcessingInterval;
- (void)setProcessingInterval:(FITUInt16)processingInterval;
// Status 
- (BOOL)isStatusValid;
- (FITUInt8)getStatus;
- (void)setStatus:(FITUInt8)status;
// HeartRate 
@property(readonly,nonatomic) uint8_t numHeartRateValues;
- (BOOL)isHeartRateValidforIndex : (uint8_t)index;
- (FITUInt8)getHeartRateforIndex : (uint8_t)index;
- (void)setHeartRate:(FITUInt8)heartRate forIndex:(uint8_t)index;

@end

NS_ASSUME_NONNULL_END