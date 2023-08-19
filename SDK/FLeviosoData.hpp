#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
class UMultiFX2_Base;
class UInteractionArchitectAsset;
class UCurveFloat;
class UCurveVector;
#pragma pack(push, 1)
struct FLeviosoData {
    TArray<UMultiFX2_Base*> FX2; // 0x0
    char pad_10[0x40];
    UCurveFloat* HoverTargetOffset; // 0x50
    UCurveVector* HoverTargetRotation; // 0x58
    TArray<UInteractionArchitectAsset*> DataAssetArray; // 0x60
    FGameplayTagContainer MunitionTagContainer; // 0x70
}; // Size: 0x90
#pragma pack(pop)
