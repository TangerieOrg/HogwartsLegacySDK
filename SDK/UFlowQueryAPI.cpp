#include "FFlowDataQueryResult.hpp"
#include "FVector.hpp"
#include "UFlowQueryAPI.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UWorldSubsystem.hpp"
UFlowQueryAPI* UFlowQueryAPI::StaticClass() {
    static auto res = find_uobject("Class /Script/Flow.FlowQueryAPI");
    return (UFlowQueryAPI*)res;
}
bool UFlowQueryAPI::QueryWaterData(UObject* Requester, TArray<FVector>& QueryPositions, TArray<FFlowDataQueryResult>& OutResults, bool bComputeNormals, bool bTraceRay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Flow.FlowQueryAPI.QueryWaterData"));
    struct Params_QueryWaterData {
        UObject* Requester; // 0x0
        TArray<FVector> QueryPositions; // 0x8
        TArray<FFlowDataQueryResult> OutResults; // 0x18
        bool bComputeNormals; // 0x28
        bool bTraceRay; // 0x29
        bool ReturnValue; // 0x2a
    }; // Size: 0x2b
    Params_QueryWaterData params{};
    params.Requester = (UObject*)Requester;
    params.QueryPositions = (TArray<FVector>)QueryPositions;
    params.OutResults = (TArray<FFlowDataQueryResult>)OutResults;
    params.bComputeNormals = (bool)bComputeNormals;
    params.bTraceRay = (bool)bTraceRay;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    QueryPositions = params.QueryPositions;
    OutResults = params.OutResults;
    return (bool)params.ReturnValue;
}
