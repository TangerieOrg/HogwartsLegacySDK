#pragma once
#include <cstdint>
#include "AVolume.hpp"
class AActor;
#pragma pack(push, 1)
class APrecomputedVisibilityOverrideVolume : public AVolume {
public:
    TArray<AActor*> OverrideVisibleActors; // 0x280
    TArray<AActor*> OverrideInvisibleActors; // 0x290
    TArray<FName> OverrideInvisibleLevels; // 0x2a0
    static APrecomputedVisibilityOverrideVolume* StaticClass();
}; // Size: 0x2b0
#pragma pack(pop)
