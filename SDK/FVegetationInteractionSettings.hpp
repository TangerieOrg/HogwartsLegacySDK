#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FVegetationInteractionSettings {
    FVector Offset; // 0x0
    float InnerRadius; // 0xc
    float OuterRadius; // 0x10
    float ForceScalingMultiplierMin; // 0x14
    float ForceScalingMultiplierMax; // 0x18
    float MaxAngleMultiplierMin; // 0x1c
    float MaxAngleMultiplierMax; // 0x20
}; // Size: 0x24
#pragma pack(pop)
