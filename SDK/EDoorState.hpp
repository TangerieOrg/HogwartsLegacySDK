#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDoorState : uint8_t {
    Locked = 0,
    Unlocked = 1,
    Open = 2,
    Sealed = 3,
    EDoorState_MAX = 4,
};
#pragma pack(pop)
