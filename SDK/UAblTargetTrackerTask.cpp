#include "ETargetID\Type.hpp"
#include "ETask_TargetTrackerType.hpp"
#include "ETask_TargetType.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblTargetTrackerTask.hpp"
UAblTargetTrackerTask* UAblTargetTrackerTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblTargetTrackerTask");
    return (UAblTargetTrackerTask*)res;
}
