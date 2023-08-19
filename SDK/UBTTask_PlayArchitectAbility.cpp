#include "EInteractionProject.hpp"
#include "FGameplayTagContainer.hpp"
#include "UBTTask_PlayAbilityBase.hpp"
#include "UBTTask_PlayArchitectAbility.hpp"
#include "UInteractionArchitectAsset.hpp"
UBTTask_PlayArchitectAbility* UBTTask_PlayArchitectAbility::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.BTTask_PlayArchitectAbility");
    return (UBTTask_PlayArchitectAbility*)res;
}
