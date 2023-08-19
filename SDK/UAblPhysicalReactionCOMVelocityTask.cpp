#include "EAblNpcReactCapsuleImpulseVelocitySource.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblPhysicalReactionCOMVelocityTask.hpp"
UAblPhysicalReactionCOMVelocityTask* UAblPhysicalReactionCOMVelocityTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblPhysicalReactionCOMVelocityTask");
    return (UAblPhysicalReactionCOMVelocityTask*)res;
}
