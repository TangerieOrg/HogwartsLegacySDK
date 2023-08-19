#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_Landing : public UBTTaskNode {
public:
    FBlackboardKeySelector LandingLocationKey; // 0x70
    FBlackboardKeySelector LandingTypeKey; // 0x98
    FBlackboardKeySelector IsPerchedKey; // 0xc0
    static UBTTask_Creature_Landing* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
