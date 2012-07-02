//  RXTrait.h
//  Created by Rob Rix on 12-07-01.
//  Copyright (c) 2012 Monochrome Industries. All rights reserved.

#import <Foundation/Foundation.h>

@protocol RXTrait <NSObject>

@property (nonatomic, readonly) Protocol *traitProtocol;

@end

extern id RXTraitApply(id<RXTrait> trait, id target);
