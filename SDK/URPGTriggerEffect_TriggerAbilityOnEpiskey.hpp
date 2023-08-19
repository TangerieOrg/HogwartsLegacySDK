#pragma once
#include <cstdint>
#include "URPGTriggerEffect_OnEpiskey.hpp"
class URPGAbilityBase;
#pragma pack(push, 1)
class URPGTriggerEffect_TriggerAbilityOnEpiskey : public URPGTriggerEffect_OnEpiskey {
public:
    float AbilityBaseTime; // 0x58
    float AbilityTimePerHealth; // 0x5c
    float AbilityTimeMax; // 0x60
    bool AbilityOnPlayer; // 0x64
    char pad_65[0x3];
    URPGAbilityBase* Ability; // 0x68
    static URPGTriggerEffect_TriggerAbilityOnEpiskey* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
