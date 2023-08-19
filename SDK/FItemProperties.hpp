#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FItemProperties {
    FName ItemId; // 0x0
    int32_t EconomyValue; // 0x8
    int32_t SellPrice; // 0xc
    bool Inventoryable; // 0x10
    bool Persistent; // 0x11
    bool Consumable; // 0x12
    bool bTriggerAbilityOnConsume; // 0x13
    bool Giftable; // 0x14
    bool Sellable; // 0x15
    bool Dropable; // 0x16
    char pad_17[0x1];
    int32_t MaxInventoryStack; // 0x18
    FName ItemUsageType; // 0x1c
    FName ItemUsageObjectID; // 0x24
    FName LockId; // 0x2c
    FName OnUseLockID; // 0x34
    FName RarityTier; // 0x3c
    FName PrerequisiteLockID; // 0x44
    FName PrerequisiteLockID2; // 0x4c
    FName ItemType; // 0x54
    bool UsableFromInventory; // 0x5c
    char pad_5d[0x3];
    int32_t ItemLevel; // 0x60
    FName StorageLocation; // 0x64
}; // Size: 0x6c
#pragma pack(pop)
