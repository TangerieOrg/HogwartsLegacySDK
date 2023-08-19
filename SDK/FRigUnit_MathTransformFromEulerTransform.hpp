#pragma once
#include <cstdint>
#include "FEulerTransform.hpp"
#include "FRigUnit_MathTransformBase.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathTransformFromEulerTransform : public FRigUnit_MathTransformBase {
    FEulerTransform EulerTransform; // 0x8
    char pad_2c[0x4];
    FTransform Result; // 0x30
}; // Size: 0x60
#pragma pack(pop)
