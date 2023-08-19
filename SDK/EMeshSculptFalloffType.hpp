#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMeshSculptFalloffType : uint8_t {
    Smooth = 0,
    Linear = 1,
    Inverse = 2,
    Round = 3,
    BoxSmooth = 4,
    BoxLinear = 5,
    BoxInverse = 6,
    BoxRound = 7,
    LastValue = 8,
    EMeshSculptFalloffType_MAX = 9,
};
#pragma pack(pop)
