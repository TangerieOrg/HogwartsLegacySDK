#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerCustomActorConditionBool.hpp"
UFXAutoTriggerCustomActorConditionBool* UFXAutoTriggerCustomActorConditionBool::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerCustomActorConditionBool");
    return (UFXAutoTriggerCustomActorConditionBool*)res;
}
