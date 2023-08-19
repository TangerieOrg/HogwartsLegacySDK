#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
#include "UObject.hpp"
UFXAutoTriggerRequiredActorsMatchBase* UFXAutoTriggerRequiredActorsMatchBase::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerRequiredActorsMatchBase");
    return (UFXAutoTriggerRequiredActorsMatchBase*)res;
}
