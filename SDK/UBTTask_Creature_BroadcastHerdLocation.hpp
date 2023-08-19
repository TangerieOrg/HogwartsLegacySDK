#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_BroadcastHerdLocation : public UBTTaskNode {
public:
    FBlackboardKeySelector InputLocationKey; // 0x70
    FBlackboardKeySelector BroadcastLocationKey; // 0x98
    static UBTTask_Creature_BroadcastHerdLocation* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
