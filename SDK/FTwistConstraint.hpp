#pragma once
#include <cstdint>
#include "EAngularConstraintMotion.hpp"
#include "FConstraintBaseParams.hpp"
#pragma pack(push, 1)
struct FTwistConstraint : public FConstraintBaseParams {
    float TwistLimitDegrees; // 0x14
    EAngularConstraintMotion TwistMotion; // 0x18
    char pad_19[0x3];
}; // Size: 0x1c
#pragma pack(pop)
