#pragma once
#include <cstdint>
#include "APawn.hpp"
#include "EMovementMode.hpp"
#include "FBasedMovementInfo.hpp"
#include "FQuat.hpp"
#include "FRepRootMotionMontage.hpp"
#include "FRootMotionMovementParams.hpp"
#include "FRootMotionSourceGroup.hpp"
#include "FRotator.hpp"
#include "FSimulatedRootMotionReplicatedMove.hpp"
#include "FVector.hpp"
#include "FVector_NetQuantize10.hpp"
#include "FVector_NetQuantize100.hpp"
#include "FVector_NetQuantizeNormal.hpp"
class USkeletalMeshComponent;
class UCharacterMovementComponent;
struct FHitResult;
struct FCharacterMoveResponsePackedBits;
class UCapsuleComponent;
class UAnimMontage;
struct FCharacterServerMovePackedBits;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ACharacter : public APawn {
public:
    USkeletalMeshComponent* Mesh; // 0x2a8
    UCharacterMovementComponent* CharacterMovement; // 0x2b0
    UCapsuleComponent* CapsuleComponent; // 0x2b8
    FBasedMovementInfo BasedMovement; // 0x2c0
    FBasedMovementInfo ReplicatedBasedMovement; // 0x2f0
    float AnimRootMotionTranslationScale; // 0x320
    FVector BaseTranslationOffset; // 0x324
    FQuat BaseRotationOffset; // 0x330
    float ReplicatedServerLastTransformUpdateTimeStamp; // 0x340
    float ReplayLastTransformUpdateTimeStamp; // 0x344
    uint8_t ReplicatedMovementMode; // 0x348
    bool bInBaseReplication; // 0x349
    char pad_34a[0x2];
    float CrouchedEyeHeight; // 0x34c
    uint8_t bIsCrouched : 1; // 0x350
    uint8_t bProxyIsJumpForceApplied : 1; // 0x350
    uint8_t bPressedJump : 1; // 0x350
    uint8_t bClientUpdating : 1; // 0x350
    uint8_t bClientWasFalling : 1; // 0x350
    uint8_t bClientResimulateRootMotion : 1; // 0x350
    uint8_t bClientResimulateRootMotionSources : 1; // 0x350
    uint8_t bSimGravityDisabled : 1; // 0x350
    uint8_t bClientCheckEncroachmentOnNetUpdate : 1; // 0x351
    uint8_t bServerMoveIgnoreRootMotion : 1; // 0x351
    uint8_t bWasJumping : 1; // 0x351
    uint8_t pad_bitfield_351_3 : 5;
    char pad_352[0x2];
    float JumpKeyHoldTime; // 0x354
    float JumpForceTimeRemaining; // 0x358
    float ProxyJumpForceStartedTime; // 0x35c
    float JumpMaxHoldTime; // 0x360
    int32_t JumpMaxCount; // 0x364
    int32_t JumpCurrentCount; // 0x368
    int32_t JumpCurrentCountPreJump; // 0x36c
    char pad_370[0x48];
    FRootMotionSourceGroup SavedRootMotion; // 0x3b8
    FRootMotionMovementParams ClientRootMotionParams; // 0x3f0
    TArray<FSimulatedRootMotionReplicatedMove> RootMotionRepMoves; // 0x430
    FRepRootMotionMontage RepRootMotion; // 0x440
    char pad_4d8[0x8];
    static ACharacter* StaticClass();
    void UnCrouch(bool bClientSimulation);
    void StopJumping();
    void StopAnimMontage(UAnimMontage* AnimMontage);
    void ServerMovePacked(FCharacterServerMovePackedBits& PackedBits);
    void ServerMoveOld(float OldTimeStamp, FVector_NetQuantize10 OldAccel, uint8_t OldMoveFlags);
    void ServerMoveNoBase(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8_t CompressedMoveFlags, uint8_t ClientRoll, uint32_t View, uint8_t ClientMovementMode);
    void ServerMoveDualNoBase(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8_t PendingFlags, uint32_t View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8_t NewFlags, uint8_t ClientRoll, uint32_t View, uint8_t ClientMovementMode);
    void ServerMoveDualHybridRootMotion(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8_t PendingFlags, uint32_t View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8_t NewFlags, uint8_t ClientRoll, uint32_t View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8_t ClientMovementMode);
    void ServerMoveDual(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8_t PendingFlags, uint32_t View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8_t NewFlags, uint8_t ClientRoll, uint32_t View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8_t ClientMovementMode);
    void ServerMove(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8_t CompressedMoveFlags, uint8_t ClientRoll, uint32_t View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8_t ClientMovementMode);
    void RootMotionDebugClientPrintOnScreen(FString inString);
    float PlayAnimMontage(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName);
    void OnWalkingOffLedge(FVector& PreviousFloorImpactNormal, FVector& PreviousFloorContactNormal, FVector& PreviousLocation, float TimeDelta);
    void OnRep_RootMotion();
    void OnRep_ReplicatedBasedMovement();
    void OnRep_ReplayLastTransformUpdateTimeStamp();
    void OnRep_IsCrouched();
    void OnLaunched(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    void OnLanded(FHitResult& Hit);
    void OnJumped();
    void LaunchCharacter(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    void K2_UpdateCustomMovement(float DeltaTime);
    void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, uint8_t PrevCustomMode, uint8_t NewCustomMode);
    void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void Jump();
    bool IsPlayingRootMotion();
    bool IsPlayingNetworkedRootMotionMontage();
    bool IsJumpProvidingForce();
    bool HasAnyRootMotion();
    UAnimMontage* GetCurrentMontage();
    FVector GetBaseTranslationOffset();
    FRotator GetBaseRotationOffsetRotator();
    float GetAnimRootMotionTranslationScale();
    void Crouch(bool bClientSimulation);
    void ClientVeryShortAdjustPosition(float Timestamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8_t ServerMovementMode);
    void ClientMoveResponsePacked(FCharacterMoveResponsePackedBits& PackedBits);
    void ClientCheatWalk();
    void ClientCheatGhost();
    void ClientCheatFly();
    void ClientAdjustRootMotionSourcePosition(float Timestamp, FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8_t ServerMovementMode);
    void ClientAdjustRootMotionPosition(float Timestamp, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8_t ServerMovementMode);
    void ClientAdjustPosition(float Timestamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8_t ServerMovementMode);
    void ClientAckGoodMove(float Timestamp);
    bool CanJumpInternal();
    bool CanJump();
    bool CanCrouch();
    void CacheInitialMeshOffset(FVector MeshRelativeLocation, FRotator MeshRelativeRotation);
}; // Size: 0x4e0
#pragma pack(pop)
