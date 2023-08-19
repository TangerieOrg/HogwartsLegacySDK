#pragma once
#include <cstdint>
#include "FPhysicalAnimationProfile.hpp"
#include "UBodySetup.hpp"
#pragma pack(push, 1)
class USkeletalBodySetup : public UBodySetup {
public:
    bool bSkipScaleFromAnimation; // 0x2a0
    char pad_2a1[0x7];
    TArray<FPhysicalAnimationProfile> PhysicalAnimationData; // 0x2a8
    static USkeletalBodySetup* StaticClass();
}; // Size: 0x2b8
#pragma pack(pop)
