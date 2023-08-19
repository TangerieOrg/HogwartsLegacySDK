#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCollectionCategory {
    FName CategoryID; // 0x0
    char pad_8[0x50];
}; // Size: 0x58
#pragma pack(pop)
