#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EObjectFadeSpeed : uint8_t {
    VeryFast = 0,
    Fast = 1,
    Default = 2,
    Slow = 3,
    VerySlow = 4,
    EObjectFadeSpeed_MAX = 5,
};
#pragma pack(pop)
