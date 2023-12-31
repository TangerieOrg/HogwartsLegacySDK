#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERigControlType : uint8_t {
    Bool = 0,
    Float = 1,
    Integer = 2,
    Vector2D = 3,
    Position = 4,
    Scale = 5,
    Rotator = 6,
    Transform = 7,
    TransformNoScale = 8,
    EulerTransform = 9,
    ERigControlType_MAX = 10,
};
#pragma pack(pop)
