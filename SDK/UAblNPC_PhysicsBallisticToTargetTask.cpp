#include "ENPC_PhysicsBallisticToTargetTaskMode.hpp"
#include "ENPC_PhysicsBallisticType.hpp"
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblNPC_PhysicsBallisticToTargetTask.hpp"
UAblNPC_PhysicsBallisticToTargetTask* UAblNPC_PhysicsBallisticToTargetTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPC_PhysicsBallisticToTargetTask");
    return (UAblNPC_PhysicsBallisticToTargetTask*)res;
}
