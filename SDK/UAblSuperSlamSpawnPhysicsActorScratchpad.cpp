#include "AStaticMeshActor.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblSuperSlamSpawnPhysicsActorScratchpad.hpp"
UAblSuperSlamSpawnPhysicsActorScratchpad* UAblSuperSlamSpawnPhysicsActorScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSuperSlamSpawnPhysicsActorScratchpad");
    return (UAblSuperSlamSpawnPhysicsActorScratchpad*)res;
}
