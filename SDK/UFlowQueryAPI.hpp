#pragma once
#include <cstdint>
#include "FFlowDataQueryResult.hpp"
#include "FVector.hpp"
#include "UWorldSubsystem.hpp"
class UObject;
#pragma pack(push, 1)
class UFlowQueryAPI : public UWorldSubsystem {
public:
    char pad_30[0x18];
    static UFlowQueryAPI* StaticClass();
    static bool QueryWaterData(UObject* Requester, TArray<FVector>& QueryPositions, TArray<FFlowDataQueryResult>& OutResults, bool bComputeNormals, bool bTraceRay);
}; // Size: 0x48
#pragma pack(pop)
