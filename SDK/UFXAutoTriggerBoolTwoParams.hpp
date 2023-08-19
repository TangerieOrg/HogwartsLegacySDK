#pragma once
#include <cstdint>
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolTwoParams : public UFXAutoTriggerBool {
public:
    UFXAutoTriggerBool* A; // 0x28
    UFXAutoTriggerBool* B; // 0x30
    static UFXAutoTriggerBoolTwoParams* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
