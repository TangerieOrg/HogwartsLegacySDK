#pragma once
#include <cstdint>
#include "FAdjustedValueBoolean.hpp"
#include "FAdjustedValueFloat.hpp"
#include "FColor.hpp"
#pragma pack(push, 1)
struct FDirectionalLightBasicParametersRelative {
    uint8_t bOverride_LightColor : 1; // 0x0
    uint8_t pad_bitfield_0_1 : 7;
    char pad_1[0x3];
    FAdjustedValueFloat Intensity; // 0x4
    FColor LightColor; // 0x24
    FAdjustedValueFloat Temperature; // 0x28
    FAdjustedValueBoolean bUseTemperature; // 0x48
    char pad_49[0x3];
    FAdjustedValueFloat SpecularScale; // 0x4c
    FAdjustedValueFloat IndirectLightingIntensity; // 0x6c
    FAdjustedValueFloat VolumetricScatteringIntensity; // 0x8c
    FAdjustedValueFloat AtmosphereSunLightPriority; // 0xac
    FAdjustedValueBoolean bPseudoLight; // 0xcc
    char pad_cd[0x3];
}; // Size: 0xd0
#pragma pack(pop)
