#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMissionRewardData {
    FString ItemId; // 0x0
    FString ItemCategory; // 0x10
    int32_t Quantity; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
