#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FLandscapeSplineInterpPoint {
    FVector Center; // 0x0
    FVector Left; // 0xc
    FVector Right; // 0x18
    FVector FalloffLeft; // 0x24
    FVector FalloffRight; // 0x30
    FVector LayerLeft; // 0x3c
    FVector LayerRight; // 0x48
    FVector LayerFalloffLeft; // 0x54
    FVector LayerFalloffRight; // 0x60
    float StartEndFalloff; // 0x6c
}; // Size: 0x70
#pragma pack(pop)
