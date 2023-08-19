#include "UAblAbilityTask.hpp"
#include "UAblBallisticFromReactionVelocityTask.hpp"
UAblBallisticFromReactionVelocityTask* UAblBallisticFromReactionVelocityTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBallisticFromReactionVelocityTask");
    return (UAblBallisticFromReactionVelocityTask*)res;
}
