#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FVolumetricCloudsSkyLightParameters {
    float CloudOutput; // 0x0
    float CloudAlpha; // 0x4
    float Desaturate; // 0x8
    FLinearColor GroundColor; // 0xc
}; // Size: 0x1c
#pragma pack(pop)
