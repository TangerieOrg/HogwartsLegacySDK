#include "UAblAbilityTask.hpp"
#include "UClass.hpp"
#include "UablCentaurSpawnMunitionTask.hpp"
UablCentaurSpawnMunitionTask* UablCentaurSpawnMunitionTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablCentaurSpawnMunitionTask");
    return (UablCentaurSpawnMunitionTask*)res;
}
