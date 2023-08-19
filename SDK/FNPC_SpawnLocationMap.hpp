#pragma once
#include <cstdint>
#include "ENPC_Spawn.hpp"
#pragma pack(push, 1)
struct FNPC_SpawnLocationMap {
    FString Location; // 0x0
    ENPC_Spawn Type; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
