#pragma once
#include <cstdint>
#include "FCRFourPointBezier.hpp"
#include "FRigUnit_MathVectorBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathVectorMakeBezierFourPoint : public FRigUnit_MathVectorBase {
    FCRFourPointBezier Bezier; // 0x8
}; // Size: 0x38
#pragma pack(pop)
