#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERootMotionAccumulateMode : uint8_t {
    Override = 0,
    Additive = 1,
    ERootMotionAccumulateMode_MAX = 2,
};
#pragma pack(pop)
