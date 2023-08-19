#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UNPCAbl_BranchCondition_MoveTurn : public UAblBranchCondition {
public:
    float MinThresholdAngleDeg; // 0x30
    char pad_34[0x4];
    static UNPCAbl_BranchCondition_MoveTurn* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
