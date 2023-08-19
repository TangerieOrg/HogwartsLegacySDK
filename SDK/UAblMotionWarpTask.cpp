#include "UAblAbilityTask.hpp"
#include "UAblMotionWarpTask.hpp"
#include "UAblTaskCondition.hpp"
#include "UAvaMotionWarpingModifierConfig.hpp"
UAblMotionWarpTask* UAblMotionWarpTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblMotionWarpTask");
    return (UAblMotionWarpTask*)res;
}
