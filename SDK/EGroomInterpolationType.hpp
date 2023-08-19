#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGroomInterpolationType : uint8_t {
    None = 0,
    RigidTransform = 2,
    OffsetTransform = 4,
    SmoothTransform = 8,
    EGroomInterpolationType_MAX = 9,
};
#pragma pack(pop)
