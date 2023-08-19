#include "FBox.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFoliageStatistics.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UStaticMesh.hpp"
int32_t UFoliageStatistics::FoliageOverlappingBoxCount(UObject* WorldContextObject, UStaticMesh* StaticMesh, FBox Box) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Foliage.FoliageStatistics.FoliageOverlappingBoxCount"));
    struct Params_FoliageOverlappingBoxCount {
        UObject* WorldContextObject; // 0x0
        UStaticMesh* StaticMesh; // 0x8
        FBox Box; // 0x10
        int32_t ReturnValue; // 0x2c
    }; // Size: 0x30
    Params_FoliageOverlappingBoxCount params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.StaticMesh = (UStaticMesh*)StaticMesh;
    params.Box = (FBox)Box;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UFoliageStatistics* UFoliageStatistics::StaticClass() {
    static auto res = find_uobject("Class /Script/Foliage.FoliageStatistics");
    return (UFoliageStatistics*)res;
}
int32_t UFoliageStatistics::FoliageOverlappingSphereCount(UObject* WorldContextObject, UStaticMesh* StaticMesh, FVector CenterPosition, float Radius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Foliage.FoliageStatistics.FoliageOverlappingSphereCount"));
    struct Params_FoliageOverlappingSphereCount {
        UObject* WorldContextObject; // 0x0
        UStaticMesh* StaticMesh; // 0x8
        FVector CenterPosition; // 0x10
        float Radius; // 0x1c
        int32_t ReturnValue; // 0x20
    }; // Size: 0x24
    Params_FoliageOverlappingSphereCount params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.StaticMesh = (UStaticMesh*)StaticMesh;
    params.CenterPosition = (FVector)CenterPosition;
    params.Radius = (float)Radius;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
