#pragma once
#include <cstdint>
#include "FAuthoredImpact.hpp"
#include "FFloatRange.hpp"
#include "FGameplayTagContainer.hpp"
#include "FGetupAnimationProfile.hpp"
#include "FPhysicsForceAndTorquePD.hpp"
#include "UDataAsset.hpp"
class UClass;
#pragma pack(push, 1)
class URagdollControlConfig : public UDataAsset {
public:
    FName RagdollMeshCollisionProfile; // 0x30
    FName RagdollMeshCollisionProfileAlive; // 0x38
    FName RagdollCapsuleCollisionProfile; // 0x40
    FName NonRagdollMeshCollisionProfile; // 0x48
    FName NonRagdollCapsuleCollisionProfile; // 0x50
    FName BakedRagdollCollisionProfile; // 0x58
    FName BakedMeshCollisionProfile; // 0x60
    char pad_68[0x50];
    float TargetPoseInterpSpeed; // 0xb8
    bool bCcdAlwaysOn; // 0xbc
    bool bSweepCapsule; // 0xbd
    bool bAdjustConstraintsToTargetPose; // 0xbe
    char pad_bf[0x51];
    float ArtificialGravityScale; // 0x110
    char pad_114[0x4];
    TArray<FAuthoredImpact> AuthoredImpacts; // 0x118
    TArray<FName> BodiesForPoseMatching; // 0x128
    float GetupBlendDuration; // 0x138
    float GetupBlendDelay; // 0x13c
    float InWaterRecoveryDelay; // 0x140
    bool bCanGetupFromGround; // 0x144
    bool bCanRecoverInAir; // 0x145
    char pad_146[0x2];
    float MinGetupBlendVelocity; // 0x148
    float MinGetupBlendAngularVelocity; // 0x14c
    float GroundDetectionRaycastDistance; // 0x150
    char pad_154[0x4];
    TArray<FGetupAnimationProfile> GetupAnimationProfiles; // 0x158
    TArray<FGameplayTagContainer> GetupAnimationTags; // 0x168
    bool bPhysicsHovering; // 0x178
    char pad_179[0x3];
    FPhysicsForceAndTorquePD HoverForces; // 0x17c
    float HoverGravityCompensation; // 0x1a0
    char pad_1a4[0xa4];
    bool bMonitorCenterOfMassForImpacts; // 0x248
    char pad_249[0x3];
    FFloatRange ImpactImpulseRange; // 0x24c
    char pad_25c[0x4];
    UClass* ImpactCameraShake; // 0x260
    float ImpactCameraShakeScale; // 0x268
    FFloatRange ImpactCameraShakeRadiusRange; // 0x26c
    bool bBlendToKinematic; // 0x27c
    bool bSyncCapsule; // 0x27d
    bool bDebugDrawImpacts; // 0x27e
    bool bDebugDrawTargetPose; // 0x27f
    bool bDebugDrawPoseMatching; // 0x280
    bool bDebugDrawBlends; // 0x281
    char pad_282[0x6];
    static URagdollControlConfig* StaticClass();
}; // Size: 0x288
#pragma pack(pop)
