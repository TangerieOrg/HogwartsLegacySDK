#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FGlobalLightingSunColorParams {
    FLinearColor BaseSunColor; // 0x0
    float WhiteAngle; // 0x10
    float HoldSunsetColorAngle; // 0x14
    float AstronomicalTwilight; // 0x18
    float Desaturate; // 0x1c
    bool bNormalizeColors; // 0x20
    char pad_21[0x3];
}; // Size: 0x24
#pragma pack(pop)
