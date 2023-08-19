#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class USharedMinimapData : public UDataAsset {
public:
    float PathDirectionTimerMax; // 0x30
    int32_t DirectionIndicatorLength; // 0x34
    float PathPointSpacingModifier; // 0x38
    float PathPointSpacingModifierHogsmeade; // 0x3c
    float IconScale; // 0x40
    float AllowedOffMapDistanceModifier; // 0x44
    float MinimumTimeBeforeRestart; // 0x48
    float PathAlphaDecayFactor; // 0x4c
    float MinimumPathAlpha; // 0x50
    float MaxHeightDelta; // 0x54
    float MinimumPathPointScale; // 0x58
    float DefaultOverlapDistance; // 0x5c
    FLinearColor DirectionColor; // 0x60
    FLinearColor TrackedColor; // 0x70
    static USharedMinimapData* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
