#pragma once
#include <cstdint>
#include "FRotator.hpp"
#pragma pack(push, 1)
struct FLightClippingPlane {
    FRotator RelativeRotation; // 0x0
    float RelativeDistance; // 0xc
    bool bEnabled; // 0x10
    char pad_11[0x3];
}; // Size: 0x14
#pragma pack(pop)
