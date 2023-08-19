#pragma once
#include <cstdint>
#include "UFXAutoTriggerBool.hpp"
class UFXAutoTriggerScalar;
#pragma pack(push, 1)
class UFXAutoTriggerBoolThreeScalarParams : public UFXAutoTriggerBool {
public:
    UFXAutoTriggerScalar* A; // 0x28
    UFXAutoTriggerScalar* B; // 0x30
    UFXAutoTriggerScalar* C; // 0x38
    static UFXAutoTriggerBoolThreeScalarParams* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
