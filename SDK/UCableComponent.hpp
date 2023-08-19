#pragma once
#include <cstdint>
#include "FComponentReference.hpp"
#include "FVector.hpp"
#include "UMeshComponent.hpp"
class USceneComponent;
class AActor;
#pragma pack(push, 1)
class UCableComponent : public UMeshComponent {
public:
    FComponentReference AttachEndTo; // 0x4b0
    FName AttachEndToSocketName; // 0x4d8
    FVector EndLocation; // 0x4e0
    float CableLength; // 0x4ec
    int32_t NumSegments; // 0x4f0
    float SubstepTime; // 0x4f4
    int32_t SolverIterations; // 0x4f8
    bool bEnableStiffness; // 0x4fc
    bool bUseSubstepping; // 0x4fd
    bool bSkipCableUpdateWhenNotVisible; // 0x4fe
    bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0x4ff
    bool bEnableCollision; // 0x500
    char pad_501[0x3];
    float CollisionFriction; // 0x504
    FVector CableForce; // 0x508
    float CableGravityScale; // 0x514
    float CableWidth; // 0x518
    int32_t NumSides; // 0x51c
    float TileMaterial; // 0x520
    char pad_524[0x1c];
    static UCableComponent* StaticClass();
    void SetAttachEndToComponent(USceneComponent* Component, FName SocketName);
    void SetAttachEndTo(AActor* Actor, FName ComponentProperty, FName SocketName);
    void GetCableParticleLocations(TArray<FVector>& Locations);
    USceneComponent* GetAttachedComponent();
    AActor* GetAttachedActor();
}; // Size: 0x540
#pragma pack(pop)
