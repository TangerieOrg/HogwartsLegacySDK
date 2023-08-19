#include "UAblAbilityTask.hpp"
#include "UClass.hpp"
#include "UablSpawnMunitionTask.hpp"
UablSpawnMunitionTask* UablSpawnMunitionTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablSpawnMunitionTask");
    return (UablSpawnMunitionTask*)res;
}
