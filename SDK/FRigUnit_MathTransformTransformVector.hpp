#pragma once
#include <cstdint>
#include "FRigUnit_MathTransformBase.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathTransformTransformVector : public FRigUnit_MathTransformBase {
    char pad_8[0x8];
    FTransform Transform; // 0x10
    FVector Location; // 0x40
    FVector Result; // 0x4c
    char pad_58[0x8];
}; // Size: 0x60
#pragma pack(pop)
