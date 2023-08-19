#pragma once
#include <cstdint>
#include "FLootSlot.hpp"
#pragma pack(push, 1)
struct FLootContainer {
    FString UniqueContainerID; // 0x0
    TArray<FLootSlot> Slots; // 0x10
}; // Size: 0x20
#pragma pack(pop)
