#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
class URPGAbilityBase;
#pragma pack(push, 1)
class URPGTriggerEffect_OnCombatBegin : public URPGTriggerEffect_Base {
public:
    URPGAbilityBase* Ability; // 0x40
    float AbilityDuration; // 0x48
    char pad_4c[0x1c];
    static URPGTriggerEffect_OnCombatBegin* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
