#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
class UInteractionArchitectAsset;
class UMultiFX2_Base;
#pragma pack(push, 1)
struct FDOTData {
    char pad_0[0x10];
    FName Type; // 0x10
    FGameplayTagContainer MunitionTagContainer; // 0x18
    TArray<UInteractionArchitectAsset*> MunitionDataAssetArray; // 0x38
    TArray<UMultiFX2_Base*> FX2; // 0x48
    char pad_58[0x8];
}; // Size: 0x60
#pragma pack(pop)
