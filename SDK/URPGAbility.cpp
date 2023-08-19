#include "FGameplayTagContainer.hpp"
#include "FRPGTimeTriggers.hpp"
#include "UGameplayPropertyMod.hpp"
#include "URPGAbility.hpp"
#include "URPGAbilityBase.hpp"
#include "URPGAbilityEventListener_Base.hpp"
#include "URPGCondition.hpp"
#include "URPGTriggerEffect_Base.hpp"
URPGAbility* URPGAbility::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbility");
    return (URPGAbility*)res;
}
