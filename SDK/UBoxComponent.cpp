#include "FVector.hpp"
#include "UBoxComponent.hpp"
#include "UFunction.hpp"
#include "UShapeComponent.hpp"
FVector UBoxComponent::GetScaledBoxExtent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BoxComponent.GetScaledBoxExtent"));
    struct Params_GetScaledBoxExtent {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetScaledBoxExtent params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UBoxComponent::SetBoxExtent(FVector InBoxExtent, bool bUpdateOverlaps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BoxComponent.SetBoxExtent"));
    struct Params_SetBoxExtent {
        FVector InBoxExtent; // 0x0
        bool bUpdateOverlaps; // 0xc
    }; // Size: 0xd
    Params_SetBoxExtent params{};
    params.InBoxExtent = (FVector)InBoxExtent;
    params.bUpdateOverlaps = (bool)bUpdateOverlaps;
    ProcessEvent(func, &params);
}
UBoxComponent* UBoxComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BoxComponent");
    return (UBoxComponent*)res;
}
FVector UBoxComponent::GetUnscaledBoxExtent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BoxComponent.GetUnscaledBoxExtent"));
    struct Params_GetUnscaledBoxExtent {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetUnscaledBoxExtent params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
