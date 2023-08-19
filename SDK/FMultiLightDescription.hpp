#pragma once
#include <cstdint>
#include "EBasicLightType.hpp"
#include "FBasicLightDescription.hpp"
#include "FPointLightDescription.hpp"
#include "FRectLightDescription.hpp"
#include "FSpotLightDescription.hpp"
#pragma pack(push, 1)
struct FMultiLightDescription {
    EBasicLightType Type; // 0x0
    char pad_1[0x3];
    FBasicLightDescription Common; // 0x4
    FPointLightDescription Point; // 0x50
    FSpotLightDescription Spot; // 0x64
    FRectLightDescription Rect; // 0x80
}; // Size: 0x98
#pragma pack(pop)
