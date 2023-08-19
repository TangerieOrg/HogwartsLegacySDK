#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDifficulty : uint8_t {
    Story = 0,
    Easy = 1,
    Medium = 2,
    Hard = 3,
    EDifficulty_MAX = 4,
};
#pragma pack(pop)
