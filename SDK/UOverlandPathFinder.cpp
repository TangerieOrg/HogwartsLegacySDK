#include "APhoenixPathActor.hpp"
#include "FDebugMapData.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "ULevelStreamingDynamic.hpp"
#include "UMapPath.hpp"
#include "UMapPathData.hpp"
#include "UObject.hpp"
#include "UOverlandPathFinder.hpp"
UOverlandPathFinder* UOverlandPathFinder::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.OverlandPathFinder");
    return (UOverlandPathFinder*)res;
}
void UOverlandPathFinder::MapCreateRoadSplineData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OverlandPathFinder.MapCreateRoadSplineData"));
    struct Params_MapCreateRoadSplineData {
    }; // Size: 0x0
    Params_MapCreateRoadSplineData params{};
    ProcessEvent(func, &params);
}
void UOverlandPathFinder::RoadSplineTileLoadedCallback() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OverlandPathFinder.RoadSplineTileLoadedCallback"));
    struct Params_RoadSplineTileLoadedCallback {
    }; // Size: 0x0
    Params_RoadSplineTileLoadedCallback params{};
    ProcessEvent(func, &params);
}
TArray<FVector> UOverlandPathFinder::GetPath() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OverlandPathFinder.GetPath"));
    struct Params_GetPath {
        TArray<FVector> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetPath params{};
    ProcessEvent(func, &params);
    return (TArray<FVector>)params.ReturnValue;
}
