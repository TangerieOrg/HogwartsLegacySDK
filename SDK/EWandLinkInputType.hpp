#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWandLinkInputType : uint8_t {
    LeftShoulderButton = 0,
    RightShoulderButton = 1,
    LeftTriggerButton = 2,
    RightTriggerButton = 3,
    LeftAndRightShoulderButton = 4,
    LeftAndRightTriggerButton = 5,
    RandomWingButton = 6,
    LeftFaceButton = 7,
    TopFaceButton = 8,
    RightFaceButton = 9,
    BottomFaceButton = 10,
    RandomFaceButton = 11,
    EWandLinkInputType_MAX = 12,
};
#pragma pack(pop)
