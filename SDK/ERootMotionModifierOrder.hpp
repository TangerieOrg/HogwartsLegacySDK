#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERootMotionModifierOrder : uint8_t {
    Primary = 0,
    Secondary = 1,
    RankAndFile = 2,
    Penultimate = 3,
    Ultimate = 4,
    ERootMotionModifierOrder_MAX = 5,
};
#pragma pack(pop)
