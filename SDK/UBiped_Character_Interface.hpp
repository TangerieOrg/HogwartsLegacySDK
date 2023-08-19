#pragma once
#include <cstdint>
#include "EAdditiveBodyState\Type.hpp"
#include "EClimbingLedgeState\Type.hpp"
#include "ECustomInterpType\Type.hpp"
#include "EDynamicForceFeedbackAction\Type.hpp"
#include "EFullBodyState\Type.hpp"
#include "EJumpingType\Type.hpp"
#include "EParryState\Type.hpp"
#include "EPartialBodyState\Type.hpp"
#include "EReactionState\Type.hpp"
#include "ERightArmPriority\Type.hpp"
#include "ERightArmState\Type.hpp"
#include "FInventoryResult.hpp"
#include "FName_GameLogicVarInt32.hpp"
#include "FVector.hpp"
#include "UInterface.hpp"
class UCurveFloat;
class UClass;
class APawn;
class AActor;
struct FRotator;
class APickupTool;
class UStickFlickWatcherRecord;
class AWandTool;
class UPrimitiveComponent;
class USkeletalMeshComponent;
#pragma pack(push, 1)
class UBiped_Character_Interface : public UInterface {
public:
    static UBiped_Character_Interface* StaticClass();
    void UseInventoryItemByName(FName InventoryObjectID);
    void UnLockOnToActor();
    void UnEquipWand();
    void StopMove();
    APawn* SpawnStudent(UClass* StudentClass);
    AActor* SpawnLookAtTarget(UClass* SpawnActorClass);
    AActor* SpawnFaceTarget(UClass* SpawnActorClass);
    void SetSpellCastHandle(int32_t InSpellCastHandle);
    void SetRootMotionOffsets(FVector& TranslationOffset, FRotator& RotationOffset);
    void SetRootMotionOffset();
    void SetRightArmState(ERightArmState::Type InState, ERightArmPriority::Type InPriority, bool bBroadcastChange);
    void SetPickupTool(APickupTool* InPickupTool);
    void SetPhoenixCameraRotation(FRotator& DesiredRotation);
    void SetPhoenixCameraLookAt_TimeBased(FVector& LookAtPoint, float LookAtTime);
    void SetPhoenixCameraLookAt_ActorAndTime(AActor* LookAtActor, float LookAtTime);
    void SetPhoenixCameraLookAt_Actor(AActor* LookAtActor, float ScaleSpeed);
    void SetPhoenixCameraLookAt(FVector& LookAtPoint, float ScaleSpeed);
    void SetPartialBodyState(EPartialBodyState::Type& InState);
    void SetParryState(EParryState::Type& InState);
    void SetFullBodyStateLast(EFullBodyState::Type& InState);
    void SetFullBodyState(EFullBodyState::Type& InState);
    void SetFinisherOptimalRatio(float OptimalRatio, EDynamicForceFeedbackAction::Type FeedbackAction);
    void SetAdditiveBodyState(EAdditiveBodyState::Type& InState);
    void ResetPhoenixCameraRotation(float ResetSpeed, UCurveFloat* ResetSpeedCurve);
    void RequestStick(float StickX, float StickY);
    void RequestMove(float StickX, float StickY, float DeltaTime, float& Speed, float& Direction, float& LookAtDirection);
    void ReleasePhoenixCameraLookAt();
    void ReadyModeStop();
    void ReadyModeStart();
    bool QuickActionInteract();
    void PushDisableStack(FName_GameLogicVarInt32 StackName);
    bool ProcessStick(float StickX, float StickY, float DeltaTime, UCurveFloat* DeadZoneCurve, UCurveFloat* SpeedCurve, UCurveFloat* SpeedGovernorCurve, float& WorldSpeed, FVector& WorldDirection, ECustomInterpType::Type InterpType, float InterpSpeed, float StickMagReductionDelayTimer);
    void PopDisableStack(FName_GameLogicVarInt32 StackName);
    void PauseMenuStart();
    FName ParkourJump(FName DefaultNode);
    void LockOnToActor(AActor* InLockOnActor);
    void LockOnCamFlick(UStickFlickWatcherRecord* InStickFlickWatcherRecord);
    void LockOnCameraMoving(bool bFlag);
    bool IsInReadyMode();
    bool IsDead();
    bool InstaUseInventoryItem();
    bool InLockOnMode();
    AWandTool* GetWand();
    FVector GetToTargetDirection();
    FVector GetTargetDirection();
    FVector GetTargetDestination();
    UPrimitiveComponent* GetTargetComponent();
    FName GetTargetBoneName();
    void GetSpellCastHandle(int32_t& OutSpellCastHandle);
    UCurveFloat* GetSpeedGovernorCurve();
    UCurveFloat* GetSpeedCurve(bool& bIgnoreGovernor);
    USkeletalMeshComponent* GetSkeletalMesh();
    void GetRootMotionOffset(FVector& OutTranslationOffset);
    ERightArmState::Type GetRightArmState(ERightArmPriority::Type InPriority);
    float GetPutdownToolHeight();
    float GetPickupToolHeight();
    APickupTool* GetPickupTool();
    void GetPartialBodyState(EPartialBodyState::Type& OutState);
    void GetParryState(EParryState::Type& OutState);
    FInventoryResult GetInventoryResult();
    AActor* GetHighlitActor();
    void GetFullBodyStateLast(EFullBodyState::Type& OutState);
    void GetFullBodyState(EFullBodyState::Type& OutState);
    FVector GetBestLockOnActor_WorldLocation();
    FVector GetBestLockOnActor_ScreenLocation();
    AActor* GetBestLockOnActor();
    FVector GetBestAutoTargetActor_WorldLocation();
    AActor* GetBestAutoTargetActor();
    FVector GetAutoTargetUpDirection();
    FVector GetAutoTargetFocusDirection();
    void GetAdditiveBodyState(EAdditiveBodyState::Type& OutState);
    void FullyResetPhoenixCamera(float ResetSpeed, UCurveFloat* ResetSpeedCurve);
    void FlooStart();
    void EquipWand();
    void ComputeReaction(FVector HitLocation, FVector TraceDirection, FString OverrideName, EReactionState::Type& ReactionState);
    void ComputeAttack(AActor*& TargetActor);
    float ComputeAngleToDesiredDirection();
    void ClearStick();
    FVector CalculateLookAtDirection();
    void CalculateClimbingLedgeState(EClimbingLedgeState::Type& OutState, EJumpingType::Type& OutType);
}; // Size: 0x28
#pragma pack(pop)
