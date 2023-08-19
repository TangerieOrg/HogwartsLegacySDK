#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLootPick {
    FString ContainerID; // 0x0
    int32_t ContainerWeightMin; // 0x10
    int32_t ContainerWeightMax; // 0x14
    int32_t ContainerWeightBase; // 0x18
    int32_t ItemRollCount; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
