#pragma once
#include <cstdint>
#include "FColor.hpp"
#pragma pack(push, 1)
struct FNoiseTextureNormalMap {
    TArray<FColor> ColorData; // 0x0
    int32_t Width; // 0x10
    int32_t Height; // 0x14
    bool bLinearColor; // 0x18
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
