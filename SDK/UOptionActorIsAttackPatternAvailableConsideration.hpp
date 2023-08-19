#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
class UCreatureCombatAttackData;
#pragma pack(push, 1)
class UOptionActorIsAttackPatternAvailableConsideration : public UQualifierConsideration {
public:
    UCreatureCombatAttackData* AttackData; // 0x28
    static UOptionActorIsAttackPatternAvailableConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
