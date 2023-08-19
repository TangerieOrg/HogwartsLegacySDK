#pragma once
#include <cstdint>
#include "EInventoryChangeReason.hpp"
class AActor;
#pragma pack(push, 1)
struct FInventoryResult {
    FName CharacterID; // 0x0
    FName ItemName; // 0x8
    FName ItemType; // 0x10
    FName Variation; // 0x18
    FName HolderID; // 0x20
    int32_t Count; // 0x28
    bool Stolen; // 0x2c
    char pad_2d[0x3];
    int32_t EconomyValue; // 0x30
    int32_t SellPrice; // 0x34
    int32_t SlotNumber; // 0x38
    int32_t MaxInventoryStack; // 0x3c
    bool Droppable; // 0x40
    bool UniqueItem; // 0x41
    bool KeepOnReset; // 0x42
    EInventoryChangeReason Reason; // 0x43
    int32_t Delta; // 0x44
    FName OtherCharacterID; // 0x48
    AActor* OtherActor; // 0x50
    bool Consumable; // 0x58
    bool UsableFromInventory; // 0x59
    bool Sellable; // 0x5a
    char pad_5b[0x5];
    int64_t UpdateTime; // 0x60
    FName UIDisplayMethod; // 0x68
    char pad_70[0x18];
}; // Size: 0x88
#pragma pack(pop)
