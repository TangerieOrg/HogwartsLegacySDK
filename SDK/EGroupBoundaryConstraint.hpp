#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGroupBoundaryConstraint : uint8_t {
    Fixed = 7,
    Refine = 5,
    Free = 1,
    Ignore = 0,
    EGroupBoundaryConstraint_MAX = 8,
};
#pragma pack(pop)
