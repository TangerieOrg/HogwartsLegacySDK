#pragma once
#include <cstdint>
#include "EMovementMode.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchMovementMode : public UAblBranchCondition {
public:
    TArray<EMovementMode> MovementModes; // 0x30
    static UAblBranchMovementMode* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
