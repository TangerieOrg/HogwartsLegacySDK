#pragma once
#include <cstdint>
#include "URPGTriggerEffect_ActorDamaged.hpp"
class URPGAbilityBase;
class URPGTriggerEffect_Base;
#pragma pack(push, 1)
class URPGTriggerEffect_RecoverFromDamage : public URPGTriggerEffect_ActorDamaged {
public:
    bool RequiresCursed; // 0x58
    bool RequiresDeadlySpell; // 0x59
    bool RequiresAirborne; // 0x5a
    bool RequiresUnaware; // 0x5b
    bool RequiresNotInCombatMode; // 0x5c
    bool RequiresRadiantAura; // 0x5d
    bool PlayerInstigator; // 0x5e
    bool OnPlayer; // 0x5f
    bool OnTeammate; // 0x60
    bool OnNeutral; // 0x61
    char pad_62[0x2];
    FName DamageFromSpellGroup; // 0x64
    FName DamageFromSpellName; // 0x6c
    bool DamageFromFinisher; // 0x74
    bool AdjustmentPerPointOfDamage; // 0x75
    char pad_76[0x2];
    float CooldownSecondsPerPointOfDamage; // 0x78
    FName RecoverCooldownSpellGroup; // 0x7c
    FName RecoverCooldownSpellName; // 0x84
    float FocusAmount; // 0x8c
    float HealthAmount; // 0x90
    float HealthPercentage; // 0x94
    bool UseHealthRecoveryEffects; // 0x98
    char pad_99[0x7];
    URPGAbilityBase* Ability; // 0xa0
    float AbilityDuration; // 0xa8
    bool AbilityOnPlayer; // 0xac
    bool AbilityOnInstigator; // 0xad
    char pad_ae[0x2];
    URPGTriggerEffect_Base* TriggerEffect; // 0xb0
    char pad_b8[0x10];
    static URPGTriggerEffect_RecoverFromDamage* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
