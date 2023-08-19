#pragma once
#include <cstdint>
#include "FInventoryResult.hpp"
#pragma pack(push, 1)
struct FCachedInventory {
    TArray<FInventoryResult> CachedInventory; // 0x0
}; // Size: 0x10
#pragma pack(pop)
