#include "FMercuna3DMovementProperties.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMercuna3DMovementComponent.hpp"
#include "UPawnMovementComponent.hpp"
UMercuna3DMovementComponent* UMercuna3DMovementComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna3DMovement.Mercuna3DMovementComponent");
    return (UMercuna3DMovementComponent*)res;
}
FVector UMercuna3DMovementComponent::GetLocalVelocity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna3DMovement.Mercuna3DMovementComponent.GetLocalVelocity"));
    struct Params_GetLocalVelocity {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetLocalVelocity params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UMercuna3DMovementComponent::SetVelocity(FVector NewVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna3DMovement.Mercuna3DMovementComponent.SetVelocity"));
    struct Params_SetVelocity {
        FVector NewVelocity; // 0x0
    }; // Size: 0xc
    Params_SetVelocity params{};
    params.NewVelocity = (FVector)NewVelocity;
    ProcessEvent(func, &params);
}
void UMercuna3DMovementComponent::SetAngularVelocity(FVector NewAngVel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna3DMovement.Mercuna3DMovementComponent.SetAngularVelocity"));
    struct Params_SetAngularVelocity {
        FVector NewAngVel; // 0x0
    }; // Size: 0xc
    Params_SetAngularVelocity params{};
    params.NewAngVel = (FVector)NewAngVel;
    ProcessEvent(func, &params);
}
FRotator UMercuna3DMovementComponent::GetLocalRotationRate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna3DMovement.Mercuna3DMovementComponent.GetLocalRotationRate"));
    struct Params_GetLocalRotationRate {
        FRotator ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetLocalRotationRate params{};
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
void UMercuna3DMovementComponent::AddImpulse(FVector Impulse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna3DMovement.Mercuna3DMovementComponent.AddImpulse"));
    struct Params_AddImpulse {
        FVector Impulse; // 0x0
    }; // Size: 0xc
    Params_AddImpulse params{};
    params.Impulse = (FVector)Impulse;
    ProcessEvent(func, &params);
}
