#include "EManagedFacialAnimationPriority.hpp"
#include "FFacialAnimation.hpp"
#include "UAblAbilityTask.hpp"
#include "UablFacialAnimationStateTask.hpp"
UablFacialAnimationStateTask* UablFacialAnimationStateTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablFacialAnimationStateTask");
    return (UablFacialAnimationStateTask*)res;
}
