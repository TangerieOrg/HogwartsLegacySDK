#pragma once
#include <cstdint>
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerCustomActorConditionBool : public UFXAutoTriggerBool {
public:
    FName CustomCondition; // 0x28
    static UFXAutoTriggerCustomActorConditionBool* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
