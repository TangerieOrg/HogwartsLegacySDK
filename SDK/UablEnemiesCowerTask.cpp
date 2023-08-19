#include "EFacialEmotion.hpp"
#include "EManagedFacialEmotionPriority.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
#include "UablEnemiesCowerTask.hpp"
UablEnemiesCowerTask* UablEnemiesCowerTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablEnemiesCowerTask");
    return (UablEnemiesCowerTask*)res;
}
