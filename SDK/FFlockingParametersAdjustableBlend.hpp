#pragma once
#include <cstdint>
#include "FFlockingParametersAdjustable.hpp"
#pragma pack(push, 1)
struct FFlockingParametersAdjustableBlend {
    FFlockingParametersAdjustable Start; // 0x0
    FFlockingParametersAdjustable End; // 0x5c
    float BlendTimeSeconds; // 0xb8
    float Age; // 0xbc
}; // Size: 0xc0
#pragma pack(pop)
