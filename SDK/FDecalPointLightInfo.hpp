#pragma once
#include <cstdint>
#include "ELightUnits.hpp"
#include "FColor.hpp"
#pragma pack(push, 1)
struct FDecalPointLightInfo {
    ELightUnits IntensityUnits; // 0x0
    char pad_1[0x3];
    float Intensity; // 0x4
    FColor LightColor; // 0x8
    float Temperature; // 0xc
    float AttenuationRadius; // 0x10
    float LightFalloffExponent; // 0x14
    float MinDistance; // 0x18
    float MaxDrawDistance; // 0x1c
    float MaxDistanceFadeRange; // 0x20
    bool bUseTemperature; // 0x24
    bool bUseInverseSquaredFalloff; // 0x25
    bool bVisible; // 0x26
    char pad_27[0x1];
}; // Size: 0x28
#pragma pack(pop)
