#pragma once
#include <cstdint>
#include "EEnemyMoveEndType.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionEnemyMoveEnd : public UAblBranchCondition {
public:
    EEnemyMoveEndType MoveType; // 0x30
    char pad_31[0x3];
    float SlideLinkEndXYTolerance; // 0x34
    float SlideLinkEndZTolerance; // 0x38
    bool bSlideCheckSurfaceType; // 0x3c
    char pad_3d[0x3];
    static UAblBranchConditionEnemyMoveEnd* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
