//  RXTrait.h
//  Created by Rob Rix on 12-07-01.
//  Copyright (c) 2012 Monochrome Industries. All rights reserved.

#import <Foundation/Foundation.h>

@protocol RXTrait <NSObject>

+(Protocol *)traitProtocol;

@end

extern id RXTraitApply(Class<RXTrait> trait, id target);
