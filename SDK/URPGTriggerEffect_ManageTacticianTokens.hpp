#pragma once
#include <cstdint>
#include "URPGTriggerEffect_ProtegoReflectAttack.hpp"
class URPGAbilityBase;
#pragma pack(push, 1)
class URPGTriggerEffect_ManageTacticianTokens : public URPGTriggerEffect_ProtegoReflectAttack {
public:
    int32_t MaxTokens; // 0x50
    char pad_54[0x4];
    URPGAbilityBase* Ability; // 0x58
    float AbilityDuration; // 0x60
    bool AbilityOnPlayer; // 0x64
    char pad_65[0x2b];
    static URPGTriggerEffect_ManageTacticianTokens* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
