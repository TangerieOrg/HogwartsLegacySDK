#pragma once
#include <cstdint>
#include "UablMotionAdjustTask.hpp"
class UCreatureCombatAttackData;
#pragma pack(push, 1)
class UablCreatureAttackMotionAdjustTask : public UablMotionAdjustTask {
public:
    UCreatureCombatAttackData* AttackData; // 0xd0
    static UablCreatureAttackMotionAdjustTask* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
