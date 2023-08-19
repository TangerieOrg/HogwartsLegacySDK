#include "AActor.hpp"
#include "EMaterialSwapSphereSelectionType.hpp"
#include "FLinearColor.hpp"
#include "FMaterialSwapActorRules.hpp"
#include "FMaterialSwapInfo.hpp"
#include "FMaterialSwapParameters.hpp"
#include "FVector.hpp"
#include "FVector4.hpp"
#include "UFunction.hpp"
#include "UMaterialSwapSphereSelectionComponent.hpp"
#include "USceneComponent.hpp"
#include "UTexture.hpp"
void UMaterialSwapSphereSelectionComponent::SetScalarParameter(FName Name, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapSphereSelectionComponent.SetScalarParameter"));
    struct Params_SetScalarParameter {
        FName Name; // 0x0
        float Value; // 0x8
    }; // Size: 0xc
    Params_SetScalarParameter params{};
    params.Name = (FName)Name;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
UMaterialSwapSphereSelectionComponent* UMaterialSwapSphereSelectionComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapSphereSelectionComponent");
    return (UMaterialSwapSphereSelectionComponent*)res;
}
void UMaterialSwapSphereSelectionComponent::SetTextureParameter(FName Name, UTexture* Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapSphereSelectionComponent.SetTextureParameter"));
    struct Params_SetTextureParameter {
        FName Name; // 0x0
        UTexture* Value; // 0x8
    }; // Size: 0x10
    Params_SetTextureParameter params{};
    params.Name = (FName)Name;
    params.Value = (UTexture*)Value;
    ProcessEvent(func, &params);
}
bool UMaterialSwapSphereSelectionComponent::Swapping() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapSphereSelectionComponent.Swapping"));
    struct Params_Swapping {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_Swapping params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UMaterialSwapSphereSelectionComponent::Swapped() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapSphereSelectionComponent.Swapped"));
    struct Params_Swapped {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_Swapped params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UMaterialSwapSphereSelectionComponent::StartSwapping(FMaterialSwapInfo& NewSwapInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapSphereSelectionComponent.StartSwapping"));
    struct Params_StartSwapping {
        FMaterialSwapInfo NewSwapInfo; // 0x0
    }; // Size: 0x180
    Params_StartSwapping params{};
    params.NewSwapInfo = (FMaterialSwapInfo)NewSwapInfo;
    ProcessEvent(func, &params);
    NewSwapInfo = params.NewSwapInfo;
}
void UMaterialSwapSphereSelectionComponent::SetVectorParameter(FName Name, FVector Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapSphereSelectionComponent.SetVectorParameter"));
    struct Params_SetVectorParameter {
        FName Name; // 0x0
        FVector Value; // 0x8
    }; // Size: 0x14
    Params_SetVectorParameter params{};
    params.Name = (FName)Name;
    params.Value = (FVector)Value;
    ProcessEvent(func, &params);
}
void UMaterialSwapSphereSelectionComponent::SetVector4Parameter(FName Name, FVector4 Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapSphereSelectionComponent.SetVector4Parameter"));
    struct Params_SetVector4Parameter {
        FName Name; // 0x0
        char pad_8[0x8];
        FVector4 Value; // 0x10
    }; // Size: 0x20
    Params_SetVector4Parameter params{};
    params.Name = (FName)Name;
    params.Value = (FVector4)Value;
    ProcessEvent(func, &params);
}
void UMaterialSwapSphereSelectionComponent::SetParameters(FMaterialSwapParameters& Params) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapSphereSelectionComponent.SetParameters"));
    struct Params_SetParameters {
        FMaterialSwapParameters Params; // 0x0
    }; // Size: 0x50
    Params_SetParameters params{};
    params.Params = (FMaterialSwapParameters)Params;
    ProcessEvent(func, &params);
    Params = params.Params;
}
void UMaterialSwapSphereSelectionComponent::SetColorParameter(FName Name, FLinearColor Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapSphereSelectionComponent.SetColorParameter"));
    struct Params_SetColorParameter {
        FName Name; // 0x0
        FLinearColor Value; // 0x8
    }; // Size: 0x18
    Params_SetColorParameter params{};
    params.Name = (FName)Name;
    params.Value = (FLinearColor)Value;
    ProcessEvent(func, &params);
}
void UMaterialSwapSphereSelectionComponent::IsWeatherOnly(bool& OnlySwappingWeather) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapSphereSelectionComponent.IsWeatherOnly"));
    struct Params_IsWeatherOnly {
        bool OnlySwappingWeather; // 0x0
    }; // Size: 0x1
    Params_IsWeatherOnly params{};
    params.OnlySwappingWeather = (bool)OnlySwappingWeather;
    ProcessEvent(func, &params);
    OnlySwappingWeather = params.OnlySwappingWeather;
}
bool UMaterialSwapSphereSelectionComponent::IsInside(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapSphereSelectionComponent.IsInside"));
    struct Params_IsInside {
        AActor* Actor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsInside params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMaterialSwapSphereSelectionComponent::GetCurrentSwapInfo(FMaterialSwapInfo& CurrentSwapInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapSphereSelectionComponent.GetCurrentSwapInfo"));
    struct Params_GetCurrentSwapInfo {
        FMaterialSwapInfo CurrentSwapInfo; // 0x0
    }; // Size: 0x180
    Params_GetCurrentSwapInfo params{};
    params.CurrentSwapInfo = (FMaterialSwapInfo)CurrentSwapInfo;
    ProcessEvent(func, &params);
    CurrentSwapInfo = params.CurrentSwapInfo;
}
void UMaterialSwapSphereSelectionComponent::EndSwapping() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapSphereSelectionComponent.EndSwapping"));
    struct Params_EndSwapping {
    }; // Size: 0x0
    Params_EndSwapping params{};
    ProcessEvent(func, &params);
}
