#pragma once
#include <cstdint>
#include "ECollisionTypeEnum.hpp"
#include "EImplicitTypeEnum.hpp"
#include "EInitialVelocityTypeEnum.hpp"
#include "EObjectStateTypeEnum.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
class UChaosPhysicalMaterial;
class AChaosSolverActor;
class UPrimitiveComponent;
struct FChaosPhysicsCollisionInfo;
#pragma pack(push, 1)
class UStaticMeshSimulationComponent : public UActorComponent {
public:
    char pad_c8[0x8];
    bool Simulating; // 0xd0
    bool bNotifyCollisions; // 0xd1
    EObjectStateTypeEnum ObjectType; // 0xd2
    char pad_d3[0x1];
    float Mass; // 0xd4
    ECollisionTypeEnum CollisionType; // 0xd8
    EImplicitTypeEnum ImplicitType; // 0xd9
    char pad_da[0x2];
    int32_t MinLevelSetResolution; // 0xdc
    int32_t MaxLevelSetResolution; // 0xe0
    EInitialVelocityTypeEnum InitialVelocityType; // 0xe4
    char pad_e5[0x3];
    FVector InitialLinearVelocity; // 0xe8
    FVector InitialAngularVelocity; // 0xf4
    float DamageThreshold; // 0x100
    char pad_104[0x4];
    UChaosPhysicalMaterial* PhysicalMaterial; // 0x108
    AChaosSolverActor* ChaosSolverActor; // 0x110
    char pad_118[0x20];
    TArray<UPrimitiveComponent*> SimulatedComponents; // 0x138
    char pad_148[0x8];
    static UStaticMeshSimulationComponent* StaticClass();
    void ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo);
    void ForceRecreatePhysicsState();
}; // Size: 0x150
#pragma pack(pop)
