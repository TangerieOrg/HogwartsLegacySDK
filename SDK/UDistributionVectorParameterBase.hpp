#pragma once
#include <cstdint>
#include "DistributionParamMode.hpp"
#include "FVector.hpp"
#include "UDistributionVectorConstant.hpp"
#pragma pack(push, 1)
class UDistributionVectorParameterBase : public UDistributionVectorConstant {
public:
    FName ParameterName; // 0x50
    FVector MinInput; // 0x58
    FVector MaxInput; // 0x64
    FVector MinOutput; // 0x70
    FVector MaxOutput; // 0x7c
    DistributionParamMode ParamModes[3]; // 0x88
    char pad_8b[0x5];
    static UDistributionVectorParameterBase* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
