#include "EStereoLayerShape.hpp"
#include "EStereoLayerType.hpp"
#include "FBox2D.hpp"
#include "FEquirectProps.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "UStereoLayerComponent.hpp"
#include "UStereoLayerShape.hpp"
#include "UTexture.hpp"
UStereoLayerComponent* UStereoLayerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.StereoLayerComponent");
    return (UStereoLayerComponent*)res;
}
void UStereoLayerComponent::SetUVRect(FBox2D InUVRect) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StereoLayerComponent.SetUVRect"));
    struct Params_SetUVRect {
        FBox2D InUVRect; // 0x0
    }; // Size: 0x14
    Params_SetUVRect params{};
    params.InUVRect = (FBox2D)InUVRect;
    ProcessEvent(func, &params);
}
void UStereoLayerComponent::SetTexture(UTexture* inTexture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StereoLayerComponent.SetTexture"));
    struct Params_SetTexture {
        UTexture* inTexture; // 0x0
    }; // Size: 0x8
    Params_SetTexture params{};
    params.inTexture = (UTexture*)inTexture;
    ProcessEvent(func, &params);
}
void UStereoLayerComponent::SetQuadSize(FVector2D InQuadSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StereoLayerComponent.SetQuadSize"));
    struct Params_SetQuadSize {
        FVector2D InQuadSize; // 0x0
    }; // Size: 0x8
    Params_SetQuadSize params{};
    params.InQuadSize = (FVector2D)InQuadSize;
    ProcessEvent(func, &params);
}
int32_t UStereoLayerComponent::GetPriority() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StereoLayerComponent.GetPriority"));
    struct Params_GetPriority {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPriority params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UStereoLayerComponent::MarkTextureForUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StereoLayerComponent.MarkTextureForUpdate"));
    struct Params_MarkTextureForUpdate {
    }; // Size: 0x0
    Params_MarkTextureForUpdate params{};
    ProcessEvent(func, &params);
}
void UStereoLayerComponent::SetEquirectProps(FEquirectProps InScaleBiases) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StereoLayerComponent.SetEquirectProps"));
    struct Params_SetEquirectProps {
        FEquirectProps InScaleBiases; // 0x0
    }; // Size: 0x48
    Params_SetEquirectProps params{};
    params.InScaleBiases = (FEquirectProps)InScaleBiases;
    ProcessEvent(func, &params);
}
void UStereoLayerComponent::SetPriority(int32_t InPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StereoLayerComponent.SetPriority"));
    struct Params_SetPriority {
        int32_t InPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.InPriority = (int32_t)InPriority;
    ProcessEvent(func, &params);
}
void UStereoLayerComponent::SetLeftTexture(UTexture* inTexture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StereoLayerComponent.SetLeftTexture"));
    struct Params_SetLeftTexture {
        UTexture* inTexture; // 0x0
    }; // Size: 0x8
    Params_SetLeftTexture params{};
    params.inTexture = (UTexture*)inTexture;
    ProcessEvent(func, &params);
}
FBox2D UStereoLayerComponent::GetUVRect() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StereoLayerComponent.GetUVRect"));
    struct Params_GetUVRect {
        FBox2D ReturnValue; // 0x0
    }; // Size: 0x14
    Params_GetUVRect params{};
    ProcessEvent(func, &params);
    return (FBox2D)params.ReturnValue;
}
UTexture* UStereoLayerComponent::GetTexture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StereoLayerComponent.GetTexture"));
    struct Params_GetTexture {
        UTexture* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTexture params{};
    ProcessEvent(func, &params);
    return (UTexture*)params.ReturnValue;
}
FVector2D UStereoLayerComponent::GetQuadSize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StereoLayerComponent.GetQuadSize"));
    struct Params_GetQuadSize {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetQuadSize params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
UTexture* UStereoLayerComponent::GetLeftTexture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StereoLayerComponent.GetLeftTexture"));
    struct Params_GetLeftTexture {
        UTexture* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLeftTexture params{};
    ProcessEvent(func, &params);
    return (UTexture*)params.ReturnValue;
}
