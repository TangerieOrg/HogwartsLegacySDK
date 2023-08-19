#include "AActor.hpp"
#include "FComponentReference.hpp"
#include "FVector.hpp"
#include "UCableComponent.hpp"
#include "UFunction.hpp"
#include "UMeshComponent.hpp"
#include "USceneComponent.hpp"
UCableComponent* UCableComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/CableComponent.CableComponent");
    return (UCableComponent*)res;
}
void UCableComponent::SetAttachEndToComponent(USceneComponent* Component, FName SocketName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CableComponent.CableComponent.SetAttachEndToComponent"));
    struct Params_SetAttachEndToComponent {
        USceneComponent* Component; // 0x0
        FName SocketName; // 0x8
    }; // Size: 0x10
    Params_SetAttachEndToComponent params{};
    params.Component = (USceneComponent*)Component;
    params.SocketName = (FName)SocketName;
    ProcessEvent(func, &params);
}
USceneComponent* UCableComponent::GetAttachedComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CableComponent.CableComponent.GetAttachedComponent"));
    struct Params_GetAttachedComponent {
        USceneComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAttachedComponent params{};
    ProcessEvent(func, &params);
    return (USceneComponent*)params.ReturnValue;
}
void UCableComponent::SetAttachEndTo(AActor* Actor, FName ComponentProperty, FName SocketName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CableComponent.CableComponent.SetAttachEndTo"));
    struct Params_SetAttachEndTo {
        AActor* Actor; // 0x0
        FName ComponentProperty; // 0x8
        FName SocketName; // 0x10
    }; // Size: 0x18
    Params_SetAttachEndTo params{};
    params.Actor = (AActor*)Actor;
    params.ComponentProperty = (FName)ComponentProperty;
    params.SocketName = (FName)SocketName;
    ProcessEvent(func, &params);
}
void UCableComponent::GetCableParticleLocations(TArray<FVector>& Locations) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CableComponent.CableComponent.GetCableParticleLocations"));
    struct Params_GetCableParticleLocations {
        TArray<FVector> Locations; // 0x0
    }; // Size: 0x10
    Params_GetCableParticleLocations params{};
    params.Locations = (TArray<FVector>)Locations;
    ProcessEvent(func, &params);
    Locations = params.Locations;
}
AActor* UCableComponent::GetAttachedActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CableComponent.CableComponent.GetAttachedActor"));
    struct Params_GetAttachedActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAttachedActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
