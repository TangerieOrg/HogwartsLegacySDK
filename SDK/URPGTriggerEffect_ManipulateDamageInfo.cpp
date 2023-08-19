#include "FGameplayTagContainer.hpp"
#include "UModFilter_DealDamage_Base.hpp"
#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_ManipulateDamageInfo.hpp"
URPGTriggerEffect_ManipulateDamageInfo* URPGTriggerEffect_ManipulateDamageInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_ManipulateDamageInfo");
    return (URPGTriggerEffect_ManipulateDamageInfo*)res;
}
