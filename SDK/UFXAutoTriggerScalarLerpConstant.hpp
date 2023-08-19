#pragma once
#include <cstdint>
#include "UFXAutoTriggerScalarSingleParam.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarLerpConstant : public UFXAutoTriggerScalarSingleParam {
public:
    float A; // 0x30
    float B; // 0x34
    static UFXAutoTriggerScalarLerpConstant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
