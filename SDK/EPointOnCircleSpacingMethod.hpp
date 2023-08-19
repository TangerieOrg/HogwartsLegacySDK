#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPointOnCircleSpacingMethod : uint8_t {
    BySpaceBetween = 0,
    ByNumberOfPoints = 1,
    EPointOnCircleSpacingMethod_MAX = 2,
};
#pragma pack(pop)
