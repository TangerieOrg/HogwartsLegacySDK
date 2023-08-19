#include "AActor.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UAmbulatory_MovementComponent.hpp"
#include "UFunction.hpp"
#include "UObjectStateInfo.hpp"
#include "UScheduledEntity.hpp"
#include "UVelocityTrackerComponent.hpp"
void UVelocityTrackerComponent::VelocityTrackerRemoved__DelegateSignature(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.VelocityTrackerComponent.VelocityTrackerRemoved__DelegateSignature"));
    struct Params_VelocityTrackerRemoved__DelegateSignature {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_VelocityTrackerRemoved__DelegateSignature params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
UVelocityTrackerComponent* UVelocityTrackerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.VelocityTrackerComponent");
    return (UVelocityTrackerComponent*)res;
}
void UVelocityTrackerComponent::SetMaintainVelocity(FVector Velocity, float Time) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VelocityTrackerComponent.SetMaintainVelocity"));
    struct Params_SetMaintainVelocity {
        FVector Velocity; // 0x0
        float Time; // 0xc
    }; // Size: 0x10
    Params_SetMaintainVelocity params{};
    params.Velocity = (FVector)Velocity;
    params.Time = (float)Time;
    ProcessEvent(func, &params);
}
void UVelocityTrackerComponent::SetLastVelocity(FVector Vel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VelocityTrackerComponent.SetLastVelocity"));
    struct Params_SetLastVelocity {
        FVector Vel; // 0x0
    }; // Size: 0xc
    Params_SetLastVelocity params{};
    params.Vel = (FVector)Vel;
    ProcessEvent(func, &params);
}
void UVelocityTrackerComponent::SetInstigator(AActor* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VelocityTrackerComponent.SetInstigator"));
    struct Params_SetInstigator {
        AActor* InInstigator; // 0x0
    }; // Size: 0x8
    Params_SetInstigator params{};
    params.InInstigator = (AActor*)InInstigator;
    ProcessEvent(func, &params);
}
void UVelocityTrackerComponent::SetComponentLifetime(float Seconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VelocityTrackerComponent.SetComponentLifetime"));
    struct Params_SetComponentLifetime {
        float Seconds; // 0x0
    }; // Size: 0x4
    Params_SetComponentLifetime params{};
    params.Seconds = (float)Seconds;
    ProcessEvent(func, &params);
}
void UVelocityTrackerComponent::ResetComponentLifetime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VelocityTrackerComponent.ResetComponentLifetime"));
    struct Params_ResetComponentLifetime {
    }; // Size: 0x0
    Params_ResetComponentLifetime params{};
    ProcessEvent(func, &params);
}
AActor* UVelocityTrackerComponent::GetInstigator() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VelocityTrackerComponent.GetInstigator"));
    struct Params_GetInstigator {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetInstigator params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void UVelocityTrackerComponent::RemoveWhenStopped(bool Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VelocityTrackerComponent.RemoveWhenStopped"));
    struct Params_RemoveWhenStopped {
        bool Value; // 0x0
    }; // Size: 0x1
    Params_RemoveWhenStopped params{};
    params.Value = (bool)Value;
    ProcessEvent(func, &params);
}
void UVelocityTrackerComponent::OnFleshDestroyed(AActor* InActor, UScheduledEntity* InScheduledEntity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VelocityTrackerComponent.OnFleshDestroyed"));
    struct Params_OnFleshDestroyed {
        AActor* InActor; // 0x0
        UScheduledEntity* InScheduledEntity; // 0x8
    }; // Size: 0x10
    Params_OnFleshDestroyed params{};
    params.InActor = (AActor*)InActor;
    params.InScheduledEntity = (UScheduledEntity*)InScheduledEntity;
    ProcessEvent(func, &params);
}
