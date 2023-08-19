#pragma once
#include <cstdint>
#include "ECollisionTypeEnum.hpp"
#include "EInitialVelocityTypeEnum.hpp"
#include "EObjectStateTypeEnum.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
class UChaosPhysicalMaterial;
class AChaosSolverActor;
class UPhysicsAsset;
struct FChaosPhysicsCollisionInfo;
#pragma pack(push, 1)
class USkeletalMeshSimulationComponent : public UActorComponent {
public:
    char pad_c8[0x8];
    UChaosPhysicalMaterial* PhysicalMaterial; // 0xd0
    AChaosSolverActor* ChaosSolverActor; // 0xd8
    UPhysicsAsset* OverridePhysicsAsset; // 0xe0
    bool bSimulating; // 0xe8
    bool bNotifyCollisions; // 0xe9
    EObjectStateTypeEnum ObjectType; // 0xea
    char pad_eb[0x1];
    float Density; // 0xec
    float MinMass; // 0xf0
    float MaxMass; // 0xf4
    ECollisionTypeEnum CollisionType; // 0xf8
    char pad_f9[0x3];
    float ImplicitShapeParticlesPerUnitArea; // 0xfc
    int32_t ImplicitShapeMinNumParticles; // 0x100
    int32_t ImplicitShapeMaxNumParticles; // 0x104
    int32_t MinLevelSetResolution; // 0x108
    int32_t MaxLevelSetResolution; // 0x10c
    int32_t CollisionGroup; // 0x110
    EInitialVelocityTypeEnum InitialVelocityType; // 0x114
    char pad_115[0x3];
    FVector InitialLinearVelocity; // 0x118
    FVector InitialAngularVelocity; // 0x124
    char pad_130[0x20];
    static USkeletalMeshSimulationComponent* StaticClass();
    void ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo);
}; // Size: 0x150
#pragma pack(pop)
