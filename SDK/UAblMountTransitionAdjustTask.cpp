#include "FRuntimeFloatCurve.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblMountTransitionAdjustTask.hpp"
UAblMountTransitionAdjustTask* UAblMountTransitionAdjustTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblMountTransitionAdjustTask");
    return (UAblMountTransitionAdjustTask*)res;
}
