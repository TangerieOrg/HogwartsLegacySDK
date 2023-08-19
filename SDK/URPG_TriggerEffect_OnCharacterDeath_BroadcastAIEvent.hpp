#pragma once
#include <cstdint>
#include "URPGTriggerEffect_BroadcastAIEvent.hpp"
#pragma pack(push, 1)
class URPG_TriggerEffect_OnCharacterDeath_BroadcastAIEvent : public URPGTriggerEffect_BroadcastAIEvent {
public:
    float MaximumDistance; // 0xb8
    bool bNeedToBeDeathInstigator; // 0xbc
    char pad_bd[0xb];
    static URPG_TriggerEffect_OnCharacterDeath_BroadcastAIEvent* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
