#include "URPGTriggerEffect_ActorDamaged.hpp"
#include "URPGTriggerEffect_ReflectDamageOnCursed.hpp"
URPGTriggerEffect_ReflectDamageOnCursed* URPGTriggerEffect_ReflectDamageOnCursed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_ReflectDamageOnCursed");
    return (URPGTriggerEffect_ReflectDamageOnCursed*)res;
}
