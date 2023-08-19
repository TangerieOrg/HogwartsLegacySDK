#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSQLiteKeyValuePair {
    FString Key; // 0x0
    FString Value; // 0x10
}; // Size: 0x20
#pragma pack(pop)
