#include "FGameplayTagContainer.hpp"
#include "FTransform.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "UShapeComponent.hpp"
#include "USplineComponent.hpp"
#include "UWorldEventSocketComponent.hpp"
USplineComponent* UWorldEventSocketComponent::GetSplineComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventSocketComponent.GetSplineComponent"));
    struct Params_GetSplineComponent {
        USplineComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSplineComponent params{};
    ProcessEvent(func, &params);
    return (USplineComponent*)params.ReturnValue;
}
UWorldEventSocketComponent* UWorldEventSocketComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldEventSocketComponent");
    return (UWorldEventSocketComponent*)res;
}
void UWorldEventSocketComponent::SetSocketOccupied(bool bInOccupied) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventSocketComponent.SetSocketOccupied"));
    struct Params_SetSocketOccupied {
        bool bInOccupied; // 0x0
    }; // Size: 0x1
    Params_SetSocketOccupied params{};
    params.bInOccupied = (bool)bInOccupied;
    ProcessEvent(func, &params);
}
bool UWorldEventSocketComponent::IsSocketOccupied() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventSocketComponent.IsSocketOccupied"));
    struct Params_IsSocketOccupied {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSocketOccupied params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FGameplayTagContainer UWorldEventSocketComponent::GetSocketDescriptors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventSocketComponent.GetSocketDescriptors"));
    struct Params_GetSocketDescriptors {
        FGameplayTagContainer ReturnValue; // 0x0
    }; // Size: 0x20
    Params_GetSocketDescriptors params{};
    ProcessEvent(func, &params);
    return (FGameplayTagContainer)params.ReturnValue;
}
void UWorldEventSocketComponent::Construct(FTransform& Transform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventSocketComponent.Construct"));
    struct Params_Construct {
        FTransform Transform; // 0x0
    }; // Size: 0x30
    Params_Construct params{};
    params.Transform = (FTransform)Transform;
    ProcessEvent(func, &params);
    Transform = params.Transform;
}
UShapeComponent* UWorldEventSocketComponent::GetShapeComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventSocketComponent.GetShapeComponent"));
    struct Params_GetShapeComponent {
        UShapeComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetShapeComponent params{};
    ProcessEvent(func, &params);
    return (UShapeComponent*)params.ReturnValue;
}
