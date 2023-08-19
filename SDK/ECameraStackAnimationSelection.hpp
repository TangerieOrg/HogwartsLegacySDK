#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECameraStackAnimationSelection : uint8_t {
    Random = 0,
    ClosestToCameraRotation = 1,
    LeftOrRight = 2,
    ECameraStackAnimationSelection_MAX = 3,
};
#pragma pack(pop)
