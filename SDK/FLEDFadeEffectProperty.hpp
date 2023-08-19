#pragma once
#include <cstdint>
#include "FColor.hpp"
#pragma pack(push, 1)
struct FLEDFadeEffectProperty {
    float FadeTime; // 0x0
    FColor FadeToRGB; // 0x4
    char pad_8[0x38];
}; // Size: 0x40
#pragma pack(pop)
