#pragma once
#include <cstdint>
#include "FRigUnit_MathTransformBase.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathTransformLerp : public FRigUnit_MathTransformBase {
    char pad_8[0x8];
    FTransform A; // 0x10
    FTransform B; // 0x40
    float T; // 0x70
    char pad_74[0xc];
    FTransform Result; // 0x80
}; // Size: 0xb0
#pragma pack(pop)
