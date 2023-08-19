#include "UFXAutoTriggerRequiredActorsBase.hpp"
#include "UObject.hpp"
UFXAutoTriggerRequiredActorsBase* UFXAutoTriggerRequiredActorsBase::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerRequiredActorsBase");
    return (UFXAutoTriggerRequiredActorsBase*)res;
}
