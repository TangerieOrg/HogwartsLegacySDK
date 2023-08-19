#pragma once
#include <cstdint>
#include "FRigUnit_MathVectorBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathVectorIsNearlyZero : public FRigUnit_MathVectorBase {
    FVector Value; // 0x8
    float Tolerance; // 0x14
    bool Result; // 0x18
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
