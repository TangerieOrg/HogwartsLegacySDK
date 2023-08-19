#include "UAblAbilityTask.hpp"
#include "UablDeathRespawnTask.hpp"
UablDeathRespawnTask* UablDeathRespawnTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablDeathRespawnTask");
    return (UablDeathRespawnTask*)res;
}
