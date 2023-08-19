#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
#include "UablImpulseToTargetTask.hpp"
UablImpulseToTargetTask* UablImpulseToTargetTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablImpulseToTargetTask");
    return (UablImpulseToTargetTask*)res;
}
