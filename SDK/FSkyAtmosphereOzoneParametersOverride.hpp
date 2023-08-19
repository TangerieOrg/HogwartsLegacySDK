#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FSkyAtmosphereOzoneParametersOverride {
    uint8_t bOverride_OzoneAbsorptionScale : 1; // 0x0
    uint8_t bOverride_OzoneAbsorption : 1; // 0x0
    uint8_t bOverride_OzoneTentDistributionTipAltitude : 1; // 0x0
    uint8_t bOverride_OzoneTentDistributionTipValue : 1; // 0x0
    uint8_t bOverride_OzoneTentDistributionWidth : 1; // 0x0
    uint8_t pad_bitfield_0_5 : 3;
    char pad_1[0x3];
    float OzoneAbsorptionScale; // 0x4
    FLinearColor OzoneAbsorption; // 0x8
    float OzoneTentDistributionTipAltitude; // 0x18
    float OzoneTentDistributionTipValue; // 0x1c
    float OzoneTentDistributionWidth; // 0x20
}; // Size: 0x24
#pragma pack(pop)
