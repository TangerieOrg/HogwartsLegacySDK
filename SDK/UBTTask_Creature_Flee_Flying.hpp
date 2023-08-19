#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_Flee_Flying : public UBTTaskNode {
public:
    FBlackboardKeySelector FleeTargetActorKey; // 0x70
    char pad_98[0x60];
    static UBTTask_Creature_Flee_Flying* StaticClass();
}; // Size: 0xf8
#pragma pack(pop)
