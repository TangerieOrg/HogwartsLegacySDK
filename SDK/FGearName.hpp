#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FGearName {
    char pad_0[0x8];
    FName Name; // 0x8
}; // Size: 0x10
#pragma pack(pop)
