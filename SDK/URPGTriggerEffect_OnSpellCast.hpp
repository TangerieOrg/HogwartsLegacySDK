#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
class AActor;
class URPGAbility;
#pragma pack(push, 1)
class URPGTriggerEffect_OnSpellCast : public URPGTriggerEffect_Base {
public:
    TArray<FName> SpellNames; // 0x40
    bool bOnlyDiamondSpells; // 0x50
    char pad_51[0x7];
    TArray<URPGTriggerEffect_Base*> TriggerEffects; // 0x58
    AActor* Owner; // 0x68
    URPGAbility* OwnerAbility; // 0x70
    char pad_78[0x8];
    static URPGTriggerEffect_OnSpellCast* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
