#pragma once
#include <cstdint>
#include "EAnimCurveType.hpp"
#include "EMontagePlayReturnType.hpp"
#include "ERootMotionMode\Type.hpp"
#include "ETeleportType.hpp"
#include "FAnimNotifyEvent.hpp"
#include "FAnimNotifyQueue.hpp"
#include "FMarkerSyncAnimPosition.hpp"
#include "UObject.hpp"
class UAnimMontage;
class USkeleton;
struct FPoseSnapshot;
class UClass;
class APawn;
class USkeletalMeshComponent;
class UAnimSequenceBase;
class AActor;
struct FVector;
struct FRotator;
#pragma pack(push, 1)
class UAnimInstance : public UObject {
public:
    USkeleton* CurrentSkeleton; // 0x28
    ERootMotionMode::Type RootMotionMode; // 0x30
    uint8_t bUseMultiThreadedAnimationUpdate : 1; // 0x31
    uint8_t bUsingCopyPoseFromMesh : 1; // 0x31
    uint8_t pad_bitfield_31_2 : 2;
    uint8_t bReceiveNotifiesFromLinkedInstances : 1; // 0x31
    uint8_t bPropagateNotifiesToLinkedInstances : 1; // 0x31
    uint8_t bQueueMontageEvents : 1; // 0x31
    uint8_t pad_bitfield_31_7 : 1;
    char pad_32[0xce];
    FAnimNotifyQueue NotifyQueue; // 0x100
    TArray<FAnimNotifyEvent> ActiveAnimNotifyState; // 0x170
    char pad_180[0x140];
    static UAnimInstance* StaticClass();
    void UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic);
    void UnlinkAnimClassLayers(UClass* InClass);
    APawn* TryGetPawnOwner();
    void StopSlotAnimation(float InBlendOutTime, FName SlotNodeName);
    void SnapshotPose(FPoseSnapshot& Snapshot);
    void SetRootMotionMode(ERootMotionMode::Type Value);
    void SetReceiveNotifiesFromLinkedInstances(bool bSet);
    void SetPropagateNotifiesToLinkedInstances(bool bSet);
    void SetMorphTarget(FName MorphTargetName, float Value);
    void SavePoseSnapshot(FName SnapshotName);
    void ResetDynamics(ETeleportType InTeleportType);
    UAnimMontage* PlaySlotAnimationAsDynamicMontage(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
    float PlaySlotAnimation(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount);
    void Montage_StopGroupByName(float InBlendOutTime, FName GroupName);
    void Montage_Stop(float InBlendOutTime, UAnimMontage* Montage);
    void Montage_SetPosition(UAnimMontage* Montage, float NewPosition);
    void Montage_SetPlayRate(UAnimMontage* Montage, float NewPlayRate);
    void Montage_SetNextSection(FName SectionNameToChange, FName NextSection, UAnimMontage* Montage);
    void Montage_Resume(UAnimMontage* Montage);
    float Montage_Play(UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages);
    void Montage_Pause(UAnimMontage* Montage);
    void Montage_JumpToSectionsEnd(FName SectionName, UAnimMontage* Montage);
    void Montage_JumpToSection(FName SectionName, UAnimMontage* Montage);
    bool Montage_IsPlaying(UAnimMontage* Montage);
    bool Montage_IsActive(UAnimMontage* Montage);
    float Montage_GetPosition(UAnimMontage* Montage);
    float Montage_GetPlayRate(UAnimMontage* Montage);
    bool Montage_GetIsStopped(UAnimMontage* Montage);
    FName Montage_GetCurrentSection(UAnimMontage* Montage);
    float Montage_GetBlendTime(UAnimMontage* Montage);
    void LockAIResources(bool bLockMovement, bool LockAILogic);
    void LinkAnimGraphByTag(FName InTag, UClass* InClass);
    void LinkAnimClassLayers(UClass* InClass);
    bool IsSyncGroupBetweenMarkers(FName InSyncGroupName, FName PreviousMarker, FName NextMarker, bool bRespectMarkerOrder);
    bool IsPlayingSlotAnimation(UAnimSequenceBase* Asset, FName SlotNodeName);
    bool IsAnyMontagePlaying();
    bool HasMarkerBeenHitThisFrame(FName SyncGroup, FName MarkerName);
    bool GetTimeToClosestMarker(FName SyncGroup, FName MarkerName, float& OutMarkerTime);
    FMarkerSyncAnimPosition GetSyncGroupPosition(FName InSyncGroupName);
    float GetRelevantAnimTimeRemainingFraction(int32_t MachineIndex, int32_t StateIndex);
    float GetRelevantAnimTimeRemaining(int32_t MachineIndex, int32_t StateIndex);
    float GetRelevantAnimTimeFraction(int32_t MachineIndex, int32_t StateIndex);
    float GetRelevantAnimTime(int32_t MachineIndex, int32_t StateIndex);
    float GetRelevantAnimLength(int32_t MachineIndex, int32_t StateIndex);
    bool GetReceiveNotifiesFromLinkedInstances();
    bool GetPropagateNotifiesToLinkedInstances();
    USkeletalMeshComponent* GetOwningComponent();
    AActor* GetOwningActor();
    void GetLinkedAnimLayerInstancesByGroup(FName InGroup, TArray<UAnimInstance*>& OutLinkedInstances);
    UAnimInstance* GetLinkedAnimLayerInstanceByGroupAndClass(FName InGroup, UClass* InClass);
    UAnimInstance* GetLinkedAnimLayerInstanceByGroup(FName InGroup);
    UAnimInstance* GetLinkedAnimLayerInstanceByClass(UClass* InClass);
    void GetLinkedAnimGraphInstancesByTag(FName InTag, TArray<UAnimInstance*>& OutLinkedInstances);
    UAnimInstance* GetLinkedAnimGraphInstanceByTag(FName InTag);
    float GetInstanceTransitionTimeElapsedFraction(int32_t MachineIndex, int32_t TransitionIndex);
    float GetInstanceTransitionTimeElapsed(int32_t MachineIndex, int32_t TransitionIndex);
    float GetInstanceTransitionCrossfadeDuration(int32_t MachineIndex, int32_t TransitionIndex);
    float GetInstanceStateWeight(int32_t MachineIndex, int32_t StateIndex);
    float GetInstanceMachineWeight(int32_t MachineIndex);
    float GetInstanceCurrentStateElapsedTime(int32_t MachineIndex);
    float GetInstanceAssetPlayerTimeFromEndFraction(int32_t AssetPlayerIndex);
    float GetInstanceAssetPlayerTimeFromEnd(int32_t AssetPlayerIndex);
    float GetInstanceAssetPlayerTimeFraction(int32_t AssetPlayerIndex);
    float GetInstanceAssetPlayerTime(int32_t AssetPlayerIndex);
    float GetInstanceAssetPlayerLength(int32_t AssetPlayerIndex);
    float GetCurveValue(FName CurveName);
    FName GetCurrentStateName(int32_t MachineIndex);
    UAnimMontage* GetCurrentActiveMontage();
    void GetAllCurveNames(TArray<FName>& OutNames);
    void GetActiveCurveNames(EAnimCurveType CurveType, TArray<FName>& OutNames);
    void ClearMorphTargets();
    float CalculateDirection(FVector& Velocity, FRotator& BaseRotation);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintPostEvaluateAnimation();
    void BlueprintLinkedAnimationLayersInitialized();
    void BlueprintInitializeAnimation();
    void BlueprintBeginPlay();
}; // Size: 0x2c0
#pragma pack(pop)
