#include "AActor.hpp"
#include "SocialActionTypes.hpp"
#include "SocialSemanticIDs.hpp"
#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_OnHitBySpell.hpp"
URPGTriggerEffect_OnHitBySpell* URPGTriggerEffect_OnHitBySpell::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_OnHitBySpell");
    return (URPGTriggerEffect_OnHitBySpell*)res;
}
