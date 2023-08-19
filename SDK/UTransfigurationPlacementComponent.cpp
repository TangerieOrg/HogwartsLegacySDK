#include "FTransform.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UPhysicsHandleComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "UTransfigurationPlacementComponent.hpp"
UTransfigurationPlacementComponent* UTransfigurationPlacementComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransfigurationPlacementComponent");
    return (UTransfigurationPlacementComponent*)res;
}
void UTransfigurationPlacementComponent::SetTargetTransform(FTransform InTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPlacementComponent.SetTargetTransform"));
    struct Params_SetTargetTransform {
        FTransform InTransform; // 0x0
    }; // Size: 0x30
    Params_SetTargetTransform params{};
    params.InTransform = (FTransform)InTransform;
    ProcessEvent(func, &params);
}
void UTransfigurationPlacementComponent::GrabComponent(UPrimitiveComponent* InComponent, FName InBoneName, FVector InGrabLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPlacementComponent.GrabComponent"));
    struct Params_GrabComponent {
        UPrimitiveComponent* InComponent; // 0x0
        FName InBoneName; // 0x8
        FVector InGrabLocation; // 0x10
    }; // Size: 0x1c
    Params_GrabComponent params{};
    params.InComponent = (UPrimitiveComponent*)InComponent;
    params.InBoneName = (FName)InBoneName;
    params.InGrabLocation = (FVector)InGrabLocation;
    ProcessEvent(func, &params);
}
FTransform UTransfigurationPlacementComponent::GetTargetTransform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPlacementComponent.GetTargetTransform"));
    struct Params_GetTargetTransform {
        FTransform ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetTargetTransform params{};
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
