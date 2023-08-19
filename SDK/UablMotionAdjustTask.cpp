#include "EAlphaBlendOption.hpp"
#include "EMovementMode.hpp"
#include "FAlphaBlend.hpp"
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
#include "UablMotionAdjustTargetLocationGetter.hpp"
#include "UablMotionAdjustTask.hpp"
UablMotionAdjustTask* UablMotionAdjustTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablMotionAdjustTask");
    return (UablMotionAdjustTask*)res;
}
