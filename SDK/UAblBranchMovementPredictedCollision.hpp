#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchMovementPredictedCollision : public UAblBranchCondition {
public:
    float MaxGlancingAngle; // 0x30
    float MaxTimeFromNow; // 0x34
    static UAblBranchMovementPredictedCollision* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
