#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FVolumetricCloudsSceneLightParameters {
    FVector Direction; // 0x0
    FLinearColor Color; // 0xc
    float Intensity; // 0x1c
    float Saturation; // 0x20
}; // Size: 0x24
#pragma pack(pop)
