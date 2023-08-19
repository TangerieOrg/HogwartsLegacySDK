#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERigUnitDebugTransformMode : uint8_t {
    Point = 0,
    Axes = 1,
    Box = 2,
    Max = 3,
};
#pragma pack(pop)
