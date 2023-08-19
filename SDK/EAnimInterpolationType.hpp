#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAnimInterpolationType : uint8_t {
    Linear = 0,
    Step = 1,
    EAnimInterpolationType_MAX = 2,
};
#pragma pack(pop)
