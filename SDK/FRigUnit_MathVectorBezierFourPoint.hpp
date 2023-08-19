#pragma once
#include <cstdint>
#include "FCRFourPointBezier.hpp"
#include "FRigUnit_MathVectorBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathVectorBezierFourPoint : public FRigUnit_MathVectorBase {
    FCRFourPointBezier Bezier; // 0x8
    float T; // 0x38
    FVector Result; // 0x3c
    FVector Tangent; // 0x48
    char pad_54[0x4];
}; // Size: 0x58
#pragma pack(pop)
