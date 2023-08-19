#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFoliageScaling : uint8_t {
    Uniform = 0,
    Free = 1,
    LockXY = 2,
    LockXZ = 3,
    LockYZ = 4,
    EFoliageScaling_MAX = 5,
};
#pragma pack(pop)
