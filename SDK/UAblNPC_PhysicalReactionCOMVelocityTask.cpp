#include "EAblNpcReactCapsuleImpulseVelocitySource.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblNPC_PhysicalReactionCOMVelocityTask.hpp"
UAblNPC_PhysicalReactionCOMVelocityTask* UAblNPC_PhysicalReactionCOMVelocityTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPC_PhysicalReactionCOMVelocityTask");
    return (UAblNPC_PhysicalReactionCOMVelocityTask*)res;
}
