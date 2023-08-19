#pragma once
#include <cstdint>
#include "FRigUnit_MathVectorBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathVectorSetLength : public FRigUnit_MathVectorBase {
    FVector Value; // 0x8
    float Length; // 0x14
    FVector Result; // 0x18
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
