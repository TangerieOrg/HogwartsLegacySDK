#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
#include "UFXAutoTriggerRequiredActorsMatchTag.hpp"
UFXAutoTriggerRequiredActorsMatchTag* UFXAutoTriggerRequiredActorsMatchTag::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerRequiredActorsMatchTag");
    return (UFXAutoTriggerRequiredActorsMatchTag*)res;
}
