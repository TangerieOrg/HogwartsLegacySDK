#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EInterpMoveAxis : uint8_t {
    AXIS_TranslationX = 0,
    AXIS_TranslationY = 1,
    AXIS_TranslationZ = 2,
    AXIS_RotationX = 3,
    AXIS_RotationY = 4,
    AXIS_RotationZ = 5,
    AXIS_MAX = 6,
};
#pragma pack(pop)
