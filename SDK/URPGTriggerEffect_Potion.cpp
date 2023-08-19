#include "URPGAbility.hpp"
#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_Potion.hpp"
URPGTriggerEffect_Potion* URPGTriggerEffect_Potion::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_Potion");
    return (URPGTriggerEffect_Potion*)res;
}
