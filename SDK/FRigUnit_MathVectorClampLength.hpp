#pragma once
#include <cstdint>
#include "FRigUnit_MathVectorBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathVectorClampLength : public FRigUnit_MathVectorBase {
    FVector Value; // 0x8
    float MinimumLength; // 0x14
    float MaximumLength; // 0x18
    FVector Result; // 0x1c
}; // Size: 0x28
#pragma pack(pop)
