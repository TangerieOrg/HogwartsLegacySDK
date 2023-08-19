#pragma once
#include <cstdint>
#include "FCharacterStateData.hpp"
class UClass;
#pragma pack(push, 1)
struct FEnemyStateData : public FCharacterStateData {
    TArray<UClass*> FriendlyFireTypeList; // 0x280
    uint8_t bIgnoreDatabaseData : 1; // 0x290
    uint8_t bVulnerableInAir : 1; // 0x290
    uint8_t pad_bitfield_290_2 : 6;
    char pad_291[0x3];
    float InAirVulnerabilityHeightRequirement; // 0x294
    uint8_t bJuggernautInCombat : 1; // 0x298
    uint8_t bIsStealthAttackDisabled : 1; // 0x298
    uint8_t pad_bitfield_298_2 : 6;
    char pad_299[0x7];
}; // Size: 0x2a0
#pragma pack(pop)
