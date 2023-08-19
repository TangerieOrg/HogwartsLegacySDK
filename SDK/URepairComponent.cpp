#include "AActor.hpp"
#include "AFieldSystemActor.hpp"
#include "EFieldFalloffType.hpp"
#include "FChaosBreakEvent.hpp"
#include "FChaosPhysicsCollisionInfo.hpp"
#include "FChaosRemovalCompletedEvent.hpp"
#include "FHitResult.hpp"
#include "FObservedComponent.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UGeometryCollection.hpp"
#include "UGeometryCollectionComponent.hpp"
#include "UMultiFX2_Base.hpp"
#include "UPrimitiveComponent.hpp"
#include "URepairComponent.hpp"
#include "URepairInfo.hpp"
#include "UStaticMeshComponent.hpp"
URepairComponent* URepairComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RepairComponent");
    return (URepairComponent*)res;
}
void URepairComponent::HandleBreakEvent(FChaosBreakEvent& BreakEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RepairComponent.HandleBreakEvent"));
    struct Params_HandleBreakEvent {
        FChaosBreakEvent BreakEvent; // 0x0
    }; // Size: 0x30
    Params_HandleBreakEvent params{};
    params.BreakEvent = (FChaosBreakEvent)BreakEvent;
    ProcessEvent(func, &params);
    BreakEvent = params.BreakEvent;
}
void URepairComponent::OnRepairComplete__DelegateSignature(UActorComponent* RepairDestroyComp) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.RepairComponent.OnRepairComplete__DelegateSignature"));
    struct Params_OnRepairComplete__DelegateSignature {
        UActorComponent* RepairDestroyComp; // 0x0
    }; // Size: 0x8
    Params_OnRepairComplete__DelegateSignature params{};
    params.RepairDestroyComp = (UActorComponent*)RepairDestroyComp;
    ProcessEvent(func, &params);
}
void URepairComponent::OnHitCallback(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RepairComponent.OnHitCallback"));
    struct Params_OnHitCallback {
        UPrimitiveComponent* HitComp; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        FVector NormalImpulse; // 0x18
        FHitResult Hit; // 0x24
    }; // Size: 0xac
    Params_OnHitCallback params{};
    params.HitComp = (UPrimitiveComponent*)HitComp;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
void URepairComponent::EntireRepairComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RepairComponent.EntireRepairComplete"));
    struct Params_EntireRepairComplete {
    }; // Size: 0x0
    Params_EntireRepairComplete params{};
    ProcessEvent(func, &params);
}
void URepairComponent::OnChaosPhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RepairComponent.OnChaosPhysicsCollision"));
    struct Params_OnChaosPhysicsCollision {
        FChaosPhysicsCollisionInfo CollisionInfo; // 0x0
    }; // Size: 0x70
    Params_OnChaosPhysicsCollision params{};
    params.CollisionInfo = (FChaosPhysicsCollisionInfo)CollisionInfo;
    ProcessEvent(func, &params);
    CollisionInfo = params.CollisionInfo;
}
void URepairComponent::HandleRemovalCompletedEvent(FChaosRemovalCompletedEvent& RemovalCompletedEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RepairComponent.HandleRemovalCompletedEvent"));
    struct Params_HandleRemovalCompletedEvent {
        FChaosRemovalCompletedEvent RemovalCompletedEvent; // 0x0
    }; // Size: 0x8
    Params_HandleRemovalCompletedEvent params{};
    params.RemovalCompletedEvent = (FChaosRemovalCompletedEvent)RemovalCompletedEvent;
    ProcessEvent(func, &params);
    RemovalCompletedEvent = params.RemovalCompletedEvent;
}
void URepairComponent::ApplyDestuctiveForce(FVector& HitLocation, FVector& HitDirection, float Radius, float ObjectStrain, float ImpulseStrength, float RadialImpulseStrength, float AngularForceMultiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RepairComponent.ApplyDestuctiveForce"));
    struct Params_ApplyDestuctiveForce {
        FVector HitLocation; // 0x0
        FVector HitDirection; // 0xc
        float Radius; // 0x18
        float ObjectStrain; // 0x1c
        float ImpulseStrength; // 0x20
        float RadialImpulseStrength; // 0x24
        float AngularForceMultiplier; // 0x28
    }; // Size: 0x2c
    Params_ApplyDestuctiveForce params{};
    params.HitLocation = (FVector)HitLocation;
    params.HitDirection = (FVector)HitDirection;
    params.Radius = (float)Radius;
    params.ObjectStrain = (float)ObjectStrain;
    params.ImpulseStrength = (float)ImpulseStrength;
    params.RadialImpulseStrength = (float)RadialImpulseStrength;
    params.AngularForceMultiplier = (float)AngularForceMultiplier;
    ProcessEvent(func, &params);
    HitLocation = params.HitLocation;
    HitDirection = params.HitDirection;
}
void URepairComponent::AddRadialImpulse(FVector Location, float Radius, float Strength, float AngularForceMultiplier, EFieldFalloffType Falloff, bool bVelChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RepairComponent.AddRadialImpulse"));
    struct Params_AddRadialImpulse {
        FVector Location; // 0x0
        float Radius; // 0xc
        float Strength; // 0x10
        float AngularForceMultiplier; // 0x14
        EFieldFalloffType Falloff; // 0x18
        bool bVelChange; // 0x19
    }; // Size: 0x1a
    Params_AddRadialImpulse params{};
    params.Location = (FVector)Location;
    params.Radius = (float)Radius;
    params.Strength = (float)Strength;
    params.AngularForceMultiplier = (float)AngularForceMultiplier;
    params.Falloff = (EFieldFalloffType)Falloff;
    params.bVelChange = (bool)bVelChange;
    ProcessEvent(func, &params);
}
void URepairComponent::AddImpulse(FVector Impulse, FVector ImpulseLocation, float Radius, float AngularForceMultiplier, EFieldFalloffType Falloff, bool bVelChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RepairComponent.AddImpulse"));
    struct Params_AddImpulse {
        FVector Impulse; // 0x0
        FVector ImpulseLocation; // 0xc
        float Radius; // 0x18
        float AngularForceMultiplier; // 0x1c
        EFieldFalloffType Falloff; // 0x20
        bool bVelChange; // 0x21
    }; // Size: 0x22
    Params_AddImpulse params{};
    params.Impulse = (FVector)Impulse;
    params.ImpulseLocation = (FVector)ImpulseLocation;
    params.Radius = (float)Radius;
    params.AngularForceMultiplier = (float)AngularForceMultiplier;
    params.Falloff = (EFieldFalloffType)Falloff;
    params.bVelChange = (bool)bVelChange;
    ProcessEvent(func, &params);
}
