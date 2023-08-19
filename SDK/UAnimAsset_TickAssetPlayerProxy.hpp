#pragma once
#include <cstdint>
#include "FTickAssetPlayerProxy_WeightedNotify.hpp"
#include "FTransform.hpp"
#include "UAnimationAsset.hpp"
#pragma pack(push, 1)
class UAnimAsset_TickAssetPlayerProxy : public UAnimationAsset {
public:
    TArray<FTickAssetPlayerProxy_WeightedNotify> WeightedNotifies; // 0x80
    FTransform ActorMoveDelta; // 0x90
    float ActorMoveDeltaWeight; // 0xc0
    char pad_c4[0xc];
    static UAnimAsset_TickAssetPlayerProxy* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
