#include "FMaterialPermuterKeyProperty.hpp"
#include "UFXAutoTriggerConditionBase.hpp"
#include "UFXAutoTriggerConditionIsSwappable.hpp"
UFXAutoTriggerConditionIsSwappable* UFXAutoTriggerConditionIsSwappable::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerConditionIsSwappable");
    return (UFXAutoTriggerConditionIsSwappable*)res;
}
