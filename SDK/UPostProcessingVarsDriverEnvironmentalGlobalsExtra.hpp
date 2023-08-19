#pragma once
#include <cstdint>
#include "FEnvironmentalGlobalsScalarName.hpp"
#include "UPostProcessingVarsDriver.hpp"
#pragma pack(push, 1)
class UPostProcessingVarsDriverEnvironmentalGlobalsExtra : public UPostProcessingVarsDriver {
public:
    FEnvironmentalGlobalsScalarName EnvironmentalGlobal; // 0x28
    static UPostProcessingVarsDriverEnvironmentalGlobalsExtra* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
