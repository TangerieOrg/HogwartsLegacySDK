#pragma once
#include <cstdint>
#include "FAIDataProviderFloatValue.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_FindRandomReachableLocation : public UBTTaskNode {
public:
    FAIDataProviderFloatValue ParameterizedMinSearchRadius; // 0x70
    FAIDataProviderFloatValue ParameterizedMaxSearchRadius; // 0xa8
    float LocationTestRadius; // 0xe0
    char pad_e4[0x4];
    FAIDataProviderFloatValue ParameterizedLocationTestRadius; // 0xe8
    bool bCheckLocationHasPreferredAreaFlag; // 0x120
    bool bCheckLocationForDistanceToPath; // 0x121
    bool bCheckLocationForMaxGroundSlope; // 0x122
    char pad_123[0x5];
    FBlackboardKeySelector SearchRootLocationKey; // 0x128
    FBlackboardKeySelector SearchResultLocationKey; // 0x150
    bool bUseMaxHeadingAngle; // 0x178
    char pad_179[0x7];
    FBlackboardKeySelector ForwardDirectionKey; // 0x180
    float MaxHeadingAngleFromForward; // 0x1a8
    bool bUseTether; // 0x1ac
    bool bFailIfNoLocationFound; // 0x1ad
    bool bReportErrorOnFailure; // 0x1ae
    char pad_1af[0x1];
    FName ErrorName; // 0x1b0
    float ErrorTimeout; // 0x1b8
    int32_t SearchTicks; // 0x1bc
    int32_t SearchTriesPerTick; // 0x1c0
    int32_t SearchReductions; // 0x1c4
    static UBTTask_Creature_FindRandomReachableLocation* StaticClass();
}; // Size: 0x1c8
#pragma pack(pop)
