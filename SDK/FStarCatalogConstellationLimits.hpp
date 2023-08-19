#pragma once
#include <cstdint>
#include "FStarCatalogConstellationStars.hpp"
#pragma pack(push, 1)
struct FStarCatalogConstellationLimits {
    FStarCatalogConstellationStars LimitConstellationStars; // 0x0
    int32_t DefaultLimitConstellationStars; // 0x50
    float ConstellationNameMagnitudeCutoff; // 0x54
    bool bUseConstellationStarsLimit; // 0x58
    bool bUseDefaultConstellationStarsLimit; // 0x59
    bool bUseConstellationNameMagnitudeCutoff; // 0x5a
    char pad_5b[0x5];
}; // Size: 0x60
#pragma pack(pop)
