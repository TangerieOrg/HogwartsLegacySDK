#include "EFXAutoTriggerConditionType.hpp"
#include "UFXAutoTriggerCondition.hpp"
#include "UFXAutoTriggerConditionBase.hpp"
UFXAutoTriggerCondition* UFXAutoTriggerCondition::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerCondition");
    return (UFXAutoTriggerCondition*)res;
}
