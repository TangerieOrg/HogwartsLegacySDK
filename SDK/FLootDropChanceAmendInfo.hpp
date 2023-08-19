#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLootDropChanceAmendInfo {
    FName ItemId; // 0x0
    FName ItemType; // 0x8
    float PercentChance; // 0x10
}; // Size: 0x14
#pragma pack(pop)
