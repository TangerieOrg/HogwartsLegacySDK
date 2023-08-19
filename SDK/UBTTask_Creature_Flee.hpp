#pragma once
#include <cstdint>
#include "ECreatureMovementSpeed.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_Flee : public UBTTaskNode {
public:
    float AcceptableRadius; // 0x70
    ECreatureMovementSpeed MaximumMovementSpeed; // 0x74
    char pad_75[0x3];
    FBlackboardKeySelector FleeTargetActorKey; // 0x78
    bool bFollowLeader; // 0xa0
    char pad_a1[0x7];
    FBlackboardKeySelector LeadActorKey; // 0xa8
    bool bMatchLeadActorGait; // 0xd0
    char pad_d1[0x3];
    int32_t SecondsBeforeFade; // 0xd4
    float SecondsBeforeFinishingTask; // 0xd8
    char pad_dc[0x4];
    static UBTTask_Creature_Flee* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
