#pragma once
#include <cstdint>
#include "UFXAutoTriggerBool.hpp"
class UFXAutoTriggerScalar;
#pragma pack(push, 1)
class UFXAutoTriggerBoolTwoScalarParams : public UFXAutoTriggerBool {
public:
    UFXAutoTriggerScalar* A; // 0x28
    UFXAutoTriggerScalar* B; // 0x30
    static UFXAutoTriggerBoolTwoScalarParams* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
