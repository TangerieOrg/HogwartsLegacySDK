#pragma once
#include <cstdint>
#include "EAngularConstraintMotion.hpp"
#include "FConstraintBaseParams.hpp"
#pragma pack(push, 1)
struct FConeConstraint : public FConstraintBaseParams {
    float Swing1LimitDegrees; // 0x14
    float Swing2LimitDegrees; // 0x18
    EAngularConstraintMotion Swing1Motion; // 0x1c
    EAngularConstraintMotion Swing2Motion; // 0x1d
    char pad_1e[0x2];
}; // Size: 0x20
#pragma pack(pop)
