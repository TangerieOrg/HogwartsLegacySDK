#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMeshBoundaryConstraint : uint8_t {
    Fixed = 7,
    Refine = 5,
    Free = 1,
    EMeshBoundaryConstraint_MAX = 8,
};
#pragma pack(pop)
