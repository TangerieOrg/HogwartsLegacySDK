#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UTickSequencerBucketSetup : public UDataAsset {
public:
    TArray<FName> PreActorTickBuckets; // 0x30
    TArray<FName> PrePhysicsBuckets; // 0x40
    TArray<FName> DuringPhysicsBuckets; // 0x50
    TArray<FName> PostPhysicsBuckets; // 0x60
    TArray<FName> PostUpdateWorkBuckets; // 0x70
    TArray<FName> PostActorTickBuckets; // 0x80
    TArray<FName> DynamicBuckets; // 0x90
    static UTickSequencerBucketSetup* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
