#include "URPGTriggerEffect_ProtegoReflectAttack.hpp"
#include "URPGTriggerEffect_ProtegoReflectDamageOnCursed.hpp"
URPGTriggerEffect_ProtegoReflectDamageOnCursed* URPGTriggerEffect_ProtegoReflectDamageOnCursed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_ProtegoReflectDamageOnCursed");
    return (URPGTriggerEffect_ProtegoReflectDamageOnCursed*)res;
}
