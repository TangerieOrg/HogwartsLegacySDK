#include "FStationQueryData.hpp"
#include "UEnvQueryInstanceBlueprintWrapperEx.hpp"
#include "UEnvQueryInstance_Station.hpp"
#include "UFunction.hpp"
UEnvQueryInstance_Station* UEnvQueryInstance_Station::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnvQueryInstance_Station");
    return (UEnvQueryInstance_Station*)res;
}
TArray<FStationQueryData> UEnvQueryInstance_Station::GetResultsAsStationQueryData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnvQueryInstance_Station.GetResultsAsStationQueryData"));
    struct Params_GetResultsAsStationQueryData {
        TArray<FStationQueryData> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetResultsAsStationQueryData params{};
    ProcessEvent(func, &params);
    return (TArray<FStationQueryData>)params.ReturnValue;
}
