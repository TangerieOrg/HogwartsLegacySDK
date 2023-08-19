#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FExpHeightFogDirectionalInscatteringParametersOverride {
    uint8_t bOverride_DirectionalInscatteringExponent : 1; // 0x0
    uint8_t bOverride_DirectionalInscatteringStartDistance : 1; // 0x0
    uint8_t bOverride_DirectionalInscatteringColor : 1; // 0x0
    uint8_t bOverride_DirectionalInscatteringIntensity : 1; // 0x0
    uint8_t bOverride_DirectionalInscatteringSaturation : 1; // 0x0
    uint8_t bOverride_DirectionalInscatteringColorDirLightLuminanceModulate : 1; // 0x0
    uint8_t pad_bitfield_0_6 : 2;
    char pad_1[0x3];
    float DirectionalInscatteringExponent; // 0x4
    float DirectionalInscatteringStartDistance; // 0x8
    FLinearColor DirectionalInscatteringColor; // 0xc
    float DirectionalInscatteringIntensity; // 0x1c
    float DirectionalInscatteringSaturation; // 0x20
    float DirectionalInscatteringColorDirLightLuminanceModulate; // 0x24
}; // Size: 0x28
#pragma pack(pop)
