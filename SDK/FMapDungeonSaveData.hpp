#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMapDungeonSaveData {
    FString DungeonName; // 0x0
    char pad_10[0x4010];
}; // Size: 0x4020
#pragma pack(pop)
