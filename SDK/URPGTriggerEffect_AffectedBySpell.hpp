#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
class AActor;
#pragma pack(push, 1)
class URPGTriggerEffect_AffectedBySpell : public URPGTriggerEffect_Base {
public:
    FName SpellGroup; // 0x40
    FName SpellName; // 0x48
    bool TargetIsPlayer; // 0x50
    bool TargetIsTeammate; // 0x51
    bool TargetIsEnemy; // 0x52
    bool TargetIsNeutral; // 0x53
    bool InstigatorIsPlayer; // 0x54
    bool InstigatorIsCompanion; // 0x55
    bool RequiresCursed; // 0x56
    bool RequiresAirborne; // 0x57
    bool RequiresUnaware; // 0x58
    bool RequiresRadiantAura; // 0x59
    char pad_5a[0x2];
    float FocusAmount; // 0x5c
    URPGTriggerEffect_Base* TriggerEffect; // 0x60
    bool TriggerEffectOnPlayer; // 0x68
    bool TriggerEffectOnInstigator; // 0x69
    char pad_6a[0x6];
    AActor* Owner; // 0x70
    char pad_78[0x10];
    static URPGTriggerEffect_AffectedBySpell* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
