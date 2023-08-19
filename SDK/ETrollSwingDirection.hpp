#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETrollSwingDirection : uint8_t {
    Forehand = 0,
    Backhand = 1,
    None = 2,
    ETrollSwingDirection_MAX = 3,
};
#pragma pack(pop)
