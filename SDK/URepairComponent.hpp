#pragma once
#include <cstdint>
#include "EFieldFalloffType.hpp"
#include "FObservedComponent.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
class UGeometryCollection;
class UStaticMeshComponent;
class AFieldSystemActor;
class UGeometryCollectionComponent;
class UMultiFX2_Base;
class UPrimitiveComponent;
class AActor;
class URepairInfo;
struct FHitResult;
struct FChaosPhysicsCollisionInfo;
struct FChaosRemovalCompletedEvent;
struct FChaosBreakEvent;
#pragma pack(push, 1)
class URepairComponent : public UActorComponent {
public:
    char pad_c8[0x118];
    AFieldSystemActor* AnchorActor; // 0x1e0
    UGeometryCollectionComponent* GeometryCollectionComponent; // 0x1e8
    char pad_1f0[0x8];
    TArray<UMultiFX2_Base*> DestroyFX2; // 0x1f8
    TArray<UMultiFX2_Base*> ObjectFX2; // 0x208
    char pad_218[0x98];
    TArray<UPrimitiveComponent*> m_chunkParticleArray; // 0x2b0
    char pad_2c0[0xc0];
    TArray<AActor*> m_childActors; // 0x380
    char pad_390[0x10];
    TArray<UPrimitiveComponent*> m_childParticleArray; // 0x3a0
    char pad_3b0[0x50];
    UStaticMeshComponent* DestroyedBaseMesh; // 0x400
    UGeometryCollection* GeometryCollection; // 0x408
    char pad_410[0x28];
    URepairInfo* RepairInfo; // 0x438
    char pad_440[0x80];
    FObservedComponent ObservedComponent; // 0x4c0
    char pad_5b0[0x20];
    static URepairComponent* StaticClass();
    void OnRepairComplete__DelegateSignature(UActorComponent* RepairDestroyComp);
    void OnHitCallback(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit);
    void OnChaosPhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo);
    void HandleRemovalCompletedEvent(FChaosRemovalCompletedEvent& RemovalCompletedEvent);
    void HandleBreakEvent(FChaosBreakEvent& BreakEvent);
    void EntireRepairComplete();
    void ApplyDestuctiveForce(FVector& HitLocation, FVector& HitDirection, float Radius, float ObjectStrain, float ImpulseStrength, float RadialImpulseStrength, float AngularForceMultiplier);
    void AddRadialImpulse(FVector Location, float Radius, float Strength, float AngularForceMultiplier, EFieldFalloffType Falloff, bool bVelChange);
    void AddImpulse(FVector Impulse, FVector ImpulseLocation, float Radius, float AngularForceMultiplier, EFieldFalloffType Falloff, bool bVelChange);
}; // Size: 0x5d0
#pragma pack(pop)
