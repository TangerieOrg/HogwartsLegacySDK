#pragma once
#include <cstdint>
#include "FVector.hpp"
class UMultiFX2_Base;
class UClass;
#pragma pack(push, 1)
struct FFrozenData {
    TArray<UMultiFX2_Base*> FX2; // 0x0
    FVector ImpactLocation; // 0x10
    FVector ImpactNormal; // 0x1c
    UClass* TalentAOEMunition; // 0x28
    char pad_30[0x8];
}; // Size: 0x38
#pragma pack(pop)
