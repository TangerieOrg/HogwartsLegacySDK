#pragma once
#include <cstdint>
#include "UablTurnAdjustTask.hpp"
class UCreatureCombatAttackData;
#pragma pack(push, 1)
class UablCreatureAttackTurnAdjustTask : public UablTurnAdjustTask {
public:
    UCreatureCombatAttackData* AttackData; // 0xc0
    static UablCreatureAttackTurnAdjustTask* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
