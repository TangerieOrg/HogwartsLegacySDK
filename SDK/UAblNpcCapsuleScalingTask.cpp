#include "FAlphaBlend.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblNpcCapsuleScalingTask.hpp"
UAblNpcCapsuleScalingTask* UAblNpcCapsuleScalingTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcCapsuleScalingTask");
    return (UAblNpcCapsuleScalingTask*)res;
}
