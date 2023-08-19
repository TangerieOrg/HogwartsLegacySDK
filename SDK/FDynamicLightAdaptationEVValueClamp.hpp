#pragma once
#include <cstdint>
#include "FDynamicLightAdaptationEVValue.hpp"
#pragma pack(push, 1)
struct FDynamicLightAdaptationEVValueClamp {
    FDynamicLightAdaptationEVValue MinEV; // 0x0
    FDynamicLightAdaptationEVValue MaxEV; // 0xc
    uint8_t bUseMinEV : 1; // 0x18
    uint8_t bUseMaxEV : 1; // 0x18
    uint8_t pad_bitfield_18_2 : 6;
    char pad_19[0x3];
}; // Size: 0x1c
#pragma pack(pop)
