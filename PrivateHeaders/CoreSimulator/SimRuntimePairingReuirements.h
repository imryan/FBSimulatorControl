//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb 20 2016 22:04:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SimRuntimePairingReuirements : NSObject
{
    unsigned int _minOSVersion;
    NSArray *_supportedProductFamilies;
    unsigned long long _maxPairs;
}

@property (nonatomic, assign) unsigned long long maxPairs;
@property (copy, nonatomic) NSArray *supportedProductFamilies;
@property (nonatomic, assign) unsigned int minOSVersion;
- (void).cxx_destruct;

@end