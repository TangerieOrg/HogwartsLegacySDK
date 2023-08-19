#pragma once
#include <cstdint>
#include "SocialSemanticIDs.hpp"
#include "URPGAbilityEventListener.hpp"
class AWandTool;
class ASpellTool;
#pragma pack(push, 1)
class URPGAbilityEventListener_OnSpellCast : public URPGAbilityEventListener {
public:
    bool bCheckSpellGroup; // 0x98
    SocialSemanticIDs SpellGroup; // 0x99
    char pad_9a[0x2];
    FName SpellName; // 0x9c
    bool bListenToPlayer; // 0xa4
    char pad_a5[0x3];
    AWandTool* Wand; // 0xa8
    static URPGAbilityEventListener_OnSpellCast* StaticClass();
    void OnSpellCast(ASpellTool* SpellTool);
}; // Size: 0xb0
#pragma pack(pop)
