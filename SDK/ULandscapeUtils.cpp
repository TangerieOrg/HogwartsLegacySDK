#include "FLayerInfoWeight.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "ULandscapeHeightfieldCollisionComponent.hpp"
#include "ULandscapeUtils.hpp"
#include "UPhysicalMaterial.hpp"
ULandscapeUtils* ULandscapeUtils::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LandscapeUtils");
    return (ULandscapeUtils*)res;
}
void ULandscapeUtils::LogLandscapeComponentLayerInfoData(ULandscapeHeightfieldCollisionComponent* LandColComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeUtils.LogLandscapeComponentLayerInfoData"));
    struct Params_LogLandscapeComponentLayerInfoData {
        ULandscapeHeightfieldCollisionComponent* LandColComponent; // 0x0
    }; // Size: 0x8
    Params_LogLandscapeComponentLayerInfoData params{};
    params.LandColComponent = (ULandscapeHeightfieldCollisionComponent*)LandColComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
TArray<FLayerInfoWeight> ULandscapeUtils::LineTraceForLayerInfoWeight(FVector Start, FVector End) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeUtils.LineTraceForLayerInfoWeight"));
    struct Params_LineTraceForLayerInfoWeight {
        FVector Start; // 0x0
        FVector End; // 0xc
        TArray<FLayerInfoWeight> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_LineTraceForLayerInfoWeight params{};
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FLayerInfoWeight>)params.ReturnValue;
}
TArray<FLayerInfoWeight> ULandscapeUtils::GetLandscapeComponentLayerInfoData(ULandscapeHeightfieldCollisionComponent* LandColComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeUtils.GetLandscapeComponentLayerInfoData"));
    struct Params_GetLandscapeComponentLayerInfoData {
        ULandscapeHeightfieldCollisionComponent* LandColComponent; // 0x0
        TArray<FLayerInfoWeight> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetLandscapeComponentLayerInfoData params{};
    params.LandColComponent = (ULandscapeHeightfieldCollisionComponent*)LandColComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FLayerInfoWeight>)params.ReturnValue;
}
float ULandscapeUtils::GetWetnessFromLayerInfoData(ULandscapeHeightfieldCollisionComponent* LandColComponent, FVector& InLocation, TArray<FString>& InWetnessLayerInfoNames, UPhysicalMaterial*& OutPhysMaterial) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeUtils.GetWetnessFromLayerInfoData"));
    struct Params_GetWetnessFromLayerInfoData {
        ULandscapeHeightfieldCollisionComponent* LandColComponent; // 0x0
        FVector InLocation; // 0x8
        char pad_14[0x4];
        TArray<FString> InWetnessLayerInfoNames; // 0x18
        UPhysicalMaterial* OutPhysMaterial; // 0x28
        float ReturnValue; // 0x30
    }; // Size: 0x34
    Params_GetWetnessFromLayerInfoData params{};
    params.LandColComponent = (ULandscapeHeightfieldCollisionComponent*)LandColComponent;
    params.InLocation = (FVector)InLocation;
    params.InWetnessLayerInfoNames = (TArray<FString>)InWetnessLayerInfoNames;
    params.OutPhysMaterial = (UPhysicalMaterial*)OutPhysMaterial;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InLocation = params.InLocation;
    InWetnessLayerInfoNames = params.InWetnessLayerInfoNames;
    OutPhysMaterial = params.OutPhysMaterial;
    return (float)params.ReturnValue;
}
void ULandscapeUtils::ClearLandscapeComponentLayerInfoData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeUtils.ClearLandscapeComponentLayerInfoData"));
    struct Params_ClearLandscapeComponentLayerInfoData {
    }; // Size: 0x0
    Params_ClearLandscapeComponentLayerInfoData params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
