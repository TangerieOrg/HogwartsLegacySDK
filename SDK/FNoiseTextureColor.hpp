#pragma once
#include <cstdint>
#include "FColor.hpp"
#pragma pack(push, 1)
struct FNoiseTextureColor {
    TArray<FColor> ColorData; // 0x0
    int32_t Width; // 0x10
    int32_t Height; // 0x14
    bool bLinearColor; // 0x18
    bool bWantMask; // 0x19
    char pad_1a[0x6];
}; // Size: 0x20
#pragma pack(pop)
