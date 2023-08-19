#include "AActor.hpp"
#include "URPGAbility.hpp"
#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_OnSpellCast.hpp"
URPGTriggerEffect_OnSpellCast* URPGTriggerEffect_OnSpellCast::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_OnSpellCast");
    return (URPGTriggerEffect_OnSpellCast*)res;
}
