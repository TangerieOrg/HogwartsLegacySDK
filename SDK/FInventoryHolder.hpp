#pragma once
#include <cstdint>
#include "FInventoryResult.hpp"
#pragma pack(push, 1)
struct FInventoryHolder {
    FName HolderID; // 0x0
    TArray<FInventoryResult> InventoryResults; // 0x8
}; // Size: 0x18
#pragma pack(pop)
