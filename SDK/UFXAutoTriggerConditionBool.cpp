#include "FFXAutoTriggerFXSpawnInfo.hpp"
#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerCondition.hpp"
#include "UFXAutoTriggerConditionBool.hpp"
UFXAutoTriggerConditionBool* UFXAutoTriggerConditionBool::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerConditionBool");
    return (UFXAutoTriggerConditionBool*)res;
}
