#include "UFXAutoTriggerRequiredActorsBase.hpp"
#include "UFXAutoTriggerRequiredActorsMounts.hpp"
UFXAutoTriggerRequiredActorsMounts* UFXAutoTriggerRequiredActorsMounts::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerRequiredActorsMounts");
    return (UFXAutoTriggerRequiredActorsMounts*)res;
}
