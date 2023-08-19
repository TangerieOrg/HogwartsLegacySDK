#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FGeocentricOrbitCreateBaseParams {
    FName Name; // 0x0
    float RadiusMeters; // 0x8
    FColor TagColor; // 0xc
    FVector2D TagScale; // 0x10
    uint8_t bLinear : 1; // 0x18
    uint8_t bShowTags : 1; // 0x18
    uint8_t bShowBasis : 1; // 0x18
    uint8_t bDebugDraw : 1; // 0x18
    uint8_t bHiddenInGame : 1; // 0x18
    uint8_t pad_bitfield_18_5 : 3;
    char pad_19[0x3];
}; // Size: 0x1c
#pragma pack(pop)
