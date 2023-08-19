#pragma once
#include <cstdint>
#include "FRigUnit_MathVectorBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathVectorFromFloat : public FRigUnit_MathVectorBase {
    float Value; // 0x8
    FVector Result; // 0xc
}; // Size: 0x18
#pragma pack(pop)
