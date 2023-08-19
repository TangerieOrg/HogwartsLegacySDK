#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FStarCatalogEntry : public FTableRowBase {
    float RightAscention; // 0x8
    float Declination; // 0xc
    float Temperature; // 0x10
    float Magnitude; // 0x14
}; // Size: 0x18
#pragma pack(pop)
