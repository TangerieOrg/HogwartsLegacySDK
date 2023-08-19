#include "EShadowQualityLevels.hpp"
#include "FColor.hpp"
#include "FGuid.hpp"
#include "FLinearColor.hpp"
#include "UFunction.hpp"
#include "ULightComponentBase.hpp"
#include "USceneComponent.hpp"
ULightComponentBase* ULightComponentBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightComponentBase");
    return (ULightComponentBase*)res;
}
void ULightComponentBase::SetCastDeepShadow(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponentBase.SetCastDeepShadow"));
    struct Params_SetCastDeepShadow {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetCastDeepShadow params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void ULightComponentBase::SetCastRaytracedShadow(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponentBase.SetCastRaytracedShadow"));
    struct Params_SetCastRaytracedShadow {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetCastRaytracedShadow params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void ULightComponentBase::SetSamplesPerPixel(int32_t NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponentBase.SetSamplesPerPixel"));
    struct Params_SetSamplesPerPixel {
        int32_t NewValue; // 0x0
    }; // Size: 0x4
    Params_SetSamplesPerPixel params{};
    params.NewValue = (int32_t)NewValue;
    ProcessEvent(func, &params);
}
void ULightComponentBase::SetAffectReflection(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponentBase.SetAffectReflection"));
    struct Params_SetAffectReflection {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetAffectReflection params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void ULightComponentBase::SetProjectShadow(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponentBase.SetProjectShadow"));
    struct Params_SetProjectShadow {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetProjectShadow params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void ULightComponentBase::SetAffectGlobalIllumination(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponentBase.SetAffectGlobalIllumination"));
    struct Params_SetAffectGlobalIllumination {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetAffectGlobalIllumination params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void ULightComponentBase::SetCastShadows(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponentBase.SetCastShadows"));
    struct Params_SetCastShadows {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetCastShadows params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void ULightComponentBase::SetCastVolumetricShadow(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponentBase.SetCastVolumetricShadow"));
    struct Params_SetCastVolumetricShadow {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetCastVolumetricShadow params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void ULightComponentBase::SetCastMovableCinematicShadows(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponentBase.SetCastMovableCinematicShadows"));
    struct Params_SetCastMovableCinematicShadows {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetCastMovableCinematicShadows params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
FLinearColor ULightComponentBase::GetLightColor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponentBase.GetLightColor"));
    struct Params_GetLightColor {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetLightColor params{};
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
bool ULightComponentBase::GetCastShadows() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponentBase.GetCastShadows"));
    struct Params_GetCastShadows {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCastShadows params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
