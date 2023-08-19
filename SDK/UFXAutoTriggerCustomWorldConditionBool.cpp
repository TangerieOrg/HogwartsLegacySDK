#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerCustomWorldConditionBool.hpp"
UFXAutoTriggerCustomWorldConditionBool* UFXAutoTriggerCustomWorldConditionBool::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerCustomWorldConditionBool");
    return (UFXAutoTriggerCustomWorldConditionBool*)res;
}
