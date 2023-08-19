#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMirrorToolAction {
    NoAction = 0,
    ShiftToCenter = 1,
    Left = 2,
    Right = 3,
    Up = 4,
    Down = 5,
    Forward = 6,
    Backward = 7,
    EMirrorToolAction_MAX = 8,
};
#pragma pack(pop)
