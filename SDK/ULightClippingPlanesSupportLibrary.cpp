#include "ALightClippingPlanes.hpp"
#include "ELightClippingPlanesFilterType.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "ULevel.hpp"
#include "ULightClippingPlanesSupportLibrary.hpp"
#include "ULocalLightComponent.hpp"
#include "UObject.hpp"
void ULightClippingPlanesSupportLibrary::ClearLightClippingSource(ULocalLightComponent* LightComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightClippingPlanesSupportLibrary.ClearLightClippingSource"));
    struct Params_ClearLightClippingSource {
        ULocalLightComponent* LightComponent; // 0x0
    }; // Size: 0x8
    Params_ClearLightClippingSource params{};
    params.LightComponent = (ULocalLightComponent*)LightComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULightClippingPlanesSupportLibrary::GetAllWorldLightsWithTag(UObject* WorldContextObject, FName LightTag, TArray<ULocalLightComponent*>& Lights) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightClippingPlanesSupportLibrary.GetAllWorldLightsWithTag"));
    struct Params_GetAllWorldLightsWithTag {
        UObject* WorldContextObject; // 0x0
        FName LightTag; // 0x8
        TArray<ULocalLightComponent*> Lights; // 0x10
    }; // Size: 0x20
    Params_GetAllWorldLightsWithTag params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LightTag = (FName)LightTag;
    params.Lights = (TArray<ULocalLightComponent*>)Lights;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Lights = params.Lights;
}
ULightClippingPlanesSupportLibrary* ULightClippingPlanesSupportLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LightClippingPlanesSupportLibrary");
    return (ULightClippingPlanesSupportLibrary*)res;
}
void ULightClippingPlanesSupportLibrary::GetLightClippingPlanesSource(ULocalLightComponent* LightComponent, ALightClippingPlanes*& LightClippingPlanesActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightClippingPlanesSupportLibrary.GetLightClippingPlanesSource"));
    struct Params_GetLightClippingPlanesSource {
        ULocalLightComponent* LightComponent; // 0x0
        ALightClippingPlanes* LightClippingPlanesActor; // 0x8
    }; // Size: 0x10
    Params_GetLightClippingPlanesSource params{};
    params.LightComponent = (ULocalLightComponent*)LightComponent;
    params.LightClippingPlanesActor = (ALightClippingPlanes*)LightClippingPlanesActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    LightClippingPlanesActor = params.LightClippingPlanesActor;
}
void ULightClippingPlanesSupportLibrary::GetAllLevelLightsWithTag(ULevel* Level, FName LightTag, TArray<ULocalLightComponent*>& Lights) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightClippingPlanesSupportLibrary.GetAllLevelLightsWithTag"));
    struct Params_GetAllLevelLightsWithTag {
        ULevel* Level; // 0x0
        FName LightTag; // 0x8
        TArray<ULocalLightComponent*> Lights; // 0x10
    }; // Size: 0x20
    Params_GetAllLevelLightsWithTag params{};
    params.Level = (ULevel*)Level;
    params.LightTag = (FName)LightTag;
    params.Lights = (TArray<ULocalLightComponent*>)Lights;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Lights = params.Lights;
}
void ULightClippingPlanesSupportLibrary::GetAllWithLightClippingPlanesActor(ALightClippingPlanes* LightClippingPlanesActor, TArray<ULocalLightComponent*>& Lights, ELightClippingPlanesFilterType FilterType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightClippingPlanesSupportLibrary.GetAllWithLightClippingPlanesActor"));
    struct Params_GetAllWithLightClippingPlanesActor {
        ALightClippingPlanes* LightClippingPlanesActor; // 0x0
        TArray<ULocalLightComponent*> Lights; // 0x8
        ELightClippingPlanesFilterType FilterType; // 0x18
    }; // Size: 0x19
    Params_GetAllWithLightClippingPlanesActor params{};
    params.LightClippingPlanesActor = (ALightClippingPlanes*)LightClippingPlanesActor;
    params.Lights = (TArray<ULocalLightComponent*>)Lights;
    params.FilterType = (ELightClippingPlanesFilterType)FilterType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Lights = params.Lights;
}
void ULightClippingPlanesSupportLibrary::ClearAllLightClippingPlanesSource(ALightClippingPlanes* LightClippingPlanesActor, int32_t& UnassignedLights) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightClippingPlanesSupportLibrary.ClearAllLightClippingPlanesSource"));
    struct Params_ClearAllLightClippingPlanesSource {
        ALightClippingPlanes* LightClippingPlanesActor; // 0x0
        int32_t UnassignedLights; // 0x8
    }; // Size: 0xc
    Params_ClearAllLightClippingPlanesSource params{};
    params.LightClippingPlanesActor = (ALightClippingPlanes*)LightClippingPlanesActor;
    params.UnassignedLights = (int32_t)UnassignedLights;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    UnassignedLights = params.UnassignedLights;
}
void ULightClippingPlanesSupportLibrary::FindAndAssignLightClippingPlanesSource(FName LightTag, ALightClippingPlanes* LightClippingPlanesActor, int32_t& AssignedLights, bool bForceEvenIfAlreadySet, bool bInvertClippingPlanes) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightClippingPlanesSupportLibrary.FindAndAssignLightClippingPlanesSource"));
    struct Params_FindAndAssignLightClippingPlanesSource {
        FName LightTag; // 0x0
        ALightClippingPlanes* LightClippingPlanesActor; // 0x8
        int32_t AssignedLights; // 0x10
        bool bForceEvenIfAlreadySet; // 0x14
        bool bInvertClippingPlanes; // 0x15
    }; // Size: 0x16
    Params_FindAndAssignLightClippingPlanesSource params{};
    params.LightTag = (FName)LightTag;
    params.LightClippingPlanesActor = (ALightClippingPlanes*)LightClippingPlanesActor;
    params.AssignedLights = (int32_t)AssignedLights;
    params.bForceEvenIfAlreadySet = (bool)bForceEvenIfAlreadySet;
    params.bInvertClippingPlanes = (bool)bInvertClippingPlanes;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    AssignedLights = params.AssignedLights;
}
void ULightClippingPlanesSupportLibrary::AssignLightClippingPlanesSource(ULocalLightComponent* LightComponent, ALightClippingPlanes* LightClippingPlanesActor, bool& bSuccess, bool bInvertClippingPlanes) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightClippingPlanesSupportLibrary.AssignLightClippingPlanesSource"));
    struct Params_AssignLightClippingPlanesSource {
        ULocalLightComponent* LightComponent; // 0x0
        ALightClippingPlanes* LightClippingPlanesActor; // 0x8
        bool bSuccess; // 0x10
        bool bInvertClippingPlanes; // 0x11
    }; // Size: 0x12
    Params_AssignLightClippingPlanesSource params{};
    params.LightComponent = (ULocalLightComponent*)LightComponent;
    params.LightClippingPlanesActor = (ALightClippingPlanes*)LightClippingPlanesActor;
    params.bSuccess = (bool)bSuccess;
    params.bInvertClippingPlanes = (bool)bInvertClippingPlanes;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
