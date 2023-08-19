#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FStockSlot {
    FString ID; // 0x0
    int32_t Quantity; // 0x10
    char pad_14[0x4];
    FString Quality; // 0x18
}; // Size: 0x28
#pragma pack(pop)
