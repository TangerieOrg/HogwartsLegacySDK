#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FStarCatalogDebugStar {
    FLinearColor DebugColor; // 0x0
    float DebugBrightness; // 0x10
}; // Size: 0x14
#pragma pack(pop)
