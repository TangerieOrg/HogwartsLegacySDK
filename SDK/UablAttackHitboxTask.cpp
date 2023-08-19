#include "FAblAbilityTargetTypeLocation.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
#include "UClass.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UablAttackHitboxTask.hpp"
UablAttackHitboxTask* UablAttackHitboxTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablAttackHitboxTask");
    return (UablAttackHitboxTask*)res;
}
