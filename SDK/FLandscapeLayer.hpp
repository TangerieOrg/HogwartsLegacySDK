#pragma once
#include <cstdint>
#include "ELandscapeBlendMode.hpp"
#include "FGuid.hpp"
#include "FLandscapeLayerBrush.hpp"
#pragma pack(push, 1)
struct FLandscapeLayer {
    FGuid Guid; // 0x0
    FName Name; // 0x10
    bool bVisible; // 0x18
    bool bLocked; // 0x19
    char pad_1a[0x2];
    float HeightmapAlpha; // 0x1c
    float WeightmapAlpha; // 0x20
    ELandscapeBlendMode BlendMode; // 0x24
    char pad_25[0x3];
    TArray<FLandscapeLayerBrush> Brushes; // 0x28
    char pad_38[0x50];
}; // Size: 0x88
#pragma pack(pop)
