#include "AActor.hpp"
#include "APawn.hpp"
#include "APickupTool.hpp"
#include "AWandTool.hpp"
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
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UBiped_Character_Interface.hpp"
#include "UClass.hpp"
#include "UCurveFloat.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UPrimitiveComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UStickFlickWatcherRecord.hpp"
void UBiped_Character_Interface::UseInventoryItemByName(FName InventoryObjectID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.UseInventoryItemByName"));
    struct Params_UseInventoryItemByName {
        FName InventoryObjectID; // 0x0
    }; // Size: 0x8
    Params_UseInventoryItemByName params{};
    params.InventoryObjectID = (FName)InventoryObjectID;
    ProcessEvent(func, &params);
}
UBiped_Character_Interface* UBiped_Character_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Biped_Character_Interface");
    return (UBiped_Character_Interface*)res;
}
float UBiped_Character_Interface::ComputeAngleToDesiredDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.ComputeAngleToDesiredDirection"));
    struct Params_ComputeAngleToDesiredDirection {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_ComputeAngleToDesiredDirection params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UBiped_Character_Interface::UnEquipWand() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.UnEquipWand"));
    struct Params_UnEquipWand {
    }; // Size: 0x0
    Params_UnEquipWand params{};
    ProcessEvent(func, &params);
}
void UBiped_Character_Interface::UnLockOnToActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.UnLockOnToActor"));
    struct Params_UnLockOnToActor {
    }; // Size: 0x0
    Params_UnLockOnToActor params{};
    ProcessEvent(func, &params);
}
void UBiped_Character_Interface::RequestMove(float StickX, float StickY, float DeltaTime, float& Speed, float& Direction, float& LookAtDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.RequestMove"));
    struct Params_RequestMove {
        float StickX; // 0x0
        float StickY; // 0x4
        float DeltaTime; // 0x8
        float Speed; // 0xc
        float Direction; // 0x10
        float LookAtDirection; // 0x14
    }; // Size: 0x18
    Params_RequestMove params{};
    params.StickX = (float)StickX;
    params.StickY = (float)StickY;
    params.DeltaTime = (float)DeltaTime;
    params.Speed = (float)Speed;
    params.Direction = (float)Direction;
    params.LookAtDirection = (float)LookAtDirection;
    ProcessEvent(func, &params);
    Speed = params.Speed;
    Direction = params.Direction;
    LookAtDirection = params.LookAtDirection;
}
void UBiped_Character_Interface::StopMove() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.StopMove"));
    struct Params_StopMove {
    }; // Size: 0x0
    Params_StopMove params{};
    ProcessEvent(func, &params);
}
AActor* UBiped_Character_Interface::GetBestLockOnActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetBestLockOnActor"));
    struct Params_GetBestLockOnActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBestLockOnActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void UBiped_Character_Interface::PauseMenuStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.PauseMenuStart"));
    struct Params_PauseMenuStart {
    }; // Size: 0x0
    Params_PauseMenuStart params{};
    ProcessEvent(func, &params);
}
APawn* UBiped_Character_Interface::SpawnStudent(UClass* StudentClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.SpawnStudent"));
    struct Params_SpawnStudent {
        UClass* StudentClass; // 0x0
        APawn* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SpawnStudent params{};
    params.StudentClass = (UClass*)StudentClass;
    ProcessEvent(func, &params);
    return (APawn*)params.ReturnValue;
}
void UBiped_Character_Interface::GetSpellCastHandle(int32_t& OutSpellCastHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetSpellCastHandle"));
    struct Params_GetSpellCastHandle {
        int32_t OutSpellCastHandle; // 0x0
    }; // Size: 0x4
    Params_GetSpellCastHandle params{};
    params.OutSpellCastHandle = (int32_t)OutSpellCastHandle;
    ProcessEvent(func, &params);
    OutSpellCastHandle = params.OutSpellCastHandle;
}
bool UBiped_Character_Interface::IsDead() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.IsDead"));
    struct Params_IsDead {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDead params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBiped_Character_Interface::SetRightArmState(ERightArmState::Type InState, ERightArmPriority::Type InPriority, bool bBroadcastChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.SetRightArmState"));
    struct Params_SetRightArmState {
        ERightArmState::Type InState; // 0x0
        ERightArmPriority::Type InPriority; // 0x1
        bool bBroadcastChange; // 0x2
    }; // Size: 0x3
    Params_SetRightArmState params{};
    params.InState = (ERightArmState::Type)InState;
    params.InPriority = (ERightArmPriority::Type)InPriority;
    params.bBroadcastChange = (bool)bBroadcastChange;
    ProcessEvent(func, &params);
}
AActor* UBiped_Character_Interface::SpawnLookAtTarget(UClass* SpawnActorClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.SpawnLookAtTarget"));
    struct Params_SpawnLookAtTarget {
        UClass* SpawnActorClass; // 0x0
        AActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SpawnLookAtTarget params{};
    params.SpawnActorClass = (UClass*)SpawnActorClass;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
AActor* UBiped_Character_Interface::SpawnFaceTarget(UClass* SpawnActorClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.SpawnFaceTarget"));
    struct Params_SpawnFaceTarget {
        UClass* SpawnActorClass; // 0x0
        AActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SpawnFaceTarget params{};
    params.SpawnActorClass = (UClass*)SpawnActorClass;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
USkeletalMeshComponent* UBiped_Character_Interface::GetSkeletalMesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetSkeletalMesh"));
    struct Params_GetSkeletalMesh {
        USkeletalMeshComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSkeletalMesh params{};
    ProcessEvent(func, &params);
    return (USkeletalMeshComponent*)params.ReturnValue;
}
void UBiped_Character_Interface::GetPartialBodyState(EPartialBodyState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetPartialBodyState"));
    struct Params_GetPartialBodyState {
        EPartialBodyState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetPartialBodyState params{};
    params.OutState = (EPartialBodyState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UBiped_Character_Interface::SetSpellCastHandle(int32_t InSpellCastHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.SetSpellCastHandle"));
    struct Params_SetSpellCastHandle {
        int32_t InSpellCastHandle; // 0x0
    }; // Size: 0x4
    Params_SetSpellCastHandle params{};
    params.InSpellCastHandle = (int32_t)InSpellCastHandle;
    ProcessEvent(func, &params);
}
AWandTool* UBiped_Character_Interface::GetWand() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetWand"));
    struct Params_GetWand {
        AWandTool* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetWand params{};
    ProcessEvent(func, &params);
    return (AWandTool*)params.ReturnValue;
}
float UBiped_Character_Interface::GetPickupToolHeight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetPickupToolHeight"));
    struct Params_GetPickupToolHeight {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPickupToolHeight params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UBiped_Character_Interface::SetRootMotionOffsets(FVector& TranslationOffset, FRotator& RotationOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.SetRootMotionOffsets"));
    struct Params_SetRootMotionOffsets {
        FVector TranslationOffset; // 0x0
        FRotator RotationOffset; // 0xc
    }; // Size: 0x18
    Params_SetRootMotionOffsets params{};
    params.TranslationOffset = (FVector)TranslationOffset;
    params.RotationOffset = (FRotator)RotationOffset;
    ProcessEvent(func, &params);
    TranslationOffset = params.TranslationOffset;
    RotationOffset = params.RotationOffset;
}
void UBiped_Character_Interface::SetRootMotionOffset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.SetRootMotionOffset"));
    struct Params_SetRootMotionOffset {
    }; // Size: 0x0
    Params_SetRootMotionOffset params{};
    ProcessEvent(func, &params);
}
void UBiped_Character_Interface::SetPickupTool(APickupTool* InPickupTool) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.SetPickupTool"));
    struct Params_SetPickupTool {
        APickupTool* InPickupTool; // 0x0
    }; // Size: 0x8
    Params_SetPickupTool params{};
    params.InPickupTool = (APickupTool*)InPickupTool;
    ProcessEvent(func, &params);
}
void UBiped_Character_Interface::SetPhoenixCameraRotation(FRotator& DesiredRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.SetPhoenixCameraRotation"));
    struct Params_SetPhoenixCameraRotation {
        FRotator DesiredRotation; // 0x0
    }; // Size: 0xc
    Params_SetPhoenixCameraRotation params{};
    params.DesiredRotation = (FRotator)DesiredRotation;
    ProcessEvent(func, &params);
    DesiredRotation = params.DesiredRotation;
}
bool UBiped_Character_Interface::InstaUseInventoryItem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.InstaUseInventoryItem"));
    struct Params_InstaUseInventoryItem {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_InstaUseInventoryItem params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBiped_Character_Interface::SetPhoenixCameraLookAt_TimeBased(FVector& LookAtPoint, float LookAtTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.SetPhoenixCameraLookAt_TimeBased"));
    struct Params_SetPhoenixCameraLookAt_TimeBased {
        FVector LookAtPoint; // 0x0
        float LookAtTime; // 0xc
    }; // Size: 0x10
    Params_SetPhoenixCameraLookAt_TimeBased params{};
    params.LookAtPoint = (FVector)LookAtPoint;
    params.LookAtTime = (float)LookAtTime;
    ProcessEvent(func, &params);
    LookAtPoint = params.LookAtPoint;
}
void UBiped_Character_Interface::SetPhoenixCameraLookAt_ActorAndTime(AActor* LookAtActor, float LookAtTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.SetPhoenixCameraLookAt_ActorAndTime"));
    struct Params_SetPhoenixCameraLookAt_ActorAndTime {
        AActor* LookAtActor; // 0x0
        float LookAtTime; // 0x8
    }; // Size: 0xc
    Params_SetPhoenixCameraLookAt_ActorAndTime params{};
    params.LookAtActor = (AActor*)LookAtActor;
    params.LookAtTime = (float)LookAtTime;
    ProcessEvent(func, &params);
}
void UBiped_Character_Interface::SetPhoenixCameraLookAt_Actor(AActor* LookAtActor, float ScaleSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.SetPhoenixCameraLookAt_Actor"));
    struct Params_SetPhoenixCameraLookAt_Actor {
        AActor* LookAtActor; // 0x0
        float ScaleSpeed; // 0x8
    }; // Size: 0xc
    Params_SetPhoenixCameraLookAt_Actor params{};
    params.LookAtActor = (AActor*)LookAtActor;
    params.ScaleSpeed = (float)ScaleSpeed;
    ProcessEvent(func, &params);
}
void UBiped_Character_Interface::GetRootMotionOffset(FVector& OutTranslationOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetRootMotionOffset"));
    struct Params_GetRootMotionOffset {
        FVector OutTranslationOffset; // 0x0
    }; // Size: 0xc
    Params_GetRootMotionOffset params{};
    params.OutTranslationOffset = (FVector)OutTranslationOffset;
    ProcessEvent(func, &params);
    OutTranslationOffset = params.OutTranslationOffset;
}
void UBiped_Character_Interface::SetPhoenixCameraLookAt(FVector& LookAtPoint, float ScaleSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.SetPhoenixCameraLookAt"));
    struct Params_SetPhoenixCameraLookAt {
        FVector LookAtPoint; // 0x0
        float ScaleSpeed; // 0xc
    }; // Size: 0x10
    Params_SetPhoenixCameraLookAt params{};
    params.LookAtPoint = (FVector)LookAtPoint;
    params.ScaleSpeed = (float)ScaleSpeed;
    ProcessEvent(func, &params);
    LookAtPoint = params.LookAtPoint;
}
void UBiped_Character_Interface::SetPartialBodyState(EPartialBodyState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.SetPartialBodyState"));
    struct Params_SetPartialBodyState {
        EPartialBodyState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetPartialBodyState params{};
    params.InState = (EPartialBodyState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_Character_Interface::SetParryState(EParryState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.SetParryState"));
    struct Params_SetParryState {
        EParryState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetParryState params{};
    params.InState = (EParryState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_Character_Interface::SetFullBodyStateLast(EFullBodyState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.SetFullBodyStateLast"));
    struct Params_SetFullBodyStateLast {
        EFullBodyState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetFullBodyStateLast params{};
    params.InState = (EFullBodyState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_Character_Interface::ResetPhoenixCameraRotation(float ResetSpeed, UCurveFloat* ResetSpeedCurve) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.ResetPhoenixCameraRotation"));
    struct Params_ResetPhoenixCameraRotation {
        float ResetSpeed; // 0x0
        char pad_4[0x4];
        UCurveFloat* ResetSpeedCurve; // 0x8
    }; // Size: 0x10
    Params_ResetPhoenixCameraRotation params{};
    params.ResetSpeed = (float)ResetSpeed;
    params.ResetSpeedCurve = (UCurveFloat*)ResetSpeedCurve;
    ProcessEvent(func, &params);
}
void UBiped_Character_Interface::PopDisableStack(FName_GameLogicVarInt32 StackName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.PopDisableStack"));
    struct Params_PopDisableStack {
        FName_GameLogicVarInt32 StackName; // 0x0
    }; // Size: 0x8
    Params_PopDisableStack params{};
    params.StackName = (FName_GameLogicVarInt32)StackName;
    ProcessEvent(func, &params);
}
void UBiped_Character_Interface::SetFullBodyState(EFullBodyState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.SetFullBodyState"));
    struct Params_SetFullBodyState {
        EFullBodyState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetFullBodyState params{};
    params.InState = (EFullBodyState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
FVector UBiped_Character_Interface::GetTargetDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetTargetDirection"));
    struct Params_GetTargetDirection {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetTargetDirection params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UBiped_Character_Interface::SetFinisherOptimalRatio(float OptimalRatio, EDynamicForceFeedbackAction::Type FeedbackAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.SetFinisherOptimalRatio"));
    struct Params_SetFinisherOptimalRatio {
        float OptimalRatio; // 0x0
        EDynamicForceFeedbackAction::Type FeedbackAction; // 0x4
    }; // Size: 0x5
    Params_SetFinisherOptimalRatio params{};
    params.OptimalRatio = (float)OptimalRatio;
    params.FeedbackAction = (EDynamicForceFeedbackAction::Type)FeedbackAction;
    ProcessEvent(func, &params);
}
APickupTool* UBiped_Character_Interface::GetPickupTool() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetPickupTool"));
    struct Params_GetPickupTool {
        APickupTool* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPickupTool params{};
    ProcessEvent(func, &params);
    return (APickupTool*)params.ReturnValue;
}
void UBiped_Character_Interface::GetFullBodyStateLast(EFullBodyState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetFullBodyStateLast"));
    struct Params_GetFullBodyStateLast {
        EFullBodyState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetFullBodyStateLast params{};
    params.OutState = (EFullBodyState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UBiped_Character_Interface::SetAdditiveBodyState(EAdditiveBodyState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.SetAdditiveBodyState"));
    struct Params_SetAdditiveBodyState {
        EAdditiveBodyState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetAdditiveBodyState params{};
    params.InState = (EAdditiveBodyState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_Character_Interface::LockOnCameraMoving(bool bFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.LockOnCameraMoving"));
    struct Params_LockOnCameraMoving {
        bool bFlag; // 0x0
    }; // Size: 0x1
    Params_LockOnCameraMoving params{};
    params.bFlag = (bool)bFlag;
    ProcessEvent(func, &params);
}
void UBiped_Character_Interface::ReadyModeStop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.ReadyModeStop"));
    struct Params_ReadyModeStop {
    }; // Size: 0x0
    Params_ReadyModeStop params{};
    ProcessEvent(func, &params);
}
void UBiped_Character_Interface::RequestStick(float StickX, float StickY) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.RequestStick"));
    struct Params_RequestStick {
        float StickX; // 0x0
        float StickY; // 0x4
    }; // Size: 0x8
    Params_RequestStick params{};
    params.StickX = (float)StickX;
    params.StickY = (float)StickY;
    ProcessEvent(func, &params);
}
void UBiped_Character_Interface::ReleasePhoenixCameraLookAt() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.ReleasePhoenixCameraLookAt"));
    struct Params_ReleasePhoenixCameraLookAt {
    }; // Size: 0x0
    Params_ReleasePhoenixCameraLookAt params{};
    ProcessEvent(func, &params);
}
bool UBiped_Character_Interface::IsInReadyMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.IsInReadyMode"));
    struct Params_IsInReadyMode {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInReadyMode params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBiped_Character_Interface::ReadyModeStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.ReadyModeStart"));
    struct Params_ReadyModeStart {
    }; // Size: 0x0
    Params_ReadyModeStart params{};
    ProcessEvent(func, &params);
}
bool UBiped_Character_Interface::QuickActionInteract() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.QuickActionInteract"));
    struct Params_QuickActionInteract {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_QuickActionInteract params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBiped_Character_Interface::PushDisableStack(FName_GameLogicVarInt32 StackName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.PushDisableStack"));
    struct Params_PushDisableStack {
        FName_GameLogicVarInt32 StackName; // 0x0
    }; // Size: 0x8
    Params_PushDisableStack params{};
    params.StackName = (FName_GameLogicVarInt32)StackName;
    ProcessEvent(func, &params);
}
bool UBiped_Character_Interface::ProcessStick(float StickX, float StickY, float DeltaTime, UCurveFloat* DeadZoneCurve, UCurveFloat* SpeedCurve, UCurveFloat* SpeedGovernorCurve, float& WorldSpeed, FVector& WorldDirection, ECustomInterpType::Type InterpType, float InterpSpeed, float StickMagReductionDelayTimer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.ProcessStick"));
    struct Params_ProcessStick {
        float StickX; // 0x0
        float StickY; // 0x4
        float DeltaTime; // 0x8
        char pad_c[0x4];
        UCurveFloat* DeadZoneCurve; // 0x10
        UCurveFloat* SpeedCurve; // 0x18
        UCurveFloat* SpeedGovernorCurve; // 0x20
        float WorldSpeed; // 0x28
        FVector WorldDirection; // 0x2c
        ECustomInterpType::Type InterpType; // 0x38
        char pad_39[0x3];
        float InterpSpeed; // 0x3c
        float StickMagReductionDelayTimer; // 0x40
        bool ReturnValue; // 0x44
    }; // Size: 0x45
    Params_ProcessStick params{};
    params.StickX = (float)StickX;
    params.StickY = (float)StickY;
    params.DeltaTime = (float)DeltaTime;
    params.DeadZoneCurve = (UCurveFloat*)DeadZoneCurve;
    params.SpeedCurve = (UCurveFloat*)SpeedCurve;
    params.SpeedGovernorCurve = (UCurveFloat*)SpeedGovernorCurve;
    params.WorldSpeed = (float)WorldSpeed;
    params.WorldDirection = (FVector)WorldDirection;
    params.InterpType = (ECustomInterpType::Type)InterpType;
    params.InterpSpeed = (float)InterpSpeed;
    params.StickMagReductionDelayTimer = (float)StickMagReductionDelayTimer;
    ProcessEvent(func, &params);
    WorldSpeed = params.WorldSpeed;
    WorldDirection = params.WorldDirection;
    return (bool)params.ReturnValue;
}
FName UBiped_Character_Interface::ParkourJump(FName DefaultNode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.ParkourJump"));
    struct Params_ParkourJump {
        FName DefaultNode; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_ParkourJump params{};
    params.DefaultNode = (FName)DefaultNode;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FVector UBiped_Character_Interface::GetTargetDestination() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetTargetDestination"));
    struct Params_GetTargetDestination {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetTargetDestination params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UBiped_Character_Interface::LockOnToActor(AActor* InLockOnActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.LockOnToActor"));
    struct Params_LockOnToActor {
        AActor* InLockOnActor; // 0x0
    }; // Size: 0x8
    Params_LockOnToActor params{};
    params.InLockOnActor = (AActor*)InLockOnActor;
    ProcessEvent(func, &params);
}
FInventoryResult UBiped_Character_Interface::GetInventoryResult() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetInventoryResult"));
    struct Params_GetInventoryResult {
        FInventoryResult ReturnValue; // 0x0
    }; // Size: 0x88
    Params_GetInventoryResult params{};
    ProcessEvent(func, &params);
    return (FInventoryResult)params.ReturnValue;
}
void UBiped_Character_Interface::LockOnCamFlick(UStickFlickWatcherRecord* InStickFlickWatcherRecord) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.LockOnCamFlick"));
    struct Params_LockOnCamFlick {
        UStickFlickWatcherRecord* InStickFlickWatcherRecord; // 0x0
    }; // Size: 0x8
    Params_LockOnCamFlick params{};
    params.InStickFlickWatcherRecord = (UStickFlickWatcherRecord*)InStickFlickWatcherRecord;
    ProcessEvent(func, &params);
}
AActor* UBiped_Character_Interface::GetHighlitActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetHighlitActor"));
    struct Params_GetHighlitActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetHighlitActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
FName UBiped_Character_Interface::GetTargetBoneName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetTargetBoneName"));
    struct Params_GetTargetBoneName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTargetBoneName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UBiped_Character_Interface::InLockOnMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.InLockOnMode"));
    struct Params_InLockOnMode {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_InLockOnMode params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UBiped_Character_Interface::GetToTargetDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetToTargetDirection"));
    struct Params_GetToTargetDirection {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetToTargetDirection params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
UPrimitiveComponent* UBiped_Character_Interface::GetTargetComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetTargetComponent"));
    struct Params_GetTargetComponent {
        UPrimitiveComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTargetComponent params{};
    ProcessEvent(func, &params);
    return (UPrimitiveComponent*)params.ReturnValue;
}
UCurveFloat* UBiped_Character_Interface::GetSpeedGovernorCurve() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetSpeedGovernorCurve"));
    struct Params_GetSpeedGovernorCurve {
        UCurveFloat* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSpeedGovernorCurve params{};
    ProcessEvent(func, &params);
    return (UCurveFloat*)params.ReturnValue;
}
UCurveFloat* UBiped_Character_Interface::GetSpeedCurve(bool& bIgnoreGovernor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetSpeedCurve"));
    struct Params_GetSpeedCurve {
        bool bIgnoreGovernor; // 0x0
        char pad_1[0x7];
        UCurveFloat* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetSpeedCurve params{};
    params.bIgnoreGovernor = (bool)bIgnoreGovernor;
    ProcessEvent(func, &params);
    bIgnoreGovernor = params.bIgnoreGovernor;
    return (UCurveFloat*)params.ReturnValue;
}
ERightArmState::Type UBiped_Character_Interface::GetRightArmState(ERightArmPriority::Type InPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetRightArmState"));
    struct Params_GetRightArmState {
        ERightArmPriority::Type InPriority; // 0x0
        ERightArmState::Type ReturnValue; // 0x1
    }; // Size: 0x2
    Params_GetRightArmState params{};
    params.InPriority = (ERightArmPriority::Type)InPriority;
    ProcessEvent(func, &params);
    return (ERightArmState::Type)params.ReturnValue;
}
void UBiped_Character_Interface::GetParryState(EParryState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetParryState"));
    struct Params_GetParryState {
        EParryState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetParryState params{};
    params.OutState = (EParryState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
float UBiped_Character_Interface::GetPutdownToolHeight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetPutdownToolHeight"));
    struct Params_GetPutdownToolHeight {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPutdownToolHeight params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UBiped_Character_Interface::GetFullBodyState(EFullBodyState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetFullBodyState"));
    struct Params_GetFullBodyState {
        EFullBodyState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetFullBodyState params{};
    params.OutState = (EFullBodyState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
FVector UBiped_Character_Interface::GetBestLockOnActor_WorldLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetBestLockOnActor_WorldLocation"));
    struct Params_GetBestLockOnActor_WorldLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetBestLockOnActor_WorldLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UBiped_Character_Interface::GetBestLockOnActor_ScreenLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetBestLockOnActor_ScreenLocation"));
    struct Params_GetBestLockOnActor_ScreenLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetBestLockOnActor_ScreenLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UBiped_Character_Interface::GetBestAutoTargetActor_WorldLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetBestAutoTargetActor_WorldLocation"));
    struct Params_GetBestAutoTargetActor_WorldLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetBestAutoTargetActor_WorldLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
AActor* UBiped_Character_Interface::GetBestAutoTargetActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetBestAutoTargetActor"));
    struct Params_GetBestAutoTargetActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBestAutoTargetActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
FVector UBiped_Character_Interface::GetAutoTargetUpDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetAutoTargetUpDirection"));
    struct Params_GetAutoTargetUpDirection {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetAutoTargetUpDirection params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UBiped_Character_Interface::GetAutoTargetFocusDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetAutoTargetFocusDirection"));
    struct Params_GetAutoTargetFocusDirection {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetAutoTargetFocusDirection params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UBiped_Character_Interface::GetAdditiveBodyState(EAdditiveBodyState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.GetAdditiveBodyState"));
    struct Params_GetAdditiveBodyState {
        EAdditiveBodyState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetAdditiveBodyState params{};
    params.OutState = (EAdditiveBodyState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UBiped_Character_Interface::FullyResetPhoenixCamera(float ResetSpeed, UCurveFloat* ResetSpeedCurve) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.FullyResetPhoenixCamera"));
    struct Params_FullyResetPhoenixCamera {
        float ResetSpeed; // 0x0
        char pad_4[0x4];
        UCurveFloat* ResetSpeedCurve; // 0x8
    }; // Size: 0x10
    Params_FullyResetPhoenixCamera params{};
    params.ResetSpeed = (float)ResetSpeed;
    params.ResetSpeedCurve = (UCurveFloat*)ResetSpeedCurve;
    ProcessEvent(func, &params);
}
void UBiped_Character_Interface::FlooStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.FlooStart"));
    struct Params_FlooStart {
    }; // Size: 0x0
    Params_FlooStart params{};
    ProcessEvent(func, &params);
}
void UBiped_Character_Interface::EquipWand() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.EquipWand"));
    struct Params_EquipWand {
    }; // Size: 0x0
    Params_EquipWand params{};
    ProcessEvent(func, &params);
}
void UBiped_Character_Interface::ComputeReaction(FVector HitLocation, FVector TraceDirection, FString OverrideName, EReactionState::Type& ReactionState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.ComputeReaction"));
    struct Params_ComputeReaction {
        FVector HitLocation; // 0x0
        FVector TraceDirection; // 0xc
        FString OverrideName; // 0x18
        EReactionState::Type ReactionState; // 0x28
    }; // Size: 0x29
    Params_ComputeReaction params{};
    params.HitLocation = (FVector)HitLocation;
    params.TraceDirection = (FVector)TraceDirection;
    params.OverrideName = (FString)OverrideName;
    params.ReactionState = (EReactionState::Type)ReactionState;
    ProcessEvent(func, &params);
    ReactionState = params.ReactionState;
}
void UBiped_Character_Interface::ComputeAttack(AActor*& TargetActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.ComputeAttack"));
    struct Params_ComputeAttack {
        AActor* TargetActor; // 0x0
    }; // Size: 0x8
    Params_ComputeAttack params{};
    params.TargetActor = (AActor*)TargetActor;
    ProcessEvent(func, &params);
    TargetActor = params.TargetActor;
}
void UBiped_Character_Interface::ClearStick() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.ClearStick"));
    struct Params_ClearStick {
    }; // Size: 0x0
    Params_ClearStick params{};
    ProcessEvent(func, &params);
}
FVector UBiped_Character_Interface::CalculateLookAtDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.CalculateLookAtDirection"));
    struct Params_CalculateLookAtDirection {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_CalculateLookAtDirection params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UBiped_Character_Interface::CalculateClimbingLedgeState(EClimbingLedgeState::Type& OutState, EJumpingType::Type& OutType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character_Interface.CalculateClimbingLedgeState"));
    struct Params_CalculateClimbingLedgeState {
        EClimbingLedgeState::Type OutState; // 0x0
        EJumpingType::Type OutType; // 0x1
    }; // Size: 0x2
    Params_CalculateClimbingLedgeState params{};
    params.OutState = (EClimbingLedgeState::Type)OutState;
    params.OutType = (EJumpingType::Type)OutType;
    ProcessEvent(func, &params);
    OutType = params.OutType;
    OutState = params.OutState;
}
