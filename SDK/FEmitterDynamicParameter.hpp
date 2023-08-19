#pragma once
#include <cstdint>
#include "EEmitterDynamicParameterValue.hpp"
#include "FRawDistributionFloat.hpp"
#pragma pack(push, 1)
struct FEmitterDynamicParameter {
    FName ParamName; // 0x0
    uint8_t bUseEmitterTime : 1; // 0x8
    uint8_t bSpawnTimeOnly : 1; // 0x8
    uint8_t pad_bitfield_8_2 : 6;
    char pad_9[0x3];
    EEmitterDynamicParameterValue ValueMethod; // 0xc
    char pad_d[0x3];
    uint8_t bScaleVelocityByParamValue : 1; // 0x10
    uint8_t pad_bitfield_10_1 : 7;
    char pad_11[0x7];
    FRawDistributionFloat ParamValue; // 0x18
}; // Size: 0x48
#pragma pack(pop)
