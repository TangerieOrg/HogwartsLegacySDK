#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraMaterialDriverParameterType : uint8_t {
    Scalar = 0,
    Vector2 = 1,
    Vector = 2,
    Vector4 = 3,
    LinearColor = 4,
    Quaternion = 5,
    QuaternionForward = 6,
    QuaternionUp = 7,
    QuaternionRight = 8,
    UniformScale = 9,
    RelativePosition = 10,
    DirectionTo = 11,
    ENiagaraMaterialDriverParameterType_MAX = 12,
};
#pragma pack(pop)
