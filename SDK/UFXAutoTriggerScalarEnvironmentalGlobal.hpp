#pragma once
#include <cstdint>
#include "FEnvironmentalGlobalsScalarName.hpp"
#include "UFXAutoTriggerScalar.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarEnvironmentalGlobal : public UFXAutoTriggerScalar {
public:
    FEnvironmentalGlobalsScalarName EnvironmentalGlobal; // 0x28
    static UFXAutoTriggerScalarEnvironmentalGlobal* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
