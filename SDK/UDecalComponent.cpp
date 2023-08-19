#include "FVector.hpp"
#include "UDecalComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "USceneComponent.hpp"
float UDecalComponent::GetMinDrawDistance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DecalComponent.GetMinDrawDistance"));
    struct Params_GetMinDrawDistance {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMinDrawDistance params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UDecalComponent* UDecalComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DecalComponent");
    return (UDecalComponent*)res;
}
void UDecalComponent::SetFadeScreenSize(float NewFadeScreenSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DecalComponent.SetFadeScreenSize"));
    struct Params_SetFadeScreenSize {
        float NewFadeScreenSize; // 0x0
    }; // Size: 0x4
    Params_SetFadeScreenSize params{};
    params.NewFadeScreenSize = (float)NewFadeScreenSize;
    ProcessEvent(func, &params);
}
UMaterialInterface* UDecalComponent::GetDecalMaterial() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DecalComponent.GetDecalMaterial"));
    struct Params_GetDecalMaterial {
        UMaterialInterface* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDecalMaterial params{};
    ProcessEvent(func, &params);
    return (UMaterialInterface*)params.ReturnValue;
}
void UDecalComponent::SetSortOrder(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DecalComponent.SetSortOrder"));
    struct Params_SetSortOrder {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_SetSortOrder params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UDecalComponent::SetDecalMaterial(UMaterialInterface* NewDecalMaterial) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DecalComponent.SetDecalMaterial"));
    struct Params_SetDecalMaterial {
        UMaterialInterface* NewDecalMaterial; // 0x0
    }; // Size: 0x8
    Params_SetDecalMaterial params{};
    params.NewDecalMaterial = (UMaterialInterface*)NewDecalMaterial;
    ProcessEvent(func, &params);
}
void UDecalComponent::SetFadeOut(float StartDelay, float Duration, bool DestroyOwnerAfterFade) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DecalComponent.SetFadeOut"));
    struct Params_SetFadeOut {
        float StartDelay; // 0x0
        float Duration; // 0x4
        bool DestroyOwnerAfterFade; // 0x8
    }; // Size: 0x9
    Params_SetFadeOut params{};
    params.StartDelay = (float)StartDelay;
    params.Duration = (float)Duration;
    params.DestroyOwnerAfterFade = (bool)DestroyOwnerAfterFade;
    ProcessEvent(func, &params);
}
void UDecalComponent::SetMinDrawDistance(float NewMinDrawDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DecalComponent.SetMinDrawDistance"));
    struct Params_SetMinDrawDistance {
        float NewMinDrawDistance; // 0x0
    }; // Size: 0x4
    Params_SetMinDrawDistance params{};
    params.NewMinDrawDistance = (float)NewMinDrawDistance;
    ProcessEvent(func, &params);
}
void UDecalComponent::SetFadeIn(float StartDelay, float Duaration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DecalComponent.SetFadeIn"));
    struct Params_SetFadeIn {
        float StartDelay; // 0x0
        float Duaration; // 0x4
    }; // Size: 0x8
    Params_SetFadeIn params{};
    params.StartDelay = (float)StartDelay;
    params.Duaration = (float)Duaration;
    ProcessEvent(func, &params);
}
float UDecalComponent::GetFadeStartDelay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DecalComponent.GetFadeStartDelay"));
    struct Params_GetFadeStartDelay {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFadeStartDelay params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UDecalComponent::GetFadeInStartDelay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DecalComponent.GetFadeInStartDelay"));
    struct Params_GetFadeInStartDelay {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFadeInStartDelay params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UDecalComponent::GetFadeInDuration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DecalComponent.GetFadeInDuration"));
    struct Params_GetFadeInDuration {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFadeInDuration params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UDecalComponent::GetFadeDuration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DecalComponent.GetFadeDuration"));
    struct Params_GetFadeDuration {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFadeDuration params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UMaterialInstanceDynamic* UDecalComponent::CreateDynamicMaterialInstance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DecalComponent.CreateDynamicMaterialInstance"));
    struct Params_CreateDynamicMaterialInstance {
        UMaterialInstanceDynamic* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_CreateDynamicMaterialInstance params{};
    ProcessEvent(func, &params);
    return (UMaterialInstanceDynamic*)params.ReturnValue;
}
