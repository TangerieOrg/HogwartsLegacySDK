#pragma once
#include <cstdint>
#include "ELockStates.hpp"
#pragma pack(push, 1)
struct FLockManagerLock {
    FName LockId; // 0x0
    ELockStates LockState; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
