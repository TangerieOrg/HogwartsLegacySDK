#include "FAlphaBlend.hpp"
#include "FVector2D.hpp"
#include "UAblAbilityTask.hpp"
#include "UablJumpAdjustTask.hpp"
UablJumpAdjustTask* UablJumpAdjustTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablJumpAdjustTask");
    return (UablJumpAdjustTask*)res;
}
