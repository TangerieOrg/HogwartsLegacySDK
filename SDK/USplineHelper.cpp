#include "FVector.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USplineComponent.hpp"
#include "USplineHelper.hpp"
USplineHelper* USplineHelper::StaticClass() {
    static auto res = find_uobject("Class /Script/UtilitiesRuntime.SplineHelper");
    return (USplineHelper*)res;
}
bool USplineHelper::IsLocationCloseEnoughToSplineAtDistance(USplineComponent* SplineComponent, float DistanceAlongSpline, FVector TestLocation, float DistanceRange, bool bDebug) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.SplineHelper.IsLocationCloseEnoughToSplineAtDistance"));
    struct Params_IsLocationCloseEnoughToSplineAtDistance {
        USplineComponent* SplineComponent; // 0x0
        float DistanceAlongSpline; // 0x8
        FVector TestLocation; // 0xc
        float DistanceRange; // 0x18
        bool bDebug; // 0x1c
        bool ReturnValue; // 0x1d
    }; // Size: 0x1e
    Params_IsLocationCloseEnoughToSplineAtDistance params{};
    params.SplineComponent = (USplineComponent*)SplineComponent;
    params.DistanceAlongSpline = (float)DistanceAlongSpline;
    params.TestLocation = (FVector)TestLocation;
    params.DistanceRange = (float)DistanceRange;
    params.bDebug = (bool)bDebug;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float USplineHelper::GetDistanceAlongSplineFromWorldLocation(USplineComponent* SplineComponent, FVector Location, bool& bFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.SplineHelper.GetDistanceAlongSplineFromWorldLocation"));
    struct Params_GetDistanceAlongSplineFromWorldLocation {
        USplineComponent* SplineComponent; // 0x0
        FVector Location; // 0x8
        bool bFound; // 0x14
        char pad_15[0x3];
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_GetDistanceAlongSplineFromWorldLocation params{};
    params.SplineComponent = (USplineComponent*)SplineComponent;
    params.Location = (FVector)Location;
    params.bFound = (bool)bFound;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bFound = params.bFound;
    return (float)params.ReturnValue;
}
