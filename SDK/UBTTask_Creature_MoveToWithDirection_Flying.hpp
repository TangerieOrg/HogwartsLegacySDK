#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_MoveToWithDirection_Flying : public UBTTaskNode {
public:
    FBlackboardKeySelector TargetLocationKey; // 0x70
    FBlackboardKeySelector TargetDirectionKey; // 0x98
    static UBTTask_Creature_MoveToWithDirection_Flying* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
