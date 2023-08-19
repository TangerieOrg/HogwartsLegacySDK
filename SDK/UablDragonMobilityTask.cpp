#include "EablEnemy_DragonMobilityType.hpp"
#include "UAblAbilityTask.hpp"
#include "UablDragonMobilityTask.hpp"
UablDragonMobilityTask* UablDragonMobilityTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablDragonMobilityTask");
    return (UablDragonMobilityTask*)res;
}
