#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UActorComponent.hpp"
class UMultiFX2_Base;
class USkeletalMeshComponent;
struct FHitResult;
class ASuperSlamTarget;
class APhysicsConstraintActor;
class UPrimitiveComponent;
class AActor;
class UCurveVector;
#pragma pack(push, 1)
class USuperSlamFinisherComponent : public UActorComponent {
public:
    char pad_c8[0x8];
    TArray<UMultiFX2_Base*> HitFx; // 0xd0
    USkeletalMeshComponent* SkeletalMeshComp; // 0xe0
    ASuperSlamTarget* SuperSlamTarget; // 0xe8
    APhysicsConstraintActor* PhysicsConstraintActor; // 0xf0
    AActor* Instigator; // 0xf8
    UCurveVector* Curve; // 0x100
    char pad_108[0x88];
    static USuperSlamFinisherComponent* StaticClass();
    void HandleSkeletalMeshComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit);
}; // Size: 0x190
#pragma pack(pop)
