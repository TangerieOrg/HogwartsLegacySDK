#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FJsonObjectWrapper {
    FString JsonString; // 0x0
    char pad_10[0x10];
}; // Size: 0x20
#pragma pack(pop)
