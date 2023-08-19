#pragma once
#include <cstdint>
#include "UFXAutoTriggerBoolTwoScalarParams.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolEqual : public UFXAutoTriggerBoolTwoScalarParams {
public:
    float Threshold; // 0x38
    char pad_3c[0x4];
    static UFXAutoTriggerBoolEqual* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
