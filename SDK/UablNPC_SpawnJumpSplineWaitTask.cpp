#include "EEnemy_Ability.hpp"
#include "UAblAbilityTask.hpp"
#include "UablNPC_SpawnJumpSplineWaitTask.hpp"
UablNPC_SpawnJumpSplineWaitTask* UablNPC_SpawnJumpSplineWaitTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablNPC_SpawnJumpSplineWaitTask");
    return (UablNPC_SpawnJumpSplineWaitTask*)res;
}
