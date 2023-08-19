#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCachedAnimStateData {
    FName StateMachineName; // 0x0
    FName StateName; // 0x8
    char pad_10[0xc];
}; // Size: 0x1c
#pragma pack(pop)
