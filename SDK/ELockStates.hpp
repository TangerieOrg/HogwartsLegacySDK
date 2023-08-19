#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELockStates : uint8_t {
    Unlocked = 0,
    Locked = 1,
    LastLockState = 2,
    ELockStates_MAX = 3,
};
#pragma pack(pop)
