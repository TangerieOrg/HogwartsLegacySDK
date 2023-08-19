#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
#include "UFXAutoTriggerRequiredActorsMatchChildOf.hpp"
UFXAutoTriggerRequiredActorsMatchChildOf* UFXAutoTriggerRequiredActorsMatchChildOf::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerRequiredActorsMatchChildOf");
    return (UFXAutoTriggerRequiredActorsMatchChildOf*)res;
}
