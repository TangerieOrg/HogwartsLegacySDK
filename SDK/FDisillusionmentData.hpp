#pragma once
#include <cstdint>
class UMaterialInterface;
class UMultiFX2_Base;
#pragma pack(push, 1)
struct FDisillusionmentData {
    UMaterialInterface* EffectMat; // 0x0
    TArray<UMultiFX2_Base*> DisillusionmentFX2; // 0x8
    char pad_18[0x10];
}; // Size: 0x28
#pragma pack(pop)
