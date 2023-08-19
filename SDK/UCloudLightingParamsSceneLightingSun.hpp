#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UCloudLightingParams.hpp"
#pragma pack(push, 1)
class UCloudLightingParamsSceneLightingSun : public UCloudLightingParams {
public:
    uint8_t bOverride_Color : 1; // 0x28
    uint8_t bOverride_Intensity : 1; // 0x28
    uint8_t bOverride_Saturation : 1; // 0x28
    uint8_t pad_bitfield_28_3 : 5;
    char pad_29[0x3];
    FLinearColor Color; // 0x2c
    float Intensity; // 0x3c
    float Saturation; // 0x40
    char pad_44[0x4];
    static UCloudLightingParamsSceneLightingSun* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
