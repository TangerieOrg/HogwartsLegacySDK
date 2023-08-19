#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "URPGAbility.hpp"
class UGameplayPropertyMod;
class URPGAbilityBase;
#pragma pack(push, 1)
class URPGAbility_CompanionBoost : public URPGAbility {
public:
    TArray<UGameplayPropertyMod*> ModsForCompanions; // 0x100
    TArray<URPGAbilityBase*> AbilitiesForCompanions; // 0x110
    FGameplayTagContainer AbilityTagsForCompanions; // 0x120
    char pad_140[0x60];
    static URPGAbility_CompanionBoost* StaticClass();
}; // Size: 0x1a0
#pragma pack(pop)
