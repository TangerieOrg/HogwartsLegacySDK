#pragma once
#include <cstdint>
#include "EImpactTypes.hpp"
class UMultiFX2_Base;
#pragma pack(push, 1)
struct FImpactEffectData {
    TArray<UMultiFX2_Base*> FX2; // 0x0
    EImpactTypes ChainedType; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
