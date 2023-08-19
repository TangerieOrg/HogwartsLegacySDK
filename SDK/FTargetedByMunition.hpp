#pragma once
#include <cstdint>
#include "FVector.hpp"
class AActor;
#pragma pack(push, 1)
struct FTargetedByMunition {
    AActor* InstigatorPtr; // 0x0
    float TimeToReachDest; // 0x8
    char pad_c[0x4];
    AActor* MunitionPtr; // 0x10
    bool Deflection; // 0x18
    bool bPerfect; // 0x19
    char pad_1a[0x2];
    FVector Velocity; // 0x1c
    char pad_28[0x8];
}; // Size: 0x30
#pragma pack(pop)
