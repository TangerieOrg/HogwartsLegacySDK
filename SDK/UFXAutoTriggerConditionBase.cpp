#include "UFXAutoTriggerConditionBase.hpp"
#include "UObject.hpp"
UFXAutoTriggerConditionBase* UFXAutoTriggerConditionBase::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerConditionBase");
    return (UFXAutoTriggerConditionBase*)res;
}
