#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCachedAnimTransitionData {
    FName StateMachineName; // 0x0
    FName FromStateName; // 0x8
    FName ToStateName; // 0x10
    char pad_18[0xc];
}; // Size: 0x24
#pragma pack(pop)
