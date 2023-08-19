#pragma once
#include <cstdint>
#include "FStationQueryData.hpp"
#include "UEnvQueryInstanceBlueprintWrapperEx.hpp"
#pragma pack(push, 1)
class UEnvQueryInstance_Station : public UEnvQueryInstanceBlueprintWrapperEx {
public:
    static UEnvQueryInstance_Station* StaticClass();
    TArray<FStationQueryData> GetResultsAsStationQueryData();
}; // Size: 0x78
#pragma pack(pop)
