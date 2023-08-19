#pragma once
#include <cstdint>
#include "FAIDataProviderFloatValue.hpp"
#include "UEnvQueryTest_Pathfinding.hpp"
#pragma pack(push, 1)
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding {
public:
    FAIDataProviderFloatValue ScanRangeMultiplier; // 0x280
    static UEnvQueryTest_PathfindingBatch* StaticClass();
}; // Size: 0x2b8
#pragma pack(pop)
