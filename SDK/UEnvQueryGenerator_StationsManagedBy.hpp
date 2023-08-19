#pragma once
#include <cstdint>
#include "EStationSelectionMethod.hpp"
#include "UEnvQueryGenerator.hpp"
#pragma pack(push, 1)
class UEnvQueryGenerator_StationsManagedBy : public UEnvQueryGenerator {
public:
    bool bUseAvailableStationsOnly; // 0x50
    char pad_51[0x3];
    int32_t GenerateMaxCount; // 0x54
    EStationSelectionMethod SelectionMethod; // 0x58
    char pad_59[0x7];
    static UEnvQueryGenerator_StationsManagedBy* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
