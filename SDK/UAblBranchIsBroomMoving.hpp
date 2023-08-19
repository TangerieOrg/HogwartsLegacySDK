#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchIsBroomMoving : public UAblBranchCondition {
public:
    bool bCheckHorizontal; // 0x30
    bool bCheckVertical; // 0x31
    char pad_32[0x6];
    static UAblBranchIsBroomMoving* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
