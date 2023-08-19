#pragma once
#include <cstdint>
#include "SocialSemanticIDs.hpp"
#include "URPGTriggerEffect_BroadcastAIEvent.hpp"
class AWandTool;
#pragma pack(push, 1)
class URPGTriggerEffect_OnSuccessfulSpell_BroadcastAIEvent : public URPGTriggerEffect_BroadcastAIEvent {
public:
    AWandTool* WandTool; // 0xb8
    bool bCheckSpellGroup; // 0xc0
    SocialSemanticIDs RequiredSpellGroup; // 0xc1
    bool bRequiresCharacterTarget; // 0xc2
    char pad_c3[0xd];
    static URPGTriggerEffect_OnSuccessfulSpell_BroadcastAIEvent* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
