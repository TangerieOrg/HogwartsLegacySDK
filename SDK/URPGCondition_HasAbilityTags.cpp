#include "FGameplayTagContainer.hpp"
#include "URPGCondition.hpp"
#include "URPGCondition_HasAbilityTags.hpp"
URPGCondition_HasAbilityTags* URPGCondition_HasAbilityTags::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGCondition_HasAbilityTags");
    return (URPGCondition_HasAbilityTags*)res;
}
