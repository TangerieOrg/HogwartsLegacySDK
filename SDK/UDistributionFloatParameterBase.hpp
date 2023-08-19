#pragma once
#include <cstdint>
#include "DistributionParamMode.hpp"
#include "UDistributionFloatConstant.hpp"
#pragma pack(push, 1)
class UDistributionFloatParameterBase : public UDistributionFloatConstant {
public:
    FName ParameterName; // 0x40
    float MinInput; // 0x48
    float MaxInput; // 0x4c
    float MinOutput; // 0x50
    float MaxOutput; // 0x54
    DistributionParamMode ParamMode; // 0x58
    char pad_59[0x7];
    static UDistributionFloatParameterBase* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
