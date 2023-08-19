#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLootSlot {
    FString ID; // 0x0
    int32_t Quantity; // 0x10
    char pad_14[0x4];
    FString Quality; // 0x18
    bool ItemIsUnique; // 0x28
    char pad_29[0x3];
    int32_t Slot; // 0x2c
    bool Stolen; // 0x30
    char pad_31[0x7];
}; // Size: 0x38
#pragma pack(pop)
