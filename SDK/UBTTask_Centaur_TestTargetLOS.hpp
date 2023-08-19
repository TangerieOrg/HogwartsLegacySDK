#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Centaur_TestTargetLOS : public UBTTaskNode {
public:
    FBlackboardKeySelector TargetActorKey; // 0x70
    ECollisionChannel LineOfSightProbeChannel; // 0x98
    char pad_99[0x3];
    float LineOfSightProbeSize; // 0x9c
    bool bIgnoreEnemyHit; // 0xa0
    char pad_a1[0x7];
    static UBTTask_Centaur_TestTargetLOS* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
