#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionEnemyPhysics : public UAblBranchCondition {
public:
    bool bOnPhysicsMovementStop; // 0x30
    char pad_31[0x7];
    static UAblBranchConditionEnemyPhysics* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
