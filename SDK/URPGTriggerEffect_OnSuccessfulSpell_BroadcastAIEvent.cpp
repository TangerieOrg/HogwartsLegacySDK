#include "AWandTool.hpp"
#include "SocialSemanticIDs.hpp"
#include "URPGTriggerEffect_BroadcastAIEvent.hpp"
#include "URPGTriggerEffect_OnSuccessfulSpell_BroadcastAIEvent.hpp"
URPGTriggerEffect_OnSuccessfulSpell_BroadcastAIEvent* URPGTriggerEffect_OnSuccessfulSpell_BroadcastAIEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_OnSuccessfulSpell_BroadcastAIEvent");
    return (URPGTriggerEffect_OnSuccessfulSpell_BroadcastAIEvent*)res;
}
