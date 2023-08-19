#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FCompassIconStyle : public FTableRowBase {
    float IconBaseScale; // 0x8
    FVector2D IconElevationOffsetUp; // 0xc
    FVector2D IconElevationOffsetDown; // 0x14
    float IconElevationScale; // 0x1c
    FString MapIconName; // 0x20
    FString MinimapIconName; // 0x30
    bool HasAlternateTexture; // 0x40
    bool ShowOnMinimap; // 0x41
    bool ShowOnHUD; // 0x42
    bool LockToHUD; // 0x43
    float HudViewDistHogwarts; // 0x44
    float HudViewDistOverland; // 0x48
    float HudMinViewDist; // 0x4c
    bool BroomRevelio; // 0x50
    bool ShowHudDistanceNums; // 0x51
    bool ShouldClearOnComplete; // 0x52
    bool ReplayableOnComplete; // 0x53
    bool HasCompleteTexture; // 0x54
    bool NeedsGlint; // 0x55
    char pad_56[0x2];
    float MaxDistance; // 0x58
    float MinDistance; // 0x5c
    float Priority; // 0x60
    bool ShowPulsingIcon; // 0x64
    char pad_65[0x3];
}; // Size: 0x68
#pragma pack(pop)
