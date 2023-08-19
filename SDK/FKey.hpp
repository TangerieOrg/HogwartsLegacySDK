#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FKey {
    FName KeyName; // 0x0
    char pad_8[0x10];
}; // Size: 0x18
#pragma pack(pop)
