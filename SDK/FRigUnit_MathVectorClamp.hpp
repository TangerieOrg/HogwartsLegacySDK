#pragma once
#include <cstdint>
#include "FRigUnit_MathVectorBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathVectorClamp : public FRigUnit_MathVectorBase {
    FVector Value; // 0x8
    FVector Minimum; // 0x14
    FVector Maximum; // 0x20
    FVector Result; // 0x2c
}; // Size: 0x38
#pragma pack(pop)
