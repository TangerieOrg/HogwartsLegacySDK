#include "UAblAbilityTask.hpp"
#include "UAblCapsulePhysicsTask.hpp"
UAblCapsulePhysicsTask* UAblCapsulePhysicsTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblCapsulePhysicsTask");
    return (UAblCapsulePhysicsTask*)res;
}
