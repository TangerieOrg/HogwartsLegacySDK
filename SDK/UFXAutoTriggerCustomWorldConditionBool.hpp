#pragma once
#include <cstdint>
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerCustomWorldConditionBool : public UFXAutoTriggerBool {
public:
    FName CustomCondition; // 0x28
    static UFXAutoTriggerCustomWorldConditionBool* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
