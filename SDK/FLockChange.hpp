#pragma once
#include <cstdint>
#include "ELockStates.hpp"
#pragma pack(push, 1)
struct FLockChange {
    FName LockId; // 0x0
    ELockStates newLockState; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
