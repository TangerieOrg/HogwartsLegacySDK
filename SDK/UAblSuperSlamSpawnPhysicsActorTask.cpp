#include "UAblAbilityTask.hpp"
#include "UAblSuperSlamSpawnPhysicsActorTask.hpp"
UAblSuperSlamSpawnPhysicsActorTask* UAblSuperSlamSpawnPhysicsActorTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSuperSlamSpawnPhysicsActorTask");
    return (UAblSuperSlamSpawnPhysicsActorTask*)res;
}
