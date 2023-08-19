#include "UFunction.hpp"
#include "UShapeComponent.hpp"
#include "USphereComponent.hpp"
void USphereComponent::SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SphereComponent.SetSphereRadius"));
    struct Params_SetSphereRadius {
        float InSphereRadius; // 0x0
        bool bUpdateOverlaps; // 0x4
    }; // Size: 0x5
    Params_SetSphereRadius params{};
    params.InSphereRadius = (float)InSphereRadius;
    params.bUpdateOverlaps = (bool)bUpdateOverlaps;
    ProcessEvent(func, &params);
}
USphereComponent* USphereComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SphereComponent");
    return (USphereComponent*)res;
}
float USphereComponent::GetUnscaledSphereRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SphereComponent.GetUnscaledSphereRadius"));
    struct Params_GetUnscaledSphereRadius {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetUnscaledSphereRadius params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float USphereComponent::GetShapeScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SphereComponent.GetShapeScale"));
    struct Params_GetShapeScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetShapeScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float USphereComponent::GetScaledSphereRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SphereComponent.GetScaledSphereRadius"));
    struct Params_GetScaledSphereRadius {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetScaledSphereRadius params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
