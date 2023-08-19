#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
#include "UShapeComponent.hpp"
UCapsuleComponent* UCapsuleComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CapsuleComponent");
    return (UCapsuleComponent*)res;
}
void UCapsuleComponent::SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CapsuleComponent.SetCapsuleSize"));
    struct Params_SetCapsuleSize {
        float InRadius; // 0x0
        float InHalfHeight; // 0x4
        bool bUpdateOverlaps; // 0x8
    }; // Size: 0x9
    Params_SetCapsuleSize params{};
    params.InRadius = (float)InRadius;
    params.InHalfHeight = (float)InHalfHeight;
    params.bUpdateOverlaps = (bool)bUpdateOverlaps;
    ProcessEvent(func, &params);
}
float UCapsuleComponent::GetUnscaledCapsuleRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CapsuleComponent.GetUnscaledCapsuleRadius"));
    struct Params_GetUnscaledCapsuleRadius {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetUnscaledCapsuleRadius params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UCapsuleComponent::SetCapsuleRadius(float Radius, bool bUpdateOverlaps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CapsuleComponent.SetCapsuleRadius"));
    struct Params_SetCapsuleRadius {
        float Radius; // 0x0
        bool bUpdateOverlaps; // 0x4
    }; // Size: 0x5
    Params_SetCapsuleRadius params{};
    params.Radius = (float)Radius;
    params.bUpdateOverlaps = (bool)bUpdateOverlaps;
    ProcessEvent(func, &params);
}
float UCapsuleComponent::GetUnscaledCapsuleHalfHeight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CapsuleComponent.GetUnscaledCapsuleHalfHeight"));
    struct Params_GetUnscaledCapsuleHalfHeight {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetUnscaledCapsuleHalfHeight params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UCapsuleComponent::SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CapsuleComponent.SetCapsuleHalfHeight"));
    struct Params_SetCapsuleHalfHeight {
        float HalfHeight; // 0x0
        bool bUpdateOverlaps; // 0x4
    }; // Size: 0x5
    Params_SetCapsuleHalfHeight params{};
    params.HalfHeight = (float)HalfHeight;
    params.bUpdateOverlaps = (bool)bUpdateOverlaps;
    ProcessEvent(func, &params);
}
void UCapsuleComponent::GetUnscaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CapsuleComponent.GetUnscaledCapsuleSize_WithoutHemisphere"));
    struct Params_GetUnscaledCapsuleSize_WithoutHemisphere {
        float OutRadius; // 0x0
        float OutHalfHeightWithoutHemisphere; // 0x4
    }; // Size: 0x8
    Params_GetUnscaledCapsuleSize_WithoutHemisphere params{};
    params.OutRadius = (float)OutRadius;
    params.OutHalfHeightWithoutHemisphere = (float)OutHalfHeightWithoutHemisphere;
    ProcessEvent(func, &params);
    OutRadius = params.OutRadius;
    OutHalfHeightWithoutHemisphere = params.OutHalfHeightWithoutHemisphere;
}
void UCapsuleComponent::GetUnscaledCapsuleSize(float& OutRadius, float& OutHalfHeight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CapsuleComponent.GetUnscaledCapsuleSize"));
    struct Params_GetUnscaledCapsuleSize {
        float OutRadius; // 0x0
        float OutHalfHeight; // 0x4
    }; // Size: 0x8
    Params_GetUnscaledCapsuleSize params{};
    params.OutRadius = (float)OutRadius;
    params.OutHalfHeight = (float)OutHalfHeight;
    ProcessEvent(func, &params);
    OutRadius = params.OutRadius;
    OutHalfHeight = params.OutHalfHeight;
}
float UCapsuleComponent::GetUnscaledCapsuleHalfHeight_WithoutHemisphere() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CapsuleComponent.GetUnscaledCapsuleHalfHeight_WithoutHemisphere"));
    struct Params_GetUnscaledCapsuleHalfHeight_WithoutHemisphere {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetUnscaledCapsuleHalfHeight_WithoutHemisphere params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UCapsuleComponent::GetShapeScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CapsuleComponent.GetShapeScale"));
    struct Params_GetShapeScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetShapeScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UCapsuleComponent::GetScaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CapsuleComponent.GetScaledCapsuleSize_WithoutHemisphere"));
    struct Params_GetScaledCapsuleSize_WithoutHemisphere {
        float OutRadius; // 0x0
        float OutHalfHeightWithoutHemisphere; // 0x4
    }; // Size: 0x8
    Params_GetScaledCapsuleSize_WithoutHemisphere params{};
    params.OutRadius = (float)OutRadius;
    params.OutHalfHeightWithoutHemisphere = (float)OutHalfHeightWithoutHemisphere;
    ProcessEvent(func, &params);
    OutRadius = params.OutRadius;
    OutHalfHeightWithoutHemisphere = params.OutHalfHeightWithoutHemisphere;
}
void UCapsuleComponent::GetScaledCapsuleSize(float& OutRadius, float& OutHalfHeight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CapsuleComponent.GetScaledCapsuleSize"));
    struct Params_GetScaledCapsuleSize {
        float OutRadius; // 0x0
        float OutHalfHeight; // 0x4
    }; // Size: 0x8
    Params_GetScaledCapsuleSize params{};
    params.OutRadius = (float)OutRadius;
    params.OutHalfHeight = (float)OutHalfHeight;
    ProcessEvent(func, &params);
    OutHalfHeight = params.OutHalfHeight;
    OutRadius = params.OutRadius;
}
float UCapsuleComponent::GetScaledCapsuleHalfHeight_WithoutHemisphere() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CapsuleComponent.GetScaledCapsuleHalfHeight_WithoutHemisphere"));
    struct Params_GetScaledCapsuleHalfHeight_WithoutHemisphere {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetScaledCapsuleHalfHeight_WithoutHemisphere params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UCapsuleComponent::GetScaledCapsuleRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CapsuleComponent.GetScaledCapsuleRadius"));
    struct Params_GetScaledCapsuleRadius {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetScaledCapsuleRadius params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UCapsuleComponent::GetScaledCapsuleHalfHeight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CapsuleComponent.GetScaledCapsuleHalfHeight"));
    struct Params_GetScaledCapsuleHalfHeight {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetScaledCapsuleHalfHeight params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
