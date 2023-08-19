#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FSkyAtmosphereOverrideDirectionParametersOverride {
    uint8_t bOverride_LightDirection0 : 1; // 0x0
    uint8_t bOverride_LightDirection1 : 1; // 0x0
    uint8_t pad_bitfield_0_2 : 6;
    char pad_1[0x3];
    FVector LightDirection0; // 0x4
    FVector LightDirection1; // 0x10
}; // Size: 0x1c
#pragma pack(pop)
