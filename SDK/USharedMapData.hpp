#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class USharedMapData : public UDataAsset {
public:
    float PathDirectionShortDotsTimerMax; // 0x30
    int32_t PathDirectionMediumDotsThreshold; // 0x34
    float PathDirectionMediumDotsTimerMax; // 0x38
    int32_t PathDirectionLongDotsThreshold; // 0x3c
    float PathDirectionLongDotsTimerMax; // 0x40
    float PathDirectionTimerMax; // 0x44
    int32_t DirectionIndicatorLength; // 0x48
    float OverlandPathPointSpacingModifier; // 0x4c
    float HogwartsPathPointSpacingModifier; // 0x50
    float HogwartsZoomedPathPointSpacingModifier; // 0x54
    float HogsmeadePathPointSpacingModifier; // 0x58
    float IconScale; // 0x5c
    float MinimumTimeBeforeRestart; // 0x60
    FLinearColor DirectionColor; // 0x64
    FLinearColor TrackedColor; // 0x74
    char pad_84[0x4];
    static USharedMapData* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
