#pragma once
#include <cstdint>
#include "EPhysicalSurface.hpp"
#include "FAvaRootMotionWarper.hpp"
#include "FRotator.hpp"
#include "FSharedContinuousImpulseHelper.hpp"
#include "FVector.hpp"
#include "UAble_MovementComponent.hpp"
class UAblAbilityComponent;
class USkeletalMeshComponent;
#pragma pack(push, 1)
class UAmbulatory_MovementComponent : public UAble_MovementComponent {
public:
    char pad_b40[0x8];
    bool bOverridePhysWalking; // 0xb48
    bool bComputeDistanceToSurfaceWhenFalling; // 0xb49
    char pad_b4a[0x2];
    FVector WindVelocity; // 0xb4c
    float SuckHeight; // 0xb58
    bool bAllowTransitionalImpulse; // 0xb5c
    char pad_b5d[0x3];
    float AdditionalGravityScale; // 0xb60
    bool bUseNavMetricsForStepUp; // 0xb64
    bool bMitigateStuckFalling; // 0xb65
    bool bMitigateStuckPenetratingExtraMovementCapsule; // 0xb66
    bool bCanEverStepOutOfWater; // 0xb67
    bool bUseWaterSurfaceForStepUp; // 0xb68
    char pad_b69[0x3];
    float SwimDepth; // 0xb6c
    float WaterDepth; // 0xb70
    float WaterLevel; // 0xb74
    float FluidFriction; // 0xb78
    float WaterTerminalVelocity; // 0xb7c
    float FlowForceScale; // 0xb80
    bool bApplyMaxFlowForceLimit; // 0xb84
    char pad_b85[0x3];
    float MaxFlowForce; // 0xb88
    bool bDisableSurfaceAcceleration; // 0xb8c
    char pad_b8d[0x253];
    FAvaRootMotionWarper AvaRootMotionWarper; // 0xde0
    char pad_e58[0x10];
    UAblAbilityComponent* AbleAbilityComponent; // 0xe68
    USkeletalMeshComponent* SkeletalMeshComponent; // 0xe70
    FRotator AnimRootMotionAngularVelocity; // 0xe78
    char pad_e84[0x12c];
    static UAmbulatory_MovementComponent* StaticClass();
    void ZeroVelocity();
    void ZeroLinearVelocity();
    void UpdateSharedContinuousImpulse(FSharedContinuousImpulseHelper ImpulseContainer, FVector& InImpulse, bool bInIgnoreMass);
    FSharedContinuousImpulseHelper SetSharedContinuousLinearImpulse(FVector& InImpulse);
    void SetFrictionOverride(float InFrictionOverride);
    void SetFallImpulse(FVector& Impulse);
    void SetAllowTransitionalImpulse(bool bFlag);
    static void HermesBindSurfaceTypeChanged();
    float GetSurfaceIncline();
    FVector GetFallLineFlat();
    FVector GetFallLine();
    float GetFallAlongSurfaceDistance();
    EPhysicalSurface GetCurrentSurfaceType();
    FVector GetAdditiveToRootMotionVelocity();
    FVector ComputeSurfaceAccelerationDirection(bool& bFlatGround);
    void ClearTransitionalImpulse();
    void ClearSharedContinuousImpulse(FSharedContinuousImpulseHelper ImpulseContainer);
    void ClearLastSurfaceType();
    void ClearAdditiveToRootMotionVelocity();
    void AddToRootMotionVelocity(FVector InAdditiveToRootMotionVelocity);
}; // Size: 0xfb0
#pragma pack(pop)
