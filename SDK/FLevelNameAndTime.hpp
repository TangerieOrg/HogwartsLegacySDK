#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLevelNameAndTime {
    FString LevelName; // 0x0
    uint32_t LevelChangeTimeInMS; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
