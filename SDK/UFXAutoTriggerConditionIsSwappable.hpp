#pragma once
#include <cstdint>
#include "FMaterialPermuterKeyProperty.hpp"
#include "UFXAutoTriggerConditionBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerConditionIsSwappable : public UFXAutoTriggerConditionBase {
public:
    FMaterialPermuterKeyProperty Key; // 0x28
    static UFXAutoTriggerConditionIsSwappable* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
