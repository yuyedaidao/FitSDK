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


#import "FITDeveloperFieldDefinition.h"

@interface FITDeveloperFieldDefinition ()

@property(nonatomic, assign) FITFieldDescriptionMesg* fieldDescription;
@property(nonatomic, assign) FITDeveloperDataIdMesg* developer;

@end

@implementation FITDeveloperFieldDefinition

- (id)initWithFieldDescriptionMesg: (FITFieldDescriptionMesg*) fieldDescription andDeveloperDataIdMesg: (FITDeveloperDataIdMesg*) developer {

    if (self = [super init]) {
        self.fieldDescription = fieldDescription;
        self.developer = developer;
    }
    return self;
}

-(BOOL) isDefined {
    return (_fieldDescription != nil && _developer != nil);
}

@end