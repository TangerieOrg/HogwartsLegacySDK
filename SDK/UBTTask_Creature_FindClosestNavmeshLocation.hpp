#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "FOdcFlags.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_FindClosestNavmeshLocation : public UBTTaskNode {
public:
    FBlackboardKeySelector SearchRootLocationKey; // 0x70
    FBlackboardKeySelector SearchResultLocationKey; // 0x98
    bool bUseCreaturePreferredAreaFlags; // 0xc0
    char pad_c1[0x3];
    FOdcFlags CustomAreaFlags; // 0xc4
    bool bCheckReachable; // 0xc8
    bool bFailIfNoLocationFound; // 0xc9
    char pad_ca[0x6];
    static UBTTask_Creature_FindClosestNavmeshLocation* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
