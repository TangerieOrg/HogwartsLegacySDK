#pragma once
#include <cstdint>
#include "URPGAbilityEventListener_OnCharacterDied.hpp"
#pragma pack(push, 1)
class URPGAbilityEventListener_OnCharacterDiedFromSpell : public URPGAbilityEventListener_OnCharacterDied {
public:
    FName SpellGroup; // 0xa8
    FName SpellName; // 0xb0
    bool TargetIsPlayer; // 0xb8
    bool TargetIsTeammate; // 0xb9
    bool TargetIsEnemy; // 0xba
    bool TargetIsNeutral; // 0xbb
    char pad_bc[0x4];
    static URPGAbilityEventListener_OnCharacterDiedFromSpell* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
