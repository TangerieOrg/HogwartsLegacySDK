#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETransformConstraintType : uint8_t {
    Translation = 0,
    Rotation = 1,
    Scale = 2,
    Parent = 3,
    ETransformConstraintType_MAX = 4,
};
#pragma pack(pop)
