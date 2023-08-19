#pragma once
#include <cstdint>
#include "FInventoryResult.hpp"
#pragma pack(push, 1)
struct FInventoryLoadout {
    TArray<FInventoryResult> InventoryItemArray; // 0x0
    int32_t ActiveItemIndex; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
