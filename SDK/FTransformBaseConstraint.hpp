#pragma once
#include <cstdint>
#include "FRigTransformConstraint.hpp"
#pragma pack(push, 1)
struct FTransformBaseConstraint {
    TArray<FRigTransformConstraint> TransformConstraints; // 0x0
}; // Size: 0x10
#pragma pack(pop)
