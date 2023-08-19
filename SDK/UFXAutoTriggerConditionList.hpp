#pragma once
#include <cstdint>
#include "UFXAutoTriggerConditionBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerConditionList : public UFXAutoTriggerConditionBase {
public:
    TArray<UFXAutoTriggerConditionBase*> Conditions; // 0x28
    static UFXAutoTriggerConditionList* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
