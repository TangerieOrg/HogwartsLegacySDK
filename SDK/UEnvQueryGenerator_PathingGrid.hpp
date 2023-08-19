#pragma once
#include <cstdint>
#include "FAIDataProviderBoolValue.hpp"
#include "FAIDataProviderFloatValue.hpp"
#include "UEnvQueryGenerator_SimpleGrid.hpp"
class UClass;
#pragma pack(push, 1)
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid {
public:
    FAIDataProviderBoolValue PathToItem; // 0xf8
    UClass* NavigationFilter; // 0x130
    FAIDataProviderFloatValue ScanRangeMultiplier; // 0x138
    static UEnvQueryGenerator_PathingGrid* StaticClass();
}; // Size: 0x170
#pragma pack(pop)
