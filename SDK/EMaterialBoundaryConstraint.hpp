#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMaterialBoundaryConstraint : uint8_t {
    Fixed = 7,
    Refine = 5,
    Free = 1,
    Ignore = 0,
    EMaterialBoundaryConstraint_MAX = 8,
};
#pragma pack(pop)
