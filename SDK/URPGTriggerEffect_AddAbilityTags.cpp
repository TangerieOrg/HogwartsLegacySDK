#include "FGameplayTagContainer.hpp"
#include "URPGTriggerEffect_AddAbilityTags.hpp"
#include "URPGTriggerEffect_Conditional.hpp"
URPGTriggerEffect_AddAbilityTags* URPGTriggerEffect_AddAbilityTags::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_AddAbilityTags");
    return (URPGTriggerEffect_AddAbilityTags*)res;
}
