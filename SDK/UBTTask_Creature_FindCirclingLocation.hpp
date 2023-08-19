#pragma once
#include <cstdint>
#include "FAIDataProviderFloatValue.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_FindCirclingLocation : public UBTTaskNode {
public:
    FBlackboardKeySelector SearchRootLocationKey; // 0x70
    FAIDataProviderFloatValue ParameterizedMinSearchRadius; // 0x98
    FAIDataProviderFloatValue ParameterizedMaxSearchRadius; // 0xd0
    FBlackboardKeySelector CircleCenterLocationKey; // 0x108
    FBlackboardKeySelector CircleRadiusKey; // 0x130
    int32_t SearchTicks; // 0x158
    int32_t SearchTriesPerTick; // 0x15c
    static UBTTask_Creature_FindCirclingLocation* StaticClass();
}; // Size: 0x160
#pragma pack(pop)
