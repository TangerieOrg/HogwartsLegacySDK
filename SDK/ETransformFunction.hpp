#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETransformFunction : uint8_t {
    NoTransformFunction = 0,
    TransformLinear = 1,
    TransformSine = 2,
    ETransformFunction_MAX = 3,
};
#pragma pack(pop)
