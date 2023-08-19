#pragma once
#include <cstdint>
#include "SocialActionTypes.hpp"
#include "SocialSemanticIDs.hpp"
#include "URPGTriggerEffect_Base.hpp"
class AActor;
#pragma pack(push, 1)
class URPGTriggerEffect_OnHitBySpell : public URPGTriggerEffect_Base {
public:
    bool bCheckSpellGroup; // 0x40
    SocialSemanticIDs SpellGroup; // 0x41
    bool bCheckSpellName; // 0x42
    SocialActionTypes SpellName; // 0x43
    char pad_44[0x4];
    AActor* Owner; // 0x48
    char pad_50[0x8];
    static URPGTriggerEffect_OnHitBySpell* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
