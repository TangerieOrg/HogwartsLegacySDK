#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTDecorator.hpp"
class UCreatureCombatAttackData;
#pragma pack(push, 1)
class UBTDecorator_CreatureAttackAvailable : public UBTDecorator {
public:
    UCreatureCombatAttackData* AttackData; // 0x68
    FBlackboardKeySelector TargetLocationKey; // 0x70
    static UBTDecorator_CreatureAttackAvailable* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
