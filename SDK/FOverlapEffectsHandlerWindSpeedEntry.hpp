#pragma once
#include <cstdint>
#include "EWindSpeedOverlapEffectsMode.hpp"
#include "FVector2D.hpp"
class UOverlapEffectsHandlerEffect;
#pragma pack(push, 1)
struct FOverlapEffectsHandlerWindSpeedEntry {
    int32_t ClothingTypes; // 0x0
    FVector2D StartEndSpeed; // 0x4
    EWindSpeedOverlapEffectsMode Mode; // 0xc
    char pad_d[0x3];
    TArray<UOverlapEffectsHandlerEffect*> StartEffects; // 0x10
    TArray<UOverlapEffectsHandlerEffect*> EndEffects; // 0x20
    bool bStopProcessingWithClothingMatch; // 0x30
    bool bUseStartEndSpeedMS; // 0x31
    bool bUseMode; // 0x32
    bool bHasStartedEffects; // 0x33
    char pad_34[0x4];
}; // Size: 0x38
#pragma pack(pop)
