#include "EARObjectClassification.hpp"
#include "FVector.hpp"
#include "UARMeshGeometry.hpp"
#include "UARTrackedGeometry.hpp"
#include "UFunction.hpp"
UARMeshGeometry* UARMeshGeometry::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARMeshGeometry");
    return (UARMeshGeometry*)res;
}
bool UARMeshGeometry::GetObjectClassificationAtLocation(FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation"));
    struct Params_GetObjectClassificationAtLocation {
        FVector InWorldLocation; // 0x0
        EARObjectClassification OutClassification; // 0xc
        char pad_d[0x3];
        FVector OutClassificationLocation; // 0x10
        float MaxLocationDiff; // 0x1c
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetObjectClassificationAtLocation params{};
    params.InWorldLocation = (FVector)InWorldLocation;
    params.OutClassification = (EARObjectClassification)OutClassification;
    params.OutClassificationLocation = (FVector)OutClassificationLocation;
    params.MaxLocationDiff = (float)MaxLocationDiff;
    ProcessEvent(func, &params);
    InWorldLocation = params.InWorldLocation;
    OutClassificationLocation = params.OutClassificationLocation;
    OutClassification = params.OutClassification;
    return (bool)params.ReturnValue;
}
