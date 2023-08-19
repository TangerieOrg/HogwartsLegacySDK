#pragma once
#include <cstdint>
#include "FUberExposureColorGrading.hpp"
class UCurveFloat;
#pragma pack(push, 1)
struct FUberExposureColorGradingShadows : public FUberExposureColorGrading {
    uint8_t bUseShadowsMax : 1; // 0x30
    uint8_t pad_bitfield_30_1 : 7;
    char pad_31[0x7];
    UCurveFloat* ShadowsMax; // 0x38
}; // Size: 0x40
#pragma pack(pop)
