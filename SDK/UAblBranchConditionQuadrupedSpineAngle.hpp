#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionQuadrupedSpineAngle : public UAblBranchCondition {
public:
    FVector2D AngleRange; // 0x30
    static UAblBranchConditionQuadrupedSpineAngle* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
