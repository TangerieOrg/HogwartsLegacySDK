#include "UFXAutoTriggerConditionBase.hpp"
#include "UFXAutoTriggerConditionList.hpp"
UFXAutoTriggerConditionList* UFXAutoTriggerConditionList::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerConditionList");
    return (UFXAutoTriggerConditionList*)res;
}
