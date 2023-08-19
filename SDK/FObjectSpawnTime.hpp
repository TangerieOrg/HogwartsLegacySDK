#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FObjectSpawnTime {
    int32_t Spawn24Hour; // 0x0
    int32_t SpawnMinute; // 0x4
    int32_t SpawnSecond; // 0x8
}; // Size: 0xc
#pragma pack(pop)
