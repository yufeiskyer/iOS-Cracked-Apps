//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_GMPCGeometryStats, GMSx_PBMutableArray;

@interface GMSx_GMPCLabelRenderOpGroup : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GMPCGeometryStats *geometryStats; // @dynamic geometryStats;
@property(nonatomic) _Bool hasGeometryStats; // @dynamic hasGeometryStats;
@property(nonatomic) _Bool hasLabelOpArray; // @dynamic hasLabelOpArray;
@property(retain, nonatomic) GMSx_PBMutableArray *labelOpArray; // @dynamic labelOpArray;

@end
