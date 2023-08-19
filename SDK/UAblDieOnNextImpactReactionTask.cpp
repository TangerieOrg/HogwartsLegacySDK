#include "UAblAbilityTask.hpp"
#include "UAblDieOnNextImpactReactionTask.hpp"
UAblDieOnNextImpactReactionTask* UAblDieOnNextImpactReactionTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblDieOnNextImpactReactionTask");
    return (UAblDieOnNextImpactReactionTask*)res;
}
