#include "AActor.hpp"
#include "APawn.hpp"
#include "EAnimCurveType.hpp"
#include "EMontagePlayReturnType.hpp"
#include "ERootMotionMode\Type.hpp"
#include "ETeleportType.hpp"
#include "FAnimNotifyEvent.hpp"
#include "FAnimNotifyQueue.hpp"
#include "FMarkerSyncAnimPosition.hpp"
#include "FPoseSnapshot.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAnimInstance.hpp"
#include "UAnimMontage.hpp"
#include "UAnimSequenceBase.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USkeleton.hpp"
UAnimInstance* UAnimInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimInstance");
    return (UAnimInstance*)res;
}
float UAnimInstance::GetRelevantAnimTimeRemaining(int32_t MachineIndex, int32_t StateIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetRelevantAnimTimeRemaining"));
    struct Params_GetRelevantAnimTimeRemaining {
        int32_t MachineIndex; // 0x0
        int32_t StateIndex; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetRelevantAnimTimeRemaining params{};
    params.MachineIndex = (int32_t)MachineIndex;
    params.StateIndex = (int32_t)StateIndex;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UAnimInstance::SetPropagateNotifiesToLinkedInstances(bool bSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.SetPropagateNotifiesToLinkedInstances"));
    struct Params_SetPropagateNotifiesToLinkedInstances {
        bool bSet; // 0x0
    }; // Size: 0x1
    Params_SetPropagateNotifiesToLinkedInstances params{};
    params.bSet = (bool)bSet;
    ProcessEvent(func, &params);
}
bool UAnimInstance::GetPropagateNotifiesToLinkedInstances() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetPropagateNotifiesToLinkedInstances"));
    struct Params_GetPropagateNotifiesToLinkedInstances {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPropagateNotifiesToLinkedInstances params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UAnimInstance* UAnimInstance::GetLinkedAnimLayerInstanceByGroup(FName InGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetLinkedAnimLayerInstanceByGroup"));
    struct Params_GetLinkedAnimLayerInstanceByGroup {
        FName InGroup; // 0x0
        UAnimInstance* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetLinkedAnimLayerInstanceByGroup params{};
    params.InGroup = (FName)InGroup;
    ProcessEvent(func, &params);
    return (UAnimInstance*)params.ReturnValue;
}
void UAnimInstance::UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.UnlockAIResources"));
    struct Params_UnlockAIResources {
        bool bUnlockMovement; // 0x0
        bool UnlockAILogic; // 0x1
    }; // Size: 0x2
    Params_UnlockAIResources params{};
    params.bUnlockMovement = (bool)bUnlockMovement;
    params.UnlockAILogic = (bool)UnlockAILogic;
    ProcessEvent(func, &params);
}
void UAnimInstance::SnapshotPose(FPoseSnapshot& Snapshot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.SnapshotPose"));
    struct Params_SnapshotPose {
        FPoseSnapshot Snapshot; // 0x0
    }; // Size: 0x38
    Params_SnapshotPose params{};
    params.Snapshot = (FPoseSnapshot)Snapshot;
    ProcessEvent(func, &params);
    Snapshot = params.Snapshot;
}
void UAnimInstance::UnlinkAnimClassLayers(UClass* InClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.UnlinkAnimClassLayers"));
    struct Params_UnlinkAnimClassLayers {
        UClass* InClass; // 0x0
    }; // Size: 0x8
    Params_UnlinkAnimClassLayers params{};
    params.InClass = (UClass*)InClass;
    ProcessEvent(func, &params);
}
bool UAnimInstance::HasMarkerBeenHitThisFrame(FName SyncGroup, FName MarkerName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.HasMarkerBeenHitThisFrame"));
    struct Params_HasMarkerBeenHitThisFrame {
        FName SyncGroup; // 0x0
        FName MarkerName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_HasMarkerBeenHitThisFrame params{};
    params.SyncGroup = (FName)SyncGroup;
    params.MarkerName = (FName)MarkerName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAnimInstance::SetReceiveNotifiesFromLinkedInstances(bool bSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.SetReceiveNotifiesFromLinkedInstances"));
    struct Params_SetReceiveNotifiesFromLinkedInstances {
        bool bSet; // 0x0
    }; // Size: 0x1
    Params_SetReceiveNotifiesFromLinkedInstances params{};
    params.bSet = (bool)bSet;
    ProcessEvent(func, &params);
}
void UAnimInstance::StopSlotAnimation(float InBlendOutTime, FName SlotNodeName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.StopSlotAnimation"));
    struct Params_StopSlotAnimation {
        float InBlendOutTime; // 0x0
        FName SlotNodeName; // 0x4
    }; // Size: 0xc
    Params_StopSlotAnimation params{};
    params.InBlendOutTime = (float)InBlendOutTime;
    params.SlotNodeName = (FName)SlotNodeName;
    ProcessEvent(func, &params);
}
APawn* UAnimInstance::TryGetPawnOwner() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.TryGetPawnOwner"));
    struct Params_TryGetPawnOwner {
        APawn* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_TryGetPawnOwner params{};
    ProcessEvent(func, &params);
    return (APawn*)params.ReturnValue;
}
void UAnimInstance::SetRootMotionMode(ERootMotionMode::Type Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.SetRootMotionMode"));
    struct Params_SetRootMotionMode {
        ERootMotionMode::Type Value; // 0x0
    }; // Size: 0x1
    Params_SetRootMotionMode params{};
    params.Value = (ERootMotionMode::Type)Value;
    ProcessEvent(func, &params);
}
void UAnimInstance::SetMorphTarget(FName MorphTargetName, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.SetMorphTarget"));
    struct Params_SetMorphTarget {
        FName MorphTargetName; // 0x0
        float Value; // 0x8
    }; // Size: 0xc
    Params_SetMorphTarget params{};
    params.MorphTargetName = (FName)MorphTargetName;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
FName UAnimInstance::Montage_GetCurrentSection(UAnimMontage* Montage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.Montage_GetCurrentSection"));
    struct Params_Montage_GetCurrentSection {
        UAnimMontage* Montage; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Montage_GetCurrentSection params{};
    params.Montage = (UAnimMontage*)Montage;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
float UAnimInstance::GetInstanceStateWeight(int32_t MachineIndex, int32_t StateIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetInstanceStateWeight"));
    struct Params_GetInstanceStateWeight {
        int32_t MachineIndex; // 0x0
        int32_t StateIndex; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetInstanceStateWeight params{};
    params.MachineIndex = (int32_t)MachineIndex;
    params.StateIndex = (int32_t)StateIndex;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
USkeletalMeshComponent* UAnimInstance::GetOwningComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetOwningComponent"));
    struct Params_GetOwningComponent {
        USkeletalMeshComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOwningComponent params{};
    ProcessEvent(func, &params);
    return (USkeletalMeshComponent*)params.ReturnValue;
}
void UAnimInstance::Montage_Resume(UAnimMontage* Montage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.Montage_Resume"));
    struct Params_Montage_Resume {
        UAnimMontage* Montage; // 0x0
    }; // Size: 0x8
    Params_Montage_Resume params{};
    params.Montage = (UAnimMontage*)Montage;
    ProcessEvent(func, &params);
}
void UAnimInstance::SavePoseSnapshot(FName SnapshotName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.SavePoseSnapshot"));
    struct Params_SavePoseSnapshot {
        FName SnapshotName; // 0x0
    }; // Size: 0x8
    Params_SavePoseSnapshot params{};
    params.SnapshotName = (FName)SnapshotName;
    ProcessEvent(func, &params);
}
void UAnimInstance::ResetDynamics(ETeleportType InTeleportType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.ResetDynamics"));
    struct Params_ResetDynamics {
        ETeleportType InTeleportType; // 0x0
    }; // Size: 0x1
    Params_ResetDynamics params{};
    params.InTeleportType = (ETeleportType)InTeleportType;
    ProcessEvent(func, &params);
}
AActor* UAnimInstance::GetOwningActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetOwningActor"));
    struct Params_GetOwningActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOwningActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
UAnimMontage* UAnimInstance::PlaySlotAnimationAsDynamicMontage(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage"));
    struct Params_PlaySlotAnimationAsDynamicMontage {
        UAnimSequenceBase* Asset; // 0x0
        FName SlotNodeName; // 0x8
        float BlendInTime; // 0x10
        float BlendOutTime; // 0x14
        float InPlayRate; // 0x18
        int32_t LoopCount; // 0x1c
        float BlendOutTriggerTime; // 0x20
        float InTimeToStartMontageAt; // 0x24
        UAnimMontage* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_PlaySlotAnimationAsDynamicMontage params{};
    params.Asset = (UAnimSequenceBase*)Asset;
    params.SlotNodeName = (FName)SlotNodeName;
    params.BlendInTime = (float)BlendInTime;
    params.BlendOutTime = (float)BlendOutTime;
    params.InPlayRate = (float)InPlayRate;
    params.LoopCount = (int32_t)LoopCount;
    params.BlendOutTriggerTime = (float)BlendOutTriggerTime;
    params.InTimeToStartMontageAt = (float)InTimeToStartMontageAt;
    ProcessEvent(func, &params);
    return (UAnimMontage*)params.ReturnValue;
}
float UAnimInstance::PlaySlotAnimation(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.PlaySlotAnimation"));
    struct Params_PlaySlotAnimation {
        UAnimSequenceBase* Asset; // 0x0
        FName SlotNodeName; // 0x8
        float BlendInTime; // 0x10
        float BlendOutTime; // 0x14
        float InPlayRate; // 0x18
        int32_t LoopCount; // 0x1c
        float ReturnValue; // 0x20
    }; // Size: 0x24
    Params_PlaySlotAnimation params{};
    params.Asset = (UAnimSequenceBase*)Asset;
    params.SlotNodeName = (FName)SlotNodeName;
    params.BlendInTime = (float)BlendInTime;
    params.BlendOutTime = (float)BlendOutTime;
    params.InPlayRate = (float)InPlayRate;
    params.LoopCount = (int32_t)LoopCount;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UAnimInstance::Montage_StopGroupByName(float InBlendOutTime, FName GroupName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.Montage_StopGroupByName"));
    struct Params_Montage_StopGroupByName {
        float InBlendOutTime; // 0x0
        FName GroupName; // 0x4
    }; // Size: 0xc
    Params_Montage_StopGroupByName params{};
    params.InBlendOutTime = (float)InBlendOutTime;
    params.GroupName = (FName)GroupName;
    ProcessEvent(func, &params);
}
bool UAnimInstance::Montage_GetIsStopped(UAnimMontage* Montage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.Montage_GetIsStopped"));
    struct Params_Montage_GetIsStopped {
        UAnimMontage* Montage; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_Montage_GetIsStopped params{};
    params.Montage = (UAnimMontage*)Montage;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAnimInstance::BlueprintInitializeAnimation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.BlueprintInitializeAnimation"));
    struct Params_BlueprintInitializeAnimation {
    }; // Size: 0x0
    Params_BlueprintInitializeAnimation params{};
    ProcessEvent(func, &params);
}
void UAnimInstance::Montage_SetNextSection(FName SectionNameToChange, FName NextSection, UAnimMontage* Montage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.Montage_SetNextSection"));
    struct Params_Montage_SetNextSection {
        FName SectionNameToChange; // 0x0
        FName NextSection; // 0x8
        UAnimMontage* Montage; // 0x10
    }; // Size: 0x18
    Params_Montage_SetNextSection params{};
    params.SectionNameToChange = (FName)SectionNameToChange;
    params.NextSection = (FName)NextSection;
    params.Montage = (UAnimMontage*)Montage;
    ProcessEvent(func, &params);
}
bool UAnimInstance::Montage_IsActive(UAnimMontage* Montage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.Montage_IsActive"));
    struct Params_Montage_IsActive {
        UAnimMontage* Montage; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_Montage_IsActive params{};
    params.Montage = (UAnimMontage*)Montage;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAnimInstance::Montage_Stop(float InBlendOutTime, UAnimMontage* Montage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.Montage_Stop"));
    struct Params_Montage_Stop {
        float InBlendOutTime; // 0x0
        char pad_4[0x4];
        UAnimMontage* Montage; // 0x8
    }; // Size: 0x10
    Params_Montage_Stop params{};
    params.InBlendOutTime = (float)InBlendOutTime;
    params.Montage = (UAnimMontage*)Montage;
    ProcessEvent(func, &params);
}
float UAnimInstance::Montage_Play(UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.Montage_Play"));
    struct Params_Montage_Play {
        UAnimMontage* MontageToPlay; // 0x0
        float InPlayRate; // 0x8
        EMontagePlayReturnType ReturnValueType; // 0xc
        char pad_d[0x3];
        float InTimeToStartMontageAt; // 0x10
        bool bStopAllMontages; // 0x14
        char pad_15[0x3];
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_Montage_Play params{};
    params.MontageToPlay = (UAnimMontage*)MontageToPlay;
    params.InPlayRate = (float)InPlayRate;
    params.ReturnValueType = (EMontagePlayReturnType)ReturnValueType;
    params.InTimeToStartMontageAt = (float)InTimeToStartMontageAt;
    params.bStopAllMontages = (bool)bStopAllMontages;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UAnimInstance::GetRelevantAnimTimeRemainingFraction(int32_t MachineIndex, int32_t StateIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction"));
    struct Params_GetRelevantAnimTimeRemainingFraction {
        int32_t MachineIndex; // 0x0
        int32_t StateIndex; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetRelevantAnimTimeRemainingFraction params{};
    params.MachineIndex = (int32_t)MachineIndex;
    params.StateIndex = (int32_t)StateIndex;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UAnimInstance::Montage_SetPosition(UAnimMontage* Montage, float NewPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.Montage_SetPosition"));
    struct Params_Montage_SetPosition {
        UAnimMontage* Montage; // 0x0
        float NewPosition; // 0x8
    }; // Size: 0xc
    Params_Montage_SetPosition params{};
    params.Montage = (UAnimMontage*)Montage;
    params.NewPosition = (float)NewPosition;
    ProcessEvent(func, &params);
}
void UAnimInstance::Montage_SetPlayRate(UAnimMontage* Montage, float NewPlayRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.Montage_SetPlayRate"));
    struct Params_Montage_SetPlayRate {
        UAnimMontage* Montage; // 0x0
        float NewPlayRate; // 0x8
    }; // Size: 0xc
    Params_Montage_SetPlayRate params{};
    params.Montage = (UAnimMontage*)Montage;
    params.NewPlayRate = (float)NewPlayRate;
    ProcessEvent(func, &params);
}
float UAnimInstance::Montage_GetPlayRate(UAnimMontage* Montage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.Montage_GetPlayRate"));
    struct Params_Montage_GetPlayRate {
        UAnimMontage* Montage; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Montage_GetPlayRate params{};
    params.Montage = (UAnimMontage*)Montage;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UAnimInstance::Montage_Pause(UAnimMontage* Montage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.Montage_Pause"));
    struct Params_Montage_Pause {
        UAnimMontage* Montage; // 0x0
    }; // Size: 0x8
    Params_Montage_Pause params{};
    params.Montage = (UAnimMontage*)Montage;
    ProcessEvent(func, &params);
}
bool UAnimInstance::IsPlayingSlotAnimation(UAnimSequenceBase* Asset, FName SlotNodeName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.IsPlayingSlotAnimation"));
    struct Params_IsPlayingSlotAnimation {
        UAnimSequenceBase* Asset; // 0x0
        FName SlotNodeName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsPlayingSlotAnimation params{};
    params.Asset = (UAnimSequenceBase*)Asset;
    params.SlotNodeName = (FName)SlotNodeName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAnimInstance::Montage_JumpToSectionsEnd(FName SectionName, UAnimMontage* Montage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.Montage_JumpToSectionsEnd"));
    struct Params_Montage_JumpToSectionsEnd {
        FName SectionName; // 0x0
        UAnimMontage* Montage; // 0x8
    }; // Size: 0x10
    Params_Montage_JumpToSectionsEnd params{};
    params.SectionName = (FName)SectionName;
    params.Montage = (UAnimMontage*)Montage;
    ProcessEvent(func, &params);
}
void UAnimInstance::Montage_JumpToSection(FName SectionName, UAnimMontage* Montage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.Montage_JumpToSection"));
    struct Params_Montage_JumpToSection {
        FName SectionName; // 0x0
        UAnimMontage* Montage; // 0x8
    }; // Size: 0x10
    Params_Montage_JumpToSection params{};
    params.SectionName = (FName)SectionName;
    params.Montage = (UAnimMontage*)Montage;
    ProcessEvent(func, &params);
}
bool UAnimInstance::Montage_IsPlaying(UAnimMontage* Montage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.Montage_IsPlaying"));
    struct Params_Montage_IsPlaying {
        UAnimMontage* Montage; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_Montage_IsPlaying params{};
    params.Montage = (UAnimMontage*)Montage;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UAnimInstance::GetInstanceTransitionTimeElapsedFraction(int32_t MachineIndex, int32_t TransitionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction"));
    struct Params_GetInstanceTransitionTimeElapsedFraction {
        int32_t MachineIndex; // 0x0
        int32_t TransitionIndex; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetInstanceTransitionTimeElapsedFraction params{};
    params.MachineIndex = (int32_t)MachineIndex;
    params.TransitionIndex = (int32_t)TransitionIndex;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UAnimInstance::Montage_GetPosition(UAnimMontage* Montage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.Montage_GetPosition"));
    struct Params_Montage_GetPosition {
        UAnimMontage* Montage; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Montage_GetPosition params{};
    params.Montage = (UAnimMontage*)Montage;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UAnimInstance* UAnimInstance::GetLinkedAnimLayerInstanceByGroupAndClass(FName InGroup, UClass* InClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetLinkedAnimLayerInstanceByGroupAndClass"));
    struct Params_GetLinkedAnimLayerInstanceByGroupAndClass {
        FName InGroup; // 0x0
        UClass* InClass; // 0x8
        UAnimInstance* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetLinkedAnimLayerInstanceByGroupAndClass params{};
    params.InGroup = (FName)InGroup;
    params.InClass = (UClass*)InClass;
    ProcessEvent(func, &params);
    return (UAnimInstance*)params.ReturnValue;
}
float UAnimInstance::Montage_GetBlendTime(UAnimMontage* Montage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.Montage_GetBlendTime"));
    struct Params_Montage_GetBlendTime {
        UAnimMontage* Montage; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Montage_GetBlendTime params{};
    params.Montage = (UAnimMontage*)Montage;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UAnimInstance::LockAIResources(bool bLockMovement, bool LockAILogic) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.LockAIResources"));
    struct Params_LockAIResources {
        bool bLockMovement; // 0x0
        bool LockAILogic; // 0x1
    }; // Size: 0x2
    Params_LockAIResources params{};
    params.bLockMovement = (bool)bLockMovement;
    params.LockAILogic = (bool)LockAILogic;
    ProcessEvent(func, &params);
}
float UAnimInstance::GetRelevantAnimTime(int32_t MachineIndex, int32_t StateIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetRelevantAnimTime"));
    struct Params_GetRelevantAnimTime {
        int32_t MachineIndex; // 0x0
        int32_t StateIndex; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetRelevantAnimTime params{};
    params.MachineIndex = (int32_t)MachineIndex;
    params.StateIndex = (int32_t)StateIndex;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UAnimInstance::LinkAnimGraphByTag(FName InTag, UClass* InClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.LinkAnimGraphByTag"));
    struct Params_LinkAnimGraphByTag {
        FName InTag; // 0x0
        UClass* InClass; // 0x8
    }; // Size: 0x10
    Params_LinkAnimGraphByTag params{};
    params.InTag = (FName)InTag;
    params.InClass = (UClass*)InClass;
    ProcessEvent(func, &params);
}
void UAnimInstance::GetAllCurveNames(TArray<FName>& OutNames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetAllCurveNames"));
    struct Params_GetAllCurveNames {
        TArray<FName> OutNames; // 0x0
    }; // Size: 0x10
    Params_GetAllCurveNames params{};
    params.OutNames = (TArray<FName>)OutNames;
    ProcessEvent(func, &params);
    OutNames = params.OutNames;
}
void UAnimInstance::LinkAnimClassLayers(UClass* InClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.LinkAnimClassLayers"));
    struct Params_LinkAnimClassLayers {
        UClass* InClass; // 0x0
    }; // Size: 0x8
    Params_LinkAnimClassLayers params{};
    params.InClass = (UClass*)InClass;
    ProcessEvent(func, &params);
}
bool UAnimInstance::IsSyncGroupBetweenMarkers(FName InSyncGroupName, FName PreviousMarker, FName NextMarker, bool bRespectMarkerOrder) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.IsSyncGroupBetweenMarkers"));
    struct Params_IsSyncGroupBetweenMarkers {
        FName InSyncGroupName; // 0x0
        FName PreviousMarker; // 0x8
        FName NextMarker; // 0x10
        bool bRespectMarkerOrder; // 0x18
        bool ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_IsSyncGroupBetweenMarkers params{};
    params.InSyncGroupName = (FName)InSyncGroupName;
    params.PreviousMarker = (FName)PreviousMarker;
    params.NextMarker = (FName)NextMarker;
    params.bRespectMarkerOrder = (bool)bRespectMarkerOrder;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAnimInstance::GetLinkedAnimGraphInstancesByTag(FName InTag, TArray<UAnimInstance*>& OutLinkedInstances) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetLinkedAnimGraphInstancesByTag"));
    struct Params_GetLinkedAnimGraphInstancesByTag {
        FName InTag; // 0x0
        TArray<UAnimInstance*> OutLinkedInstances; // 0x8
    }; // Size: 0x18
    Params_GetLinkedAnimGraphInstancesByTag params{};
    params.InTag = (FName)InTag;
    params.OutLinkedInstances = (TArray<UAnimInstance*>)OutLinkedInstances;
    ProcessEvent(func, &params);
    OutLinkedInstances = params.OutLinkedInstances;
}
bool UAnimInstance::IsAnyMontagePlaying() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.IsAnyMontagePlaying"));
    struct Params_IsAnyMontagePlaying {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAnyMontagePlaying params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UAnimInstance::GetRelevantAnimLength(int32_t MachineIndex, int32_t StateIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetRelevantAnimLength"));
    struct Params_GetRelevantAnimLength {
        int32_t MachineIndex; // 0x0
        int32_t StateIndex; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetRelevantAnimLength params{};
    params.MachineIndex = (int32_t)MachineIndex;
    params.StateIndex = (int32_t)StateIndex;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UAnimInstance::GetReceiveNotifiesFromLinkedInstances() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetReceiveNotifiesFromLinkedInstances"));
    struct Params_GetReceiveNotifiesFromLinkedInstances {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetReceiveNotifiesFromLinkedInstances params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAnimInstance::GetTimeToClosestMarker(FName SyncGroup, FName MarkerName, float& OutMarkerTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetTimeToClosestMarker"));
    struct Params_GetTimeToClosestMarker {
        FName SyncGroup; // 0x0
        FName MarkerName; // 0x8
        float OutMarkerTime; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetTimeToClosestMarker params{};
    params.SyncGroup = (FName)SyncGroup;
    params.MarkerName = (FName)MarkerName;
    params.OutMarkerTime = (float)OutMarkerTime;
    ProcessEvent(func, &params);
    OutMarkerTime = params.OutMarkerTime;
    return (bool)params.ReturnValue;
}
FMarkerSyncAnimPosition UAnimInstance::GetSyncGroupPosition(FName InSyncGroupName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetSyncGroupPosition"));
    struct Params_GetSyncGroupPosition {
        FName InSyncGroupName; // 0x0
        FMarkerSyncAnimPosition ReturnValue; // 0x8
    }; // Size: 0x1c
    Params_GetSyncGroupPosition params{};
    params.InSyncGroupName = (FName)InSyncGroupName;
    ProcessEvent(func, &params);
    return (FMarkerSyncAnimPosition)params.ReturnValue;
}
float UAnimInstance::GetInstanceCurrentStateElapsedTime(int32_t MachineIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetInstanceCurrentStateElapsedTime"));
    struct Params_GetInstanceCurrentStateElapsedTime {
        int32_t MachineIndex; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetInstanceCurrentStateElapsedTime params{};
    params.MachineIndex = (int32_t)MachineIndex;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UAnimInstance::GetRelevantAnimTimeFraction(int32_t MachineIndex, int32_t StateIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetRelevantAnimTimeFraction"));
    struct Params_GetRelevantAnimTimeFraction {
        int32_t MachineIndex; // 0x0
        int32_t StateIndex; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetRelevantAnimTimeFraction params{};
    params.MachineIndex = (int32_t)MachineIndex;
    params.StateIndex = (int32_t)StateIndex;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UAnimInstance::GetInstanceAssetPlayerTime(int32_t AssetPlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetInstanceAssetPlayerTime"));
    struct Params_GetInstanceAssetPlayerTime {
        int32_t AssetPlayerIndex; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetInstanceAssetPlayerTime params{};
    params.AssetPlayerIndex = (int32_t)AssetPlayerIndex;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UAnimInstance::GetLinkedAnimLayerInstancesByGroup(FName InGroup, TArray<UAnimInstance*>& OutLinkedInstances) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetLinkedAnimLayerInstancesByGroup"));
    struct Params_GetLinkedAnimLayerInstancesByGroup {
        FName InGroup; // 0x0
        TArray<UAnimInstance*> OutLinkedInstances; // 0x8
    }; // Size: 0x18
    Params_GetLinkedAnimLayerInstancesByGroup params{};
    params.InGroup = (FName)InGroup;
    params.OutLinkedInstances = (TArray<UAnimInstance*>)OutLinkedInstances;
    ProcessEvent(func, &params);
    OutLinkedInstances = params.OutLinkedInstances;
}
UAnimInstance* UAnimInstance::GetLinkedAnimLayerInstanceByClass(UClass* InClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetLinkedAnimLayerInstanceByClass"));
    struct Params_GetLinkedAnimLayerInstanceByClass {
        UClass* InClass; // 0x0
        UAnimInstance* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetLinkedAnimLayerInstanceByClass params{};
    params.InClass = (UClass*)InClass;
    ProcessEvent(func, &params);
    return (UAnimInstance*)params.ReturnValue;
}
float UAnimInstance::GetInstanceAssetPlayerTimeFromEnd(int32_t AssetPlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd"));
    struct Params_GetInstanceAssetPlayerTimeFromEnd {
        int32_t AssetPlayerIndex; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetInstanceAssetPlayerTimeFromEnd params{};
    params.AssetPlayerIndex = (int32_t)AssetPlayerIndex;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UAnimInstance* UAnimInstance::GetLinkedAnimGraphInstanceByTag(FName InTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetLinkedAnimGraphInstanceByTag"));
    struct Params_GetLinkedAnimGraphInstanceByTag {
        FName InTag; // 0x0
        UAnimInstance* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetLinkedAnimGraphInstanceByTag params{};
    params.InTag = (FName)InTag;
    ProcessEvent(func, &params);
    return (UAnimInstance*)params.ReturnValue;
}
float UAnimInstance::GetInstanceTransitionTimeElapsed(int32_t MachineIndex, int32_t TransitionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetInstanceTransitionTimeElapsed"));
    struct Params_GetInstanceTransitionTimeElapsed {
        int32_t MachineIndex; // 0x0
        int32_t TransitionIndex; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetInstanceTransitionTimeElapsed params{};
    params.MachineIndex = (int32_t)MachineIndex;
    params.TransitionIndex = (int32_t)TransitionIndex;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UAnimInstance::GetInstanceTransitionCrossfadeDuration(int32_t MachineIndex, int32_t TransitionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration"));
    struct Params_GetInstanceTransitionCrossfadeDuration {
        int32_t MachineIndex; // 0x0
        int32_t TransitionIndex; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetInstanceTransitionCrossfadeDuration params{};
    params.MachineIndex = (int32_t)MachineIndex;
    params.TransitionIndex = (int32_t)TransitionIndex;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UAnimInstance::GetInstanceMachineWeight(int32_t MachineIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetInstanceMachineWeight"));
    struct Params_GetInstanceMachineWeight {
        int32_t MachineIndex; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetInstanceMachineWeight params{};
    params.MachineIndex = (int32_t)MachineIndex;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(int32_t AssetPlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction"));
    struct Params_GetInstanceAssetPlayerTimeFromEndFraction {
        int32_t AssetPlayerIndex; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetInstanceAssetPlayerTimeFromEndFraction params{};
    params.AssetPlayerIndex = (int32_t)AssetPlayerIndex;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UAnimInstance::GetInstanceAssetPlayerTimeFraction(int32_t AssetPlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction"));
    struct Params_GetInstanceAssetPlayerTimeFraction {
        int32_t AssetPlayerIndex; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetInstanceAssetPlayerTimeFraction params{};
    params.AssetPlayerIndex = (int32_t)AssetPlayerIndex;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UAnimInstance::GetInstanceAssetPlayerLength(int32_t AssetPlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetInstanceAssetPlayerLength"));
    struct Params_GetInstanceAssetPlayerLength {
        int32_t AssetPlayerIndex; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetInstanceAssetPlayerLength params{};
    params.AssetPlayerIndex = (int32_t)AssetPlayerIndex;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UAnimInstance::GetCurveValue(FName CurveName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetCurveValue"));
    struct Params_GetCurveValue {
        FName CurveName; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetCurveValue params{};
    params.CurveName = (FName)CurveName;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FName UAnimInstance::GetCurrentStateName(int32_t MachineIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetCurrentStateName"));
    struct Params_GetCurrentStateName {
        int32_t MachineIndex; // 0x0
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetCurrentStateName params{};
    params.MachineIndex = (int32_t)MachineIndex;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
UAnimMontage* UAnimInstance::GetCurrentActiveMontage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetCurrentActiveMontage"));
    struct Params_GetCurrentActiveMontage {
        UAnimMontage* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCurrentActiveMontage params{};
    ProcessEvent(func, &params);
    return (UAnimMontage*)params.ReturnValue;
}
void UAnimInstance::GetActiveCurveNames(EAnimCurveType CurveType, TArray<FName>& OutNames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.GetActiveCurveNames"));
    struct Params_GetActiveCurveNames {
        EAnimCurveType CurveType; // 0x0
        char pad_1[0x7];
        TArray<FName> OutNames; // 0x8
    }; // Size: 0x18
    Params_GetActiveCurveNames params{};
    params.CurveType = (EAnimCurveType)CurveType;
    params.OutNames = (TArray<FName>)OutNames;
    ProcessEvent(func, &params);
    OutNames = params.OutNames;
}
void UAnimInstance::ClearMorphTargets() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.ClearMorphTargets"));
    struct Params_ClearMorphTargets {
    }; // Size: 0x0
    Params_ClearMorphTargets params{};
    ProcessEvent(func, &params);
}
float UAnimInstance::CalculateDirection(FVector& Velocity, FRotator& BaseRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.CalculateDirection"));
    struct Params_CalculateDirection {
        FVector Velocity; // 0x0
        FRotator BaseRotation; // 0xc
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_CalculateDirection params{};
    params.Velocity = (FVector)Velocity;
    params.BaseRotation = (FRotator)BaseRotation;
    ProcessEvent(func, &params);
    BaseRotation = params.BaseRotation;
    Velocity = params.Velocity;
    return (float)params.ReturnValue;
}
void UAnimInstance::BlueprintUpdateAnimation(float DeltaTimeX) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.BlueprintUpdateAnimation"));
    struct Params_BlueprintUpdateAnimation {
        float DeltaTimeX; // 0x0
    }; // Size: 0x4
    Params_BlueprintUpdateAnimation params{};
    params.DeltaTimeX = (float)DeltaTimeX;
    ProcessEvent(func, &params);
}
void UAnimInstance::BlueprintPostEvaluateAnimation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.BlueprintPostEvaluateAnimation"));
    struct Params_BlueprintPostEvaluateAnimation {
    }; // Size: 0x0
    Params_BlueprintPostEvaluateAnimation params{};
    ProcessEvent(func, &params);
}
void UAnimInstance::BlueprintLinkedAnimationLayersInitialized() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.BlueprintLinkedAnimationLayersInitialized"));
    struct Params_BlueprintLinkedAnimationLayersInitialized {
    }; // Size: 0x0
    Params_BlueprintLinkedAnimationLayersInitialized params{};
    ProcessEvent(func, &params);
}
void UAnimInstance::BlueprintBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimInstance.BlueprintBeginPlay"));
    struct Params_BlueprintBeginPlay {
    }; // Size: 0x0
    Params_BlueprintBeginPlay params{};
    ProcessEvent(func, &params);
}
