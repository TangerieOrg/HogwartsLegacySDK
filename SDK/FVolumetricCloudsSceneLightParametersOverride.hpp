#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FVolumetricCloudsSceneLightParametersOverride {
    uint8_t bOverride_Direction : 1; // 0x0
    uint8_t bOverride_Color : 1; // 0x0
    uint8_t bOverride_Intensity : 1; // 0x0
    uint8_t bOverride_Saturation : 1; // 0x0
    uint8_t pad_bitfield_0_4 : 4;
    char pad_1[0x3];
    FVector Direction; // 0x4
    FLinearColor Color; // 0x10
    float Intensity; // 0x20
    float Saturation; // 0x24
}; // Size: 0x28
#pragma pack(pop)
