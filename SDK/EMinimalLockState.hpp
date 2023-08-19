#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMinimalLockState : uint8_t {
    Unlocked = 0,
    Locked = 1,
    EMinimalLockState_MAX = 2,
};
#pragma pack(pop)
