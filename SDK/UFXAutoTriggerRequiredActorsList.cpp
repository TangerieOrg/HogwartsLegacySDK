#include "UFXAutoTriggerRequiredActorsBase.hpp"
#include "UFXAutoTriggerRequiredActorsList.hpp"
UFXAutoTriggerRequiredActorsList* UFXAutoTriggerRequiredActorsList::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerRequiredActorsList");
    return (UFXAutoTriggerRequiredActorsList*)res;
}
