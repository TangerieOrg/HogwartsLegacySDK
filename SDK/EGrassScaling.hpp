#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGrassScaling : uint8_t {
    Uniform = 0,
    Free = 1,
    LockXY = 2,
    EGrassScaling_MAX = 3,
};
#pragma pack(pop)
