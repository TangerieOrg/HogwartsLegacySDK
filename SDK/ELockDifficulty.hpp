#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELockDifficulty : uint8_t {
    Level_1 = 0,
    Level_2 = 1,
    Level_3 = 2,
    NeedsKey = 3,
    ELockDifficulty_MAX = 4,
};
#pragma pack(pop)
