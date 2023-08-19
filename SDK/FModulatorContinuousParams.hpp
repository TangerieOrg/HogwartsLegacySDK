#pragma once
#include <cstdint>
#include "ModulationParamMode.hpp"
#pragma pack(push, 1)
struct FModulatorContinuousParams {
    FName ParameterName; // 0x0
    float Default; // 0x8
    float MinInput; // 0xc
    float MaxInput; // 0x10
    float MinOutput; // 0x14
    float MaxOutput; // 0x18
    ModulationParamMode ParamMode; // 0x1c
    char pad_1d[0x3];
}; // Size: 0x20
#pragma pack(pop)
