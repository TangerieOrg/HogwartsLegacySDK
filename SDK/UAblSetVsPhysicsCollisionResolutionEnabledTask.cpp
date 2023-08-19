#include "UAblAbilityTask.hpp"
#include "UAblSetVsPhysicsCollisionResolutionEnabledTask.hpp"
UAblSetVsPhysicsCollisionResolutionEnabledTask* UAblSetVsPhysicsCollisionResolutionEnabledTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSetVsPhysicsCollisionResolutionEnabledTask");
    return (UAblSetVsPhysicsCollisionResolutionEnabledTask*)res;
}
