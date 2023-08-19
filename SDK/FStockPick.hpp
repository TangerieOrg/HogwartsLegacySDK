#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FStockPick {
    FString ContainerID; // 0x0
    int32_t LowWeight; // 0x10
    int32_t HighWeight; // 0x14
    int32_t BaseWeight; // 0x18
    int32_t MinItems; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
