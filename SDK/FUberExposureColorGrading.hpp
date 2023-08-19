#pragma once
#include <cstdint>
class UCurveLinearColor;
#pragma pack(push, 1)
struct FUberExposureColorGrading {
    uint8_t bUseColorSaturation : 1; // 0x0
    uint8_t bUseColorContrast : 1; // 0x0
    uint8_t bUseColorGamma : 1; // 0x0
    uint8_t bUseColorGain : 1; // 0x0
    uint8_t bUseColorOffset : 1; // 0x0
    uint8_t pad_bitfield_0_5 : 3;
    char pad_1[0x7];
    UCurveLinearColor* ColorSaturation; // 0x8
    UCurveLinearColor* ColorContrast; // 0x10
    UCurveLinearColor* ColorGamma; // 0x18
    UCurveLinearColor* ColorGain; // 0x20
    UCurveLinearColor* ColorOffset; // 0x28
}; // Size: 0x30
#pragma pack(pop)
