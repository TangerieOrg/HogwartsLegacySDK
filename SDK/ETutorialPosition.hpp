#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETutorialPosition : uint8_t {
    Tutorial_TopLeft = 0,
    Tutorial_TopCenter = 1,
    Tutorial_TopRight = 2,
    Tutorial_MiddleLeft = 3,
    Tutorial_MiddleCenter = 4,
    Tutorial_MiddleRight = 5,
    Tutorial_BottomLeft = 6,
    Tutorial_BottomCenter = 7,
    Tutorial_BottomRight = 8,
    Tutorial_CustomLocation = 9,
    Tutorial_MAX = 10,
};
#pragma pack(pop)
