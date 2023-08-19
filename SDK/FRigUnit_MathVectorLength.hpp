#pragma once
#include <cstdint>
#include "FRigUnit_MathVectorBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathVectorLength : public FRigUnit_MathVectorBase {
    FVector Value; // 0x8
    float Result; // 0x14
}; // Size: 0x18
#pragma pack(pop)
