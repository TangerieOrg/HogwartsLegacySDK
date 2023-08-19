#include "FLightClippingPlane.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "ULightClippingPlanesComponent.hpp"
#include "ULightClippingPlanesComponentBase.hpp"
ULightClippingPlanesComponent* ULightClippingPlanesComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightClippingPlanesComponent");
    return (ULightClippingPlanesComponent*)res;
}
void ULightClippingPlanesComponent::SetClippingPlaneEnabled(int32_t ClippingPlaneIndex, bool bIsEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightClippingPlanesComponent.SetClippingPlaneEnabled"));
    struct Params_SetClippingPlaneEnabled {
        int32_t ClippingPlaneIndex; // 0x0
        bool bIsEnabled; // 0x4
    }; // Size: 0x5
    Params_SetClippingPlaneEnabled params{};
    params.ClippingPlaneIndex = (int32_t)ClippingPlaneIndex;
    params.bIsEnabled = (bool)bIsEnabled;
    ProcessEvent(func, &params);
}
void ULightClippingPlanesComponent::GetClippingPlanesCount(int32_t& NumClippingPlanes) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightClippingPlanesComponent.GetClippingPlanesCount"));
    struct Params_GetClippingPlanesCount {
        int32_t NumClippingPlanes; // 0x0
    }; // Size: 0x4
    Params_GetClippingPlanesCount params{};
    params.NumClippingPlanes = (int32_t)NumClippingPlanes;
    ProcessEvent(func, &params);
    NumClippingPlanes = params.NumClippingPlanes;
}
void ULightClippingPlanesComponent::GetClippingPlaneEnabled(int32_t ClippingPlaneIndex, bool& bIsEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightClippingPlanesComponent.GetClippingPlaneEnabled"));
    struct Params_GetClippingPlaneEnabled {
        int32_t ClippingPlaneIndex; // 0x0
        bool bIsEnabled; // 0x4
    }; // Size: 0x5
    Params_GetClippingPlaneEnabled params{};
    params.ClippingPlaneIndex = (int32_t)ClippingPlaneIndex;
    params.bIsEnabled = (bool)bIsEnabled;
    ProcessEvent(func, &params);
    bIsEnabled = params.bIsEnabled;
}
void ULightClippingPlanesComponent::GetClippingPlane(int32_t ClippingPlaneIndex, FVector& PlaneOrigin, FVector& PlaneNormal, bool& bIsEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightClippingPlanesComponent.GetClippingPlane"));
    struct Params_GetClippingPlane {
        int32_t ClippingPlaneIndex; // 0x0
        FVector PlaneOrigin; // 0x4
        FVector PlaneNormal; // 0x10
        bool bIsEnabled; // 0x1c
    }; // Size: 0x1d
    Params_GetClippingPlane params{};
    params.ClippingPlaneIndex = (int32_t)ClippingPlaneIndex;
    params.PlaneOrigin = (FVector)PlaneOrigin;
    params.PlaneNormal = (FVector)PlaneNormal;
    params.bIsEnabled = (bool)bIsEnabled;
    ProcessEvent(func, &params);
    PlaneOrigin = params.PlaneOrigin;
    PlaneNormal = params.PlaneNormal;
    bIsEnabled = params.bIsEnabled;
}
void ULightClippingPlanesComponent::ClearClippingPlanes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightClippingPlanesComponent.ClearClippingPlanes"));
    struct Params_ClearClippingPlanes {
    }; // Size: 0x0
    Params_ClearClippingPlanes params{};
    ProcessEvent(func, &params);
}
void ULightClippingPlanesComponent::AddRelativeClippingPlane(FRotator InRelativeRotation, float InRelativeDistance, bool bIsEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightClippingPlanesComponent.AddRelativeClippingPlane"));
    struct Params_AddRelativeClippingPlane {
        FRotator InRelativeRotation; // 0x0
        float InRelativeDistance; // 0xc
        bool bIsEnabled; // 0x10
    }; // Size: 0x11
    Params_AddRelativeClippingPlane params{};
    params.InRelativeRotation = (FRotator)InRelativeRotation;
    params.InRelativeDistance = (float)InRelativeDistance;
    params.bIsEnabled = (bool)bIsEnabled;
    ProcessEvent(func, &params);
}
