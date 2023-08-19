#pragma once
#include <cstdint>
#include "EDynamicLightAdaptationEVValueType.hpp"
#pragma pack(push, 1)
struct FDynamicLightAdaptationEVValue {
    EDynamicLightAdaptationEVValueType Type; // 0x0
    char pad_1[0x3];
    float EVValue; // 0x4
    float MinMaxTarget; // 0x8
}; // Size: 0xc
#pragma pack(pop)
