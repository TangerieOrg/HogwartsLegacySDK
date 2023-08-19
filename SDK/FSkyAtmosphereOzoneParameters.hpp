#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FSkyAtmosphereOzoneParameters {
    float OzoneAbsorptionScale; // 0x0
    FLinearColor OzoneAbsorption; // 0x4
    float OzoneTentDistributionTipAltitude; // 0x14
    float OzoneTentDistributionTipValue; // 0x18
    float OzoneTentDistributionWidth; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
