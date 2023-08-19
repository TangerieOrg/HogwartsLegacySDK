#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_FindLandingConfiguration : public UBTTaskNode {
public:
    bool bUseCurrentPerch; // 0x70
    char pad_71[0x7];
    FBlackboardKeySelector TargetLocationKey; // 0x78
    FBlackboardKeySelector LandASAPKey; // 0xa0
    FBlackboardKeySelector LandingLocationKey; // 0xc8
    FBlackboardKeySelector ApproachLocationKey; // 0xf0
    FBlackboardKeySelector LandingDirectionKey; // 0x118
    FBlackboardKeySelector LandingTypeKey; // 0x140
    FBlackboardKeySelector IsPerchedKey; // 0x168
    char pad_190[0x1448];
    static UBTTask_Creature_FindLandingConfiguration* StaticClass();
}; // Size: 0x15d8
#pragma pack(pop)
