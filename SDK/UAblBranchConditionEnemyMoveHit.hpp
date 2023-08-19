#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionEnemyMoveHit : public UAblBranchCondition {
public:
    bool bOnlyTriggerOnGroundMatch; // 0x30
    bool bOnGroundRequirement; // 0x31
    bool bOnAirRequirement; // 0x32
    bool bIgnoreHitAfterDeath; // 0x33
    char pad_34[0x4];
    static UAblBranchConditionEnemyMoveHit* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
