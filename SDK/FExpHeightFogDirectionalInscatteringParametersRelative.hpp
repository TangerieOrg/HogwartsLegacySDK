#pragma once
#include <cstdint>
#include "FAdjustedValueFloat.hpp"
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FExpHeightFogDirectionalInscatteringParametersRelative {
    uint8_t bOverride_DirectionalInscatteringColor : 1; // 0x0
    uint8_t pad_bitfield_0_1 : 7;
    char pad_1[0x3];
    FAdjustedValueFloat DirectionalInscatteringExponent; // 0x4
    FAdjustedValueFloat DirectionalInscatteringStartDistance; // 0x24
    FLinearColor DirectionalInscatteringColor; // 0x44
    FAdjustedValueFloat DirectionalInscatteringIntensity; // 0x54
    FAdjustedValueFloat DirectionalInscatteringSaturation; // 0x74
    FAdjustedValueFloat DirectionalInscatteringColorDirLightLuminanceModulate; // 0x94
}; // Size: 0xb4
#pragma pack(pop)
