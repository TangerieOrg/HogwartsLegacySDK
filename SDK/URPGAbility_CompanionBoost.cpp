#include "FGameplayTagContainer.hpp"
#include "UGameplayPropertyMod.hpp"
#include "URPGAbility.hpp"
#include "URPGAbilityBase.hpp"
#include "URPGAbility_CompanionBoost.hpp"
URPGAbility_CompanionBoost* URPGAbility_CompanionBoost::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbility_CompanionBoost");
    return (URPGAbility_CompanionBoost*)res;
}
