#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_FetchActorFromCreature : public UBTTaskNode {
public:
    FBlackboardKeySelector TargetCreatureKey; // 0x70
    FBlackboardKeySelector FetchActorKey; // 0x98
    FBlackboardKeySelector OutputKey; // 0xc0
    static UBTTask_Creature_FetchActorFromCreature* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
