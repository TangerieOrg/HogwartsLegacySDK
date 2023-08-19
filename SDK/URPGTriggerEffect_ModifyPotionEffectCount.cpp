#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_ModifyPotionEffectCount.hpp"
URPGTriggerEffect_ModifyPotionEffectCount* URPGTriggerEffect_ModifyPotionEffectCount::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_ModifyPotionEffectCount");
    return (URPGTriggerEffect_ModifyPotionEffectCount*)res;
}
