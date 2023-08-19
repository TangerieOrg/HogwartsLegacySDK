#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FExpHeightFogDirectionalInscatteringParameters {
    float DirectionalInscatteringExponent; // 0x0
    float DirectionalInscatteringStartDistance; // 0x4
    FLinearColor DirectionalInscatteringColor; // 0x8
    float DirectionalInscatteringIntensity; // 0x18
    float DirectionalInscatteringSaturation; // 0x1c
    float DirectionalInscatteringColorDirLightLuminanceModulate; // 0x20
}; // Size: 0x24
#pragma pack(pop)
