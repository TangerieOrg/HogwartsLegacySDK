#include "UFXAutoTriggerRequiredActorsBase.hpp"
#include "UFXAutoTriggerRequiredActorsMatch.hpp"
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
UFXAutoTriggerRequiredActorsMatch* UFXAutoTriggerRequiredActorsMatch::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerRequiredActorsMatch");
    return (UFXAutoTriggerRequiredActorsMatch*)res;
}
