#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UMovementComponent.hpp"
struct FHitResult;
class USceneComponent;
struct FRotator;
#pragma pack(push, 1)
class UProjectileMovementComponent : public UMovementComponent {
public:
    float InitialSpeed; // 0x108
    float MaxSpeed; // 0x10c
    uint8_t bRotationFollowsVelocity : 1; // 0x110
    uint8_t bRotationRemainsVertical : 1; // 0x110
    uint8_t bShouldBounce : 1; // 0x110
    uint8_t bInitialVelocityInLocalSpace : 1; // 0x110
    uint8_t bForceSubStepping : 1; // 0x110
    uint8_t bSimulationEnabled : 1; // 0x110
    uint8_t bSweepCollision : 1; // 0x110
    uint8_t bIsHomingProjectile : 1; // 0x110
    uint8_t bBounceAngleAffectsFriction : 1; // 0x111
    uint8_t bIsSliding : 1; // 0x111
    uint8_t bInterpMovement : 1; // 0x111
    uint8_t bInterpRotation : 1; // 0x111
    uint8_t pad_bitfield_111_4 : 4;
    char pad_112[0x2];
    float PreviousHitTime; // 0x114
    FVector PreviousHitNormal; // 0x118
    float ProjectileGravityScale; // 0x124
    float Buoyancy; // 0x128
    float Bounciness; // 0x12c
    float Friction; // 0x130
    float BounceVelocityStopSimulatingThreshold; // 0x134
    float MinFrictionFraction; // 0x138
    char pad_13c[0x24];
    float HomingAccelerationMagnitude; // 0x160
    char pad_164[0x8];
    float MaxSimulationTimeStep; // 0x16c
    int32_t MaxSimulationIterations; // 0x170
    int32_t BounceAdditionalIterations; // 0x174
    float InterpLocationTime; // 0x178
    float InterpRotationTime; // 0x17c
    float InterpLocationMaxLagDistance; // 0x180
    float InterpLocationSnapToTargetDistance; // 0x184
    char pad_188[0x68];
    static UProjectileMovementComponent* StaticClass();
    void StopSimulating(FHitResult& HitResult);
    void SetVelocityInLocalSpace(FVector NewVelocity);
    void SetInterpolatedComponent(USceneComponent* Component);
    void ResetInterpolation();
    void OnProjectileStopDelegate__DelegateSignature(FHitResult& ImpactResult);
    void OnProjectileBounceDelegate__DelegateSignature(FHitResult& ImpactResult, FVector& ImpactVelocity);
    void MoveInterpolationTarget(FVector& NewLocation, FRotator& NewRotation);
    FVector LimitVelocity(FVector NewVelocity);
    bool IsVelocityUnderSimulationThreshold();
    bool IsInterpolationComplete();
}; // Size: 0x1f0
#pragma pack(pop)
