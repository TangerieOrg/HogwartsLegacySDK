#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRigElement {
    char pad_0[0x8];
    FName Name; // 0x8
    int32_t Index; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
