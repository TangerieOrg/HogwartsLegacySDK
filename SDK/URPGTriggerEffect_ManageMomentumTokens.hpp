#pragma once
#include <cstdint>
#include "URPGTriggerEffect_AffectedBySpell.hpp"
class URPGAbilityBase;
#pragma pack(push, 1)
class URPGTriggerEffect_ManageMomentumTokens : public URPGTriggerEffect_AffectedBySpell {
public:
    URPGAbilityBase* Ability; // 0x88
    float AbilityDuration; // 0x90
    bool AbilityOnPlayer; // 0x94
    char pad_95[0x1b];
    static URPGTriggerEffect_ManageMomentumTokens* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
