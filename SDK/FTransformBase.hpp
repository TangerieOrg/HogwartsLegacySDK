#pragma once
#include <cstdint>
#include "FTransformBaseConstraint.hpp"
#pragma pack(push, 1)
struct FTransformBase {
    FName Node; // 0x0
    FTransformBaseConstraint Constraints[2]; // 0x8
}; // Size: 0x28
#pragma pack(pop)
