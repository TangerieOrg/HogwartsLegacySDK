#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSQLiteIndex {
    FString ResultStr; // 0x0
    FString IndexName; // 0x10
}; // Size: 0x20
#pragma pack(pop)
