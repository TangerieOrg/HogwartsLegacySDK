#include "EFacialEmotion.hpp"
#include "EManagedFacialEmotionPriority.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
#include "UablFacialEmotionStateTask.hpp"
UablFacialEmotionStateTask* UablFacialEmotionStateTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablFacialEmotionStateTask");
    return (UablFacialEmotionStateTask*)res;
}
