#pragma once
#include <cstdint>
#include "EEnemy_AttackThreatState.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTService.hpp"
#pragma pack(push, 1)
class UBTService_Creature_AttackThreat : public UBTService {
public:
    EEnemy_AttackThreatState AttackThreatState; // 0x70
    char pad_71[0x7];
    FBlackboardKeySelector TargetActorKey; // 0x78
    static UBTService_Creature_AttackThreat* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
