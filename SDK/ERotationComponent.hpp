#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERotationComponent : uint8_t {
    EulerX = 0,
    EulerY = 1,
    EulerZ = 2,
    QuaternionAngle = 3,
    SwingAngle = 4,
    TwistAngle = 5,
    ERotationComponent_MAX = 6,
};
#pragma pack(pop)
