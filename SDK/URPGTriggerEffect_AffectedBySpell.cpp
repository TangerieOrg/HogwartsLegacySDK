#include "AActor.hpp"
#include "URPGTriggerEffect_AffectedBySpell.hpp"
#include "URPGTriggerEffect_Base.hpp"
URPGTriggerEffect_AffectedBySpell* URPGTriggerEffect_AffectedBySpell::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_AffectedBySpell");
    return (URPGTriggerEffect_AffectedBySpell*)res;
}
