#pragma once
#include <cstdint>
#include "EGearSlotIDEnum.hpp"
#include "FGearItemID.hpp"
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FGearItem {
    FGearItemID GearItemID; // 0x0
    EGearSlotIDEnum SlotID; // 0x14
    char pad_15[0x3];
    int32_t GearLevel; // 0x18
    int32_t OffenseStat; // 0x1c
    int32_t DefenseStat; // 0x20
    int32_t CooldownStat; // 0x24
    bool bHoodUp; // 0x28
    char pad_29[0x7];
    TArray<FName> GeneralAbilityNames; // 0x30
    TArray<FGuid> AbilityInstanceIDs; // 0x40
    int32_t IsIdentified; // 0x50
    int32_t StatUpgrades; // 0x54
}; // Size: 0x58
#pragma pack(pop)
