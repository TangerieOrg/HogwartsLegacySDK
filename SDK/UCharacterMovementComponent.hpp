#pragma once
#include <cstdint>
#include "EMovementMode.hpp"
#include "ENetworkSmoothingMode.hpp"
#include "FCharacterMovementComponentPostPhysicsTickFunction.hpp"
#include "FFindFloorResult.hpp"
#include "FNavAvoidanceMask.hpp"
#include "FQuat.hpp"
#include "FRootMotionMovementParams.hpp"
#include "FRootMotionSourceGroup.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UPawnMovementComponent.hpp"
class ACharacter;
class USceneComponent;
struct FHitResult;
class UPrimitiveComponent;
class AActor;
#pragma pack(push, 1)
class UCharacterMovementComponent : public UPawnMovementComponent {
public:
    char pad_150[0x10];
    ACharacter* CharacterOwner; // 0x160
    float GravityScale; // 0x168
    float MaxStepHeight; // 0x16c
    float JumpZVelocity; // 0x170
    float JumpOffJumpZFactor; // 0x174
    float WalkableFloorAngle; // 0x178
    float WalkableFloorZ; // 0x17c
    uint8_t bMovementModeIsManaged : 1; // 0x180
    uint8_t bMovementModeCalledFromManager : 1; // 0x180
    uint8_t pad_bitfield_180_2 : 6;
    EMovementMode MovementMode; // 0x181
    uint8_t CustomMovementMode; // 0x182
    ENetworkSmoothingMode NetworkSmoothingMode; // 0x183
    float GroundFriction; // 0x184
    char pad_188[0x24];
    float MaxWalkSpeed; // 0x1ac
    float MaxWalkSpeedCrouched; // 0x1b0
    float MaxSwimSpeed; // 0x1b4
    float MaxFlySpeed; // 0x1b8
    float MaxCustomMovementSpeed; // 0x1bc
    float MaxAcceleration; // 0x1c0
    float MinAnalogWalkSpeed; // 0x1c4
    float BrakingFrictionFactor; // 0x1c8
    float BrakingFriction; // 0x1cc
    float BrakingSubStepTime; // 0x1d0
    float BrakingDecelerationWalking; // 0x1d4
    float BrakingDecelerationFalling; // 0x1d8
    float BrakingDecelerationSwimming; // 0x1dc
    float BrakingDecelerationFlying; // 0x1e0
    float AirControl; // 0x1e4
    float AirControlBoostMultiplier; // 0x1e8
    float AirControlBoostVelocityThreshold; // 0x1ec
    float FallingLateralFriction; // 0x1f0
    float CrouchedHalfHeight; // 0x1f4
    float Buoyancy; // 0x1f8
    float PerchRadiusThreshold; // 0x1fc
    float PerchAdditionalHeight; // 0x200
    FRotator RotationRate; // 0x204
    uint8_t bUseSeparateBrakingFriction : 1; // 0x210
    uint8_t bApplyGravityWhileJumping : 1; // 0x210
    uint8_t bUseControllerDesiredRotation : 1; // 0x210
    uint8_t bOrientRotationToMovement : 1; // 0x210
    uint8_t bSweepWhileNavWalking : 1; // 0x210
    uint8_t pad_bitfield_210_5 : 1;
    uint8_t bMovementInProgress : 1; // 0x210
    uint8_t bEnableScopedMovementUpdates : 1; // 0x210
    uint8_t bEnableServerDualMoveScopedMovementUpdates : 1; // 0x211
    uint8_t bForceMaxAccel : 1; // 0x211
    uint8_t bRunPhysicsWithNoController : 1; // 0x211
    uint8_t bForceNextFloorCheck : 1; // 0x211
    uint8_t bShrinkProxyCapsule : 1; // 0x211
    uint8_t bCanWalkOffLedges : 1; // 0x211
    uint8_t bCanWalkOffLedgesWhenCrouching : 1; // 0x211
    uint8_t pad_bitfield_211_7 : 1;
    uint8_t pad_bitfield_212_0 : 1;
    uint8_t bNetworkSkipProxyPredictionOnNetUpdate : 1; // 0x212
    uint8_t bNetworkAlwaysReplicateTransformUpdateTimestamp : 1; // 0x212
    uint8_t bDeferUpdateMoveComponent : 1; // 0x212
    uint8_t bEnablePhysicsInteraction : 1; // 0x212
    uint8_t bTouchForceScaledToMass : 1; // 0x212
    uint8_t bPushForceScaledToMass : 1; // 0x212
    uint8_t bPushForceUsingZOffset : 1; // 0x212
    uint8_t bScalePushForceToVelocity : 1; // 0x213
    uint8_t pad_bitfield_213_1 : 7;
    char pad_214[0x4];
    USceneComponent* DeferredUpdatedMoveComponent; // 0x218
    float MaxOutOfWaterStepHeight; // 0x220
    float OutofWaterZ; // 0x224
    float Mass; // 0x228
    float StandingDownwardForceScale; // 0x22c
    float InitialPushForceFactor; // 0x230
    float PushForceFactor; // 0x234
    float PushForcePointZOffsetFactor; // 0x238
    float TouchForceFactor; // 0x23c
    float MinTouchForce; // 0x240
    float MaxTouchForce; // 0x244
    float RepulsionForce; // 0x248
    FVector Acceleration; // 0x24c
    char pad_258[0x8];
    FQuat LastUpdateRotation; // 0x260
    FVector LastUpdateLocation; // 0x270
    FVector LastUpdateVelocity; // 0x27c
    float ServerLastTransformUpdateTimeStamp; // 0x288
    float ServerLastClientGoodMoveAckTime; // 0x28c
    float ServerLastClientAdjustmentTime; // 0x290
    FVector PendingImpulseToApply; // 0x294
    FVector PendingForceToApply; // 0x2a0
    float AnalogInputModifier; // 0x2ac
    char pad_2b0[0xc];
    float MaxSimulationTimeStep; // 0x2bc
    int32_t MaxSimulationIterations; // 0x2c0
    int32_t MaxJumpApexAttemptsPerSimulation; // 0x2c4
    float MaxDepenetrationWithGeometry; // 0x2c8
    float MaxDepenetrationWithGeometryAsProxy; // 0x2cc
    float MaxDepenetrationWithPawn; // 0x2d0
    float MaxDepenetrationWithPawnAsProxy; // 0x2d4
    float NetworkSimulatedSmoothLocationTime; // 0x2d8
    float NetworkSimulatedSmoothRotationTime; // 0x2dc
    float ListenServerNetworkSimulatedSmoothLocationTime; // 0x2e0
    float ListenServerNetworkSimulatedSmoothRotationTime; // 0x2e4
    float NetProxyShrinkRadius; // 0x2e8
    float NetProxyShrinkHalfHeight; // 0x2ec
    float NetworkMaxSmoothUpdateDistance; // 0x2f0
    float NetworkNoSmoothUpdateDistance; // 0x2f4
    float NetworkMinTimeBetweenClientAckGoodMoves; // 0x2f8
    float NetworkMinTimeBetweenClientAdjustments; // 0x2fc
    float NetworkMinTimeBetweenClientAdjustmentsLargeCorrection; // 0x300
    float NetworkLargeClientCorrectionDistance; // 0x304
    float LedgeCheckThreshold; // 0x308
    float JumpOutOfWaterPitch; // 0x30c
    FFindFloorResult CurrentFloor; // 0x310
    EMovementMode DefaultLandMovementMode; // 0x3a4
    EMovementMode DefaultWaterMovementMode; // 0x3a5
    EMovementMode GroundMovementMode; // 0x3a6
    uint8_t bMaintainHorizontalGroundVelocity : 1; // 0x3a7
    uint8_t bImpartBaseVelocityX : 1; // 0x3a7
    uint8_t bImpartBaseVelocityY : 1; // 0x3a7
    uint8_t bImpartBaseVelocityZ : 1; // 0x3a7
    uint8_t bImpartBaseAngularVelocity : 1; // 0x3a7
    uint8_t bJustTeleported : 1; // 0x3a7
    uint8_t bNetworkUpdateReceived : 1; // 0x3a7
    uint8_t bNetworkMovementModeChanged : 1; // 0x3a7
    uint8_t bIgnoreClientMovementErrorChecksAndCorrection : 1; // 0x3a8
    uint8_t bServerAcceptClientAuthoritativePosition : 1; // 0x3a8
    uint8_t bNotifyApex : 1; // 0x3a8
    uint8_t bCheatFlying : 1; // 0x3a8
    uint8_t bWantsToCrouch : 1; // 0x3a8
    uint8_t bCrouchMaintainsBaseLocation : 1; // 0x3a8
    uint8_t bIgnoreBaseRotation : 1; // 0x3a8
    uint8_t bFastAttachedMove : 1; // 0x3a8
    uint8_t bAlwaysCheckFloor : 1; // 0x3a9
    uint8_t bUseFlatBaseForFloorChecks : 1; // 0x3a9
    uint8_t bPerformingJumpOff : 1; // 0x3a9
    uint8_t bWantsToLeaveNavWalking : 1; // 0x3a9
    uint8_t bUseRVOAvoidance : 1; // 0x3a9
    uint8_t bRequestedMoveUseAcceleration : 1; // 0x3a9
    uint8_t pad_bitfield_3a9_6 : 1;
    uint8_t bWasSimulatingRootMotion : 1; // 0x3a9
    uint8_t bAllowPhysicsRotationDuringAnimRootMotion : 1; // 0x3aa
    uint8_t bHasRequestedVelocity : 1; // 0x3aa
    uint8_t bRequestedMoveWithMaxSpeed : 1; // 0x3aa
    uint8_t bWasAvoidanceUpdated : 1; // 0x3aa
    uint8_t pad_bitfield_3aa_4 : 2;
    uint8_t bProjectNavMeshWalking : 1; // 0x3aa
    uint8_t bProjectNavMeshOnBothWorldChannels : 1; // 0x3aa
    char pad_3ab[0x11];
    float AvoidanceConsiderationRadius; // 0x3bc
    FVector RequestedVelocity; // 0x3c0
    int32_t AvoidanceUID; // 0x3cc
    FNavAvoidanceMask AvoidanceGroup; // 0x3d0
    FNavAvoidanceMask GroupsToAvoid; // 0x3d4
    FNavAvoidanceMask GroupsToIgnore; // 0x3d8
    float AvoidanceWeight; // 0x3dc
    FVector PendingLaunchVelocity; // 0x3e0
    char pad_3ec[0xa4];
    float NavMeshProjectionInterval; // 0x490
    float NavMeshProjectionTimer; // 0x494
    float NavMeshProjectionInterpSpeed; // 0x498
    float NavMeshProjectionHeightScaleUp; // 0x49c
    float NavMeshProjectionHeightScaleDown; // 0x4a0
    float NavWalkingFloorDistTolerance; // 0x4a4
    FCharacterMovementComponentPostPhysicsTickFunction PostPhysicsTickFunction; // 0x4a8
    char pad_4f0[0x18];
    float MinTimeBetweenTimeStampResets; // 0x508
    char pad_50c[0x4ac];
    FRootMotionSourceGroup CurrentRootMotion; // 0x9b8
    FRootMotionSourceGroup ServerCorrectionRootMotion; // 0x9f0
    char pad_a28[0x98];
    FRootMotionMovementParams RootMotionParams; // 0xac0
    FVector AnimRootMotionVelocity; // 0xb00
    char pad_b0c[0x24];
    static UCharacterMovementComponent* StaticClass();
    void SetWalkableFloorZ(float InWalkableFloorZ);
    void SetWalkableFloorAngle(float InWalkableFloorAngle);
    void SetMovementMode(EMovementMode NewMovementMode, uint8_t NewCustomMode);
    void SetGroupsToIgnoreMask(FNavAvoidanceMask& GroupMask);
    void SetGroupsToIgnore(int32_t GroupFlags);
    void SetGroupsToAvoidMask(FNavAvoidanceMask& GroupMask);
    void SetGroupsToAvoid(int32_t GroupFlags);
    void SetAvoidanceGroupMask(FNavAvoidanceMask& GroupMask);
    void SetAvoidanceGroup(int32_t GroupFlags);
    void SetAvoidanceEnabled(bool bEnable);
    float K2_GetWalkableFloorZ();
    float K2_GetWalkableFloorAngle();
    float K2_GetModifiedMaxAcceleration();
    void K2_FindFloor(FVector CapsuleLocation, FFindFloorResult& FloorResult);
    void K2_ComputeFloorDist(FVector CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, FFindFloorResult& FloorResult);
    bool IsWalking();
    bool IsWalkable(FHitResult& Hit);
    float GetValidPerchRadius();
    float GetPerchRadiusThreshold();
    UPrimitiveComponent* GetMovementBase();
    float GetMinAnalogSpeed();
    float GetMaxJumpHeightWithJumpTime();
    float GetMaxJumpHeight();
    float GetMaxBrakingDeceleration();
    float GetMaxAcceleration();
    FVector GetLastUpdateVelocity();
    FRotator GetLastUpdateRotation();
    FVector GetLastUpdateLocation();
    FVector GetImpartedMovementBaseVelocity();
    FVector GetCurrentAcceleration();
    ACharacter* GetCharacterOwner();
    float GetAnalogInputModifier();
    void DisableMovement();
    void ClearAccumulatedForces();
    void CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration);
    void AddImpulse(FVector Impulse, bool bVelocityChange);
    void AddForce(FVector Force);
}; // Size: 0xb30
#pragma pack(pop)
