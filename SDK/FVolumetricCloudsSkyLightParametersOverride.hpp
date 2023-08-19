#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FVolumetricCloudsSkyLightParametersOverride {
    uint8_t bOverride_CloudOutput : 1; // 0x0
    uint8_t bOverride_CloudAlpha : 1; // 0x0
    uint8_t bOverride_Desaturate : 1; // 0x0
    uint8_t bOverride_GroundColor : 1; // 0x0
    uint8_t pad_bitfield_0_4 : 4;
    char pad_1[0x3];
    float CloudOutput; // 0x4
    float CloudAlpha; // 0x8
    float Desaturate; // 0xc
    FLinearColor GroundColor; // 0x10
}; // Size: 0x20
#pragma pack(pop)
