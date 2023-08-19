#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblBallisticToTargetTask.hpp"
UAblBallisticToTargetTask* UAblBallisticToTargetTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBallisticToTargetTask");
    return (UAblBallisticToTargetTask*)res;
}
