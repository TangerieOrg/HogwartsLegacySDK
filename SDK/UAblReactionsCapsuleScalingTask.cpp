#include "FAlphaBlend.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblReactionsCapsuleScalingTask.hpp"
UAblReactionsCapsuleScalingTask* UAblReactionsCapsuleScalingTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblReactionsCapsuleScalingTask");
    return (UAblReactionsCapsuleScalingTask*)res;
}
