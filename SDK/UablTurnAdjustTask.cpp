#include "FAlphaBlend.hpp"
#include "UAblAbilityTask.hpp"
#include "UTurnAdjust_TargetDirectionGetter.hpp"
#include "UablTurnAdjustTask.hpp"
UablTurnAdjustTask* UablTurnAdjustTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablTurnAdjustTask");
    return (UablTurnAdjustTask*)res;
}
