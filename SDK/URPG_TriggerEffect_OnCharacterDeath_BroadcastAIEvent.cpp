#include "URPGTriggerEffect_BroadcastAIEvent.hpp"
#include "URPG_TriggerEffect_OnCharacterDeath_BroadcastAIEvent.hpp"
URPG_TriggerEffect_OnCharacterDeath_BroadcastAIEvent* URPG_TriggerEffect_OnCharacterDeath_BroadcastAIEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPG_TriggerEffect_OnCharacterDeath_BroadcastAIEvent");
    return (URPG_TriggerEffect_OnCharacterDeath_BroadcastAIEvent*)res;
}
