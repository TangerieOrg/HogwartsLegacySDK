#include "ALightClippingVolume.hpp"
#include "ELightClippingProviderVolumeMode.hpp"
#include "ELightClippingVolumeFilterType.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "ULightClippingVolumeSupportLibrary.hpp"
#include "ULocalLightComponent.hpp"
void ULightClippingVolumeSupportLibrary::GetLightClippingVolumeSource(ULocalLightComponent* LightComponent, ALightClippingVolume*& LightClippingVolumeActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightClippingVolumeSupportLibrary.GetLightClippingVolumeSource"));
    struct Params_GetLightClippingVolumeSource {
        ULocalLightComponent* LightComponent; // 0x0
        ALightClippingVolume* LightClippingVolumeActor; // 0x8
    }; // Size: 0x10
    Params_GetLightClippingVolumeSource params{};
    params.LightComponent = (ULocalLightComponent*)LightComponent;
    params.LightClippingVolumeActor = (ALightClippingVolume*)LightClippingVolumeActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    LightClippingVolumeActor = params.LightClippingVolumeActor;
}
ULightClippingVolumeSupportLibrary* ULightClippingVolumeSupportLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LightClippingVolumeSupportLibrary");
    return (ULightClippingVolumeSupportLibrary*)res;
}
void ULightClippingVolumeSupportLibrary::ClearLightClippingSource(ULocalLightComponent* LightComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightClippingVolumeSupportLibrary.ClearLightClippingSource"));
    struct Params_ClearLightClippingSource {
        ULocalLightComponent* LightComponent; // 0x0
    }; // Size: 0x8
    Params_ClearLightClippingSource params{};
    params.LightComponent = (ULocalLightComponent*)LightComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULightClippingVolumeSupportLibrary::GetAllWithLightClippingVolumeActor(ALightClippingVolume* LightClippingVolumeActor, TArray<ULocalLightComponent*>& Lights, ELightClippingVolumeFilterType FilterType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightClippingVolumeSupportLibrary.GetAllWithLightClippingVolumeActor"));
    struct Params_GetAllWithLightClippingVolumeActor {
        ALightClippingVolume* LightClippingVolumeActor; // 0x0
        TArray<ULocalLightComponent*> Lights; // 0x8
        ELightClippingVolumeFilterType FilterType; // 0x18
    }; // Size: 0x19
    Params_GetAllWithLightClippingVolumeActor params{};
    params.LightClippingVolumeActor = (ALightClippingVolume*)LightClippingVolumeActor;
    params.Lights = (TArray<ULocalLightComponent*>)Lights;
    params.FilterType = (ELightClippingVolumeFilterType)FilterType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Lights = params.Lights;
}
void ULightClippingVolumeSupportLibrary::FindAndAssignLightClippingVolumeSource(FName LightTag, ALightClippingVolume* LightClippingVolumeActor, int32_t& AssignedLights, bool bForceEvenIfAlreadySet, ELightClippingProviderVolumeMode VolumeMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightClippingVolumeSupportLibrary.FindAndAssignLightClippingVolumeSource"));
    struct Params_FindAndAssignLightClippingVolumeSource {
        FName LightTag; // 0x0
        ALightClippingVolume* LightClippingVolumeActor; // 0x8
        int32_t AssignedLights; // 0x10
        bool bForceEvenIfAlreadySet; // 0x14
        ELightClippingProviderVolumeMode VolumeMode; // 0x15
    }; // Size: 0x16
    Params_FindAndAssignLightClippingVolumeSource params{};
    params.LightTag = (FName)LightTag;
    params.LightClippingVolumeActor = (ALightClippingVolume*)LightClippingVolumeActor;
    params.AssignedLights = (int32_t)AssignedLights;
    params.bForceEvenIfAlreadySet = (bool)bForceEvenIfAlreadySet;
    params.VolumeMode = (ELightClippingProviderVolumeMode)VolumeMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    AssignedLights = params.AssignedLights;
}
void ULightClippingVolumeSupportLibrary::ClearAllLightClippingVolumeSource(ALightClippingVolume* LightClippingVolumeActor, int32_t& UnassignedLights) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightClippingVolumeSupportLibrary.ClearAllLightClippingVolumeSource"));
    struct Params_ClearAllLightClippingVolumeSource {
        ALightClippingVolume* LightClippingVolumeActor; // 0x0
        int32_t UnassignedLights; // 0x8
    }; // Size: 0xc
    Params_ClearAllLightClippingVolumeSource params{};
    params.LightClippingVolumeActor = (ALightClippingVolume*)LightClippingVolumeActor;
    params.UnassignedLights = (int32_t)UnassignedLights;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    UnassignedLights = params.UnassignedLights;
}
void ULightClippingVolumeSupportLibrary::AssignLightClippingVolumeSource(ULocalLightComponent* LightComponent, ALightClippingVolume* LightClippingVolumeActor, bool& bSuccess, ELightClippingProviderVolumeMode VolumeMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightClippingVolumeSupportLibrary.AssignLightClippingVolumeSource"));
    struct Params_AssignLightClippingVolumeSource {
        ULocalLightComponent* LightComponent; // 0x0
        ALightClippingVolume* LightClippingVolumeActor; // 0x8
        bool bSuccess; // 0x10
        ELightClippingProviderVolumeMode VolumeMode; // 0x11
    }; // Size: 0x12
    Params_AssignLightClippingVolumeSource params{};
    params.LightComponent = (ULocalLightComponent*)LightComponent;
    params.LightClippingVolumeActor = (ALightClippingVolume*)LightClippingVolumeActor;
    params.bSuccess = (bool)bSuccess;
    params.VolumeMode = (ELightClippingProviderVolumeMode)VolumeMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
