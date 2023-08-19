#pragma once
#include <cstdint>
#include "EFXAutoTriggerConditionType.hpp"
#include "UFXAutoTriggerConditionBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerCondition : public UFXAutoTriggerConditionBase {
public:
    EFXAutoTriggerConditionType Type; // 0x28
    char pad_29[0x7];
    static UFXAutoTriggerCondition* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
