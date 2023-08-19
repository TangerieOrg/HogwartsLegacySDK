#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDoorLockLevel : uint8_t {
    Unlocked = 0,
    Level_1 = 1,
    Level_2 = 2,
    Level_3 = 3,
    NeedsKeyToUnlock = 4,
    ChildLock = 5,
    EDoorLockLevel_MAX = 6,
};
#pragma pack(pop)
