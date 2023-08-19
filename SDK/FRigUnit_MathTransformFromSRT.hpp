#pragma once
#include <cstdint>
#include "EControlRigRotationOrder.hpp"
#include "FEulerTransform.hpp"
#include "FRigUnit_MathTransformBase.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathTransformFromSRT : public FRigUnit_MathTransformBase {
    FVector Location; // 0x8
    FVector Rotation; // 0x14
    EControlRigRotationOrder RotationOrder; // 0x20
    char pad_21[0x3];
    FVector Scale; // 0x24
    FTransform Transform; // 0x30
    FEulerTransform EulerTransform; // 0x60
    char pad_84[0xc];
}; // Size: 0x90
#pragma pack(pop)
