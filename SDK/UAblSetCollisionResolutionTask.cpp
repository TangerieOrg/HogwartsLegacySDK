#include "ECollisionResolutionTaskType.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblSetCollisionResolutionTask.hpp"
UAblSetCollisionResolutionTask* UAblSetCollisionResolutionTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSetCollisionResolutionTask");
    return (UAblSetCollisionResolutionTask*)res;
}
