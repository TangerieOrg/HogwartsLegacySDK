#include "AActor.hpp"
#include "ABiped_Character.hpp"
#include "ABiped_Player.hpp"
#include "ADoor.hpp"
#include "AFieldGuideHotSpot.hpp"
#include "APlayer_AttackIndicator.hpp"
#include "ASocialReasoning.hpp"
#include "AStation.hpp"
#include "ECharacterDeathType.hpp"
#include "EComboType.hpp"
#include "ECustomInterpType\Type.hpp"
#include "EEdgeState\Type.hpp"
#include "EEnemy_ParryButtonPressed.hpp"
#include "EGenderPronoun.hpp"
#include "ENPC_TargetAwareState.hpp"
#include "ESpellCategory.hpp"
#include "EWandLinkResult.hpp"
#include "FGameplayProperty_Float.hpp"
#include "FGameplayProperty_Int.hpp"
#include "FGameplayTagContainer.hpp"
#include "FGearItem.hpp"
#include "FHitResult.hpp"
#include "FName_GameLogicVarBool.hpp"
#include "FName_GameLogicVarInt32.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "FVendorTransactionInfo.hpp"
#include "FWeightedBlendable.hpp"
#include "SocialHeritageStatusIDs.hpp"
#include "UAISense.hpp"
#include "UAkAudioEvent.hpp"
#include "UAkComponent.hpp"
#include "UBiped_AnimInstance.hpp"
#include "UCameraComponent.hpp"
#include "UClass.hpp"
#include "UConversationComponent.hpp"
#include "UCurveFloat.hpp"
#include "UCustomizableCharacterComponent.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UInventoryItemToolRecord.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMultiFX2_Base.hpp"
#include "UObject.hpp"
#include "USpellToolRecord.hpp"
#include "USplineComponent.hpp"
#include "UStickFlickWatcherRecord.hpp"
#include "UToolSetComponent.hpp"
#include "UVegetationInteractionComponent.hpp"
bool ABiped_Player::UseInventoryItemByName(FName InventoryObjectID, FName HolderID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.UseInventoryItemByName"));
    struct Params_UseInventoryItemByName {
        FName InventoryObjectID; // 0x0
        FName HolderID; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_UseInventoryItemByName params{};
    params.InventoryObjectID = (FName)InventoryObjectID;
    params.HolderID = (FName)HolderID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABiped_Player::RequestStick(float StickX, float StickY) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.RequestStick"));
    struct Params_RequestStick {
        float StickX; // 0x0
        float StickY; // 0x4
    }; // Size: 0x8
    Params_RequestStick params{};
    params.StickX = (float)StickX;
    params.StickY = (float)StickY;
    ProcessEvent(func, &params);
}
ABiped_Player* ABiped_Player::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Biped_Player");
    return (ABiped_Player*)res;
}
bool ABiped_Player::UseNewConversations() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.UseNewConversations"));
    struct Params_UseNewConversations {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_UseNewConversations params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABiped_Player::PauseMenuStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.PauseMenuStart"));
    struct Params_PauseMenuStart {
    }; // Size: 0x0
    Params_PauseMenuStart params{};
    ProcessEvent(func, &params);
}
bool ABiped_Player::ToadStatueTeleport(AActor* InDestinationActor, FVector InOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.ToadStatueTeleport"));
    struct Params_ToadStatueTeleport {
        AActor* InDestinationActor; // 0x0
        FVector InOffset; // 0x8
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_ToadStatueTeleport params{};
    params.InDestinationActor = (AActor*)InDestinationActor;
    params.InOffset = (FVector)InOffset;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABiped_Player::UseFinisherFocus() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.UseFinisherFocus"));
    struct Params_UseFinisherFocus {
    }; // Size: 0x0
    Params_UseFinisherFocus params{};
    ProcessEvent(func, &params);
}
bool ABiped_Player::IsLockedOn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.IsLockedOn"));
    struct Params_IsLockedOn {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLockedOn params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABiped_Player::RestartComboTimeout() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.RestartComboTimeout"));
    struct Params_RestartComboTimeout {
    }; // Size: 0x0
    Params_RestartComboTimeout params{};
    ProcessEvent(func, &params);
}
void ABiped_Player::UpdateDifficulty() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.UpdateDifficulty"));
    struct Params_UpdateDifficulty {
    }; // Size: 0x0
    Params_UpdateDifficulty params{};
    ProcessEvent(func, &params);
}
void ABiped_Player::UpdateFinsherAvailableFX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.UpdateFinsherAvailableFX"));
    struct Params_UpdateFinsherAvailableFX {
    }; // Size: 0x0
    Params_UpdateFinsherAvailableFX params{};
    ProcessEvent(func, &params);
}
void ABiped_Player::SetHighlitActor(AActor* InHighlitActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetHighlitActor"));
    struct Params_SetHighlitActor {
        AActor* InHighlitActor; // 0x0
    }; // Size: 0x8
    Params_SetHighlitActor params{};
    params.InHighlitActor = (AActor*)InHighlitActor;
    ProcessEvent(func, &params);
}
void ABiped_Player::HandleChompingCabbageCountChanged() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.HandleChompingCabbageCountChanged"));
    struct Params_HandleChompingCabbageCountChanged {
    }; // Size: 0x0
    Params_HandleChompingCabbageCountChanged params{};
    ProcessEvent(func, &params);
}
void ABiped_Player::SetInvulnerableTime(float invulnerableTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetInvulnerableTime"));
    struct Params_SetInvulnerableTime {
        float invulnerableTime; // 0x0
    }; // Size: 0x4
    Params_SetInvulnerableTime params{};
    params.invulnerableTime = (float)invulnerableTime;
    ProcessEvent(func, &params);
}
void ABiped_Player::AdjustCooldown(FName SpellName, float Time, bool AddIfNoneExists) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.AdjustCooldown"));
    struct Params_AdjustCooldown {
        FName SpellName; // 0x0
        float Time; // 0x8
        bool AddIfNoneExists; // 0xc
    }; // Size: 0xd
    Params_AdjustCooldown params{};
    params.SpellName = (FName)SpellName;
    params.Time = (float)Time;
    params.AddIfNoneExists = (bool)AddIfNoneExists;
    ProcessEvent(func, &params);
}
void ABiped_Player::UpdateCamMove(float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.UpdateCamMove"));
    struct Params_UpdateCamMove {
        float DeltaTime; // 0x0
    }; // Size: 0x4
    Params_UpdateCamMove params{};
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
}
void ABiped_Player::TargetSighted(UAISense* Sense, AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.TargetSighted"));
    struct Params_TargetSighted {
        UAISense* Sense; // 0x0
        AActor* Target; // 0x8
    }; // Size: 0x10
    Params_TargetSighted params{};
    params.Sense = (UAISense*)Sense;
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
void ABiped_Player::TargetLost(UAISense* Sense, AActor* OldTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.TargetLost"));
    struct Params_TargetLost {
        UAISense* Sense; // 0x0
        AActor* OldTarget; // 0x8
    }; // Size: 0x10
    Params_TargetLost params{};
    params.Sense = (UAISense*)Sense;
    params.OldTarget = (AActor*)OldTarget;
    ProcessEvent(func, &params);
}
void ABiped_Player::ResetCloth() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.ResetCloth"));
    struct Params_ResetCloth {
    }; // Size: 0x0
    Params_ResetCloth params{};
    ProcessEvent(func, &params);
}
void ABiped_Player::TargetChanged(UAISense* Sense, AActor* NewTarget, AActor* OldTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.TargetChanged"));
    struct Params_TargetChanged {
        UAISense* Sense; // 0x0
        AActor* NewTarget; // 0x8
        AActor* OldTarget; // 0x10
    }; // Size: 0x18
    Params_TargetChanged params{};
    params.Sense = (UAISense*)Sense;
    params.NewTarget = (AActor*)NewTarget;
    params.OldTarget = (AActor*)OldTarget;
    ProcessEvent(func, &params);
}
void ABiped_Player::SuspendStoryModeArmor(bool bFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SuspendStoryModeArmor"));
    struct Params_SuspendStoryModeArmor {
        bool bFlag; // 0x0
    }; // Size: 0x1
    Params_SuspendStoryModeArmor params{};
    params.bFlag = (bool)bFlag;
    ProcessEvent(func, &params);
}
bool ABiped_Player::StopPlayerInput() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.StopPlayerInput"));
    struct Params_StopPlayerInput {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_StopPlayerInput params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABiped_Player::SpawnRockSlide(UClass* InActorClass, float ProjectForward) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SpawnRockSlide"));
    struct Params_SpawnRockSlide {
        UClass* InActorClass; // 0x0
        float ProjectForward; // 0x8
    }; // Size: 0xc
    Params_SpawnRockSlide params{};
    params.InActorClass = (UClass*)InActorClass;
    params.ProjectForward = (float)ProjectForward;
    ProcessEvent(func, &params);
}
void ABiped_Player::RepairOrientation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.RepairOrientation"));
    struct Params_RepairOrientation {
    }; // Size: 0x0
    Params_RepairOrientation params{};
    ProcessEvent(func, &params);
}
void ABiped_Player::SetCauseOfDeath(ECharacterDeathType InCauseOfDeath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetCauseOfDeath"));
    struct Params_SetCauseOfDeath {
        ECharacterDeathType InCauseOfDeath; // 0x0
    }; // Size: 0x1
    Params_SetCauseOfDeath params{};
    params.InCauseOfDeath = (ECharacterDeathType)InCauseOfDeath;
    ProcessEvent(func, &params);
}
void ABiped_Player::SetUsingElderWand(bool bUsing) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetUsingElderWand"));
    struct Params_SetUsingElderWand {
        bool bUsing; // 0x0
    }; // Size: 0x1
    Params_SetUsingElderWand params{};
    params.bUsing = (bool)bUsing;
    ProcessEvent(func, &params);
}
void ABiped_Player::StopMove() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.StopMove"));
    struct Params_StopMove {
    }; // Size: 0x0
    Params_StopMove params{};
    ProcessEvent(func, &params);
}
void ABiped_Player::SetPhoenixCameraLookAt(FVector& LookAtPoint, float ScaleSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetPhoenixCameraLookAt"));
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
void ABiped_Player::StationInteractionExitComplete__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.Biped_Player.StationInteractionExitComplete__DelegateSignature"));
    struct Params_StationInteractionExitComplete__DelegateSignature {
    }; // Size: 0x0
    Params_StationInteractionExitComplete__DelegateSignature params{};
    ProcessEvent(func, &params);
}
AActor* ABiped_Player::StartCriticalFinisher(AActor* PreferredTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.StartCriticalFinisher"));
    struct Params_StartCriticalFinisher {
        AActor* PreferredTarget; // 0x0
        AActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_StartCriticalFinisher params{};
    params.PreferredTarget = (AActor*)PreferredTarget;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void ABiped_Player::SetPhoenixCameraRotation(FRotator& DesiredRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetPhoenixCameraRotation"));
    struct Params_SetPhoenixCameraRotation {
        FRotator DesiredRotation; // 0x0
    }; // Size: 0xc
    Params_SetPhoenixCameraRotation params{};
    params.DesiredRotation = (FRotator)DesiredRotation;
    ProcessEvent(func, &params);
    DesiredRotation = params.DesiredRotation;
}
void ABiped_Player::StartBulletTime(float Dilation, float Duration, bool DoFixedCam, float PlayerDilation, float EaseInDuration, float EaseOutDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.StartBulletTime"));
    struct Params_StartBulletTime {
        float Dilation; // 0x0
        float Duration; // 0x4
        bool DoFixedCam; // 0x8
        char pad_9[0x3];
        float PlayerDilation; // 0xc
        float EaseInDuration; // 0x10
        float EaseOutDuration; // 0x14
    }; // Size: 0x18
    Params_StartBulletTime params{};
    params.Dilation = (float)Dilation;
    params.Duration = (float)Duration;
    params.DoFixedCam = (bool)DoFixedCam;
    params.PlayerDilation = (float)PlayerDilation;
    params.EaseInDuration = (float)EaseInDuration;
    params.EaseOutDuration = (float)EaseOutDuration;
    ProcessEvent(func, &params);
}
int32_t ABiped_Player::GetVenomousTentaculaMax() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetVenomousTentaculaMax"));
    struct Params_GetVenomousTentaculaMax {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetVenomousTentaculaMax params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void ABiped_Player::SpawnItemMountCallback(UInventoryItemToolRecord* InToolRecord) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SpawnItemMountCallback"));
    struct Params_SpawnItemMountCallback {
        UInventoryItemToolRecord* InToolRecord; // 0x0
    }; // Size: 0x8
    Params_SpawnItemMountCallback params{};
    params.InToolRecord = (UInventoryItemToolRecord*)InToolRecord;
    ProcessEvent(func, &params);
}
void ABiped_Player::SetStartingMovementTime(float InStartingMovementTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetStartingMovementTime"));
    struct Params_SetStartingMovementTime {
        float InStartingMovementTime; // 0x0
    }; // Size: 0x4
    Params_SetStartingMovementTime params{};
    params.InStartingMovementTime = (float)InStartingMovementTime;
    ProcessEvent(func, &params);
}
AActor* ABiped_Player::SpawnFaceTarget(UClass* SpawnActorClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SpawnFaceTarget"));
    struct Params_SpawnFaceTarget {
        UClass* SpawnActorClass; // 0x0
        AActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SpawnFaceTarget params{};
    params.SpawnActorClass = (UClass*)SpawnActorClass;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
bool ABiped_Player::RestorePlayerInput() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.RestorePlayerInput"));
    struct Params_RestorePlayerInput {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_RestorePlayerInput params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABiped_Player::ShadowBlinkTeleport(AActor* InBlinkTarget, float InBlinkDistanceFromTarget, bool bIsGate, bool bIsStealth, FVector& OutBlinkLocation, FRotator& OutBlinkRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.ShadowBlinkTeleport"));
    struct Params_ShadowBlinkTeleport {
        AActor* InBlinkTarget; // 0x0
        float InBlinkDistanceFromTarget; // 0x8
        bool bIsGate; // 0xc
        bool bIsStealth; // 0xd
        char pad_e[0x2];
        FVector OutBlinkLocation; // 0x10
        FRotator OutBlinkRotation; // 0x1c
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_ShadowBlinkTeleport params{};
    params.InBlinkTarget = (AActor*)InBlinkTarget;
    params.InBlinkDistanceFromTarget = (float)InBlinkDistanceFromTarget;
    params.bIsGate = (bool)bIsGate;
    params.bIsStealth = (bool)bIsStealth;
    params.OutBlinkLocation = (FVector)OutBlinkLocation;
    params.OutBlinkRotation = (FRotator)OutBlinkRotation;
    ProcessEvent(func, &params);
    OutBlinkLocation = params.OutBlinkLocation;
    OutBlinkRotation = params.OutBlinkRotation;
    return (bool)params.ReturnValue;
}
void ABiped_Player::SetWandStyle(FName WandStyle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetWandStyle"));
    struct Params_SetWandStyle {
        FName WandStyle; // 0x0
    }; // Size: 0x8
    Params_SetWandStyle params{};
    params.WandStyle = (FName)WandStyle;
    ProcessEvent(func, &params);
}
void ABiped_Player::SetWandBaseStyle(FName InWandBase) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetWandBaseStyle"));
    struct Params_SetWandBaseStyle {
        FName InWandBase; // 0x0
    }; // Size: 0x8
    Params_SetWandBaseStyle params{};
    params.InWandBase = (FName)InWandBase;
    ProcessEvent(func, &params);
}
bool ABiped_Player::SetPlayerSocialHeritage(SocialHeritageStatusIDs NewHeritage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetPlayerSocialHeritage"));
    struct Params_SetPlayerSocialHeritage {
        SocialHeritageStatusIDs NewHeritage; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_SetPlayerSocialHeritage params{};
    params.NewHeritage = (SocialHeritageStatusIDs)NewHeritage;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABiped_Player::SetPlayerGenderPronoun(EGenderPronoun NewGenderPronoun) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetPlayerGenderPronoun"));
    struct Params_SetPlayerGenderPronoun {
        EGenderPronoun NewGenderPronoun; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_SetPlayerGenderPronoun params{};
    params.NewGenderPronoun = (EGenderPronoun)NewGenderPronoun;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABiped_Player::CameraStickLastMovedChanged(bool InCameraStickMoved) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.CameraStickLastMovedChanged"));
    struct Params_CameraStickLastMovedChanged {
        bool InCameraStickMoved; // 0x0
    }; // Size: 0x1
    Params_CameraStickLastMovedChanged params{};
    params.InCameraStickMoved = (bool)InCameraStickMoved;
    ProcessEvent(func, &params);
}
void ABiped_Player::SetPhoenixCameraLookAt_TimeBased(FVector& LookAtPoint, float LookAtTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetPhoenixCameraLookAt_TimeBased"));
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
void ABiped_Player::SetPhoenixCameraLookAt_ActorAndTime(AActor* LookAtActor, float LookAtTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetPhoenixCameraLookAt_ActorAndTime"));
    struct Params_SetPhoenixCameraLookAt_ActorAndTime {
        AActor* LookAtActor; // 0x0
        float LookAtTime; // 0x8
    }; // Size: 0xc
    Params_SetPhoenixCameraLookAt_ActorAndTime params{};
    params.LookAtActor = (AActor*)LookAtActor;
    params.LookAtTime = (float)LookAtTime;
    ProcessEvent(func, &params);
}
void ABiped_Player::SetPhoenixCameraLookAt_Actor(AActor* LookAtActor, float ScaleSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetPhoenixCameraLookAt_Actor"));
    struct Params_SetPhoenixCameraLookAt_Actor {
        AActor* LookAtActor; // 0x0
        float ScaleSpeed; // 0x8
    }; // Size: 0xc
    Params_SetPhoenixCameraLookAt_Actor params{};
    params.LookAtActor = (AActor*)LookAtActor;
    params.ScaleSpeed = (float)ScaleSpeed;
    ProcessEvent(func, &params);
}
void ABiped_Player::SetOverrideWandStyle(FName WandStyle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetOverrideWandStyle"));
    struct Params_SetOverrideWandStyle {
        FName WandStyle; // 0x0
    }; // Size: 0x8
    Params_SetOverrideWandStyle params{};
    params.WandStyle = (FName)WandStyle;
    ProcessEvent(func, &params);
}
void ABiped_Player::SetMotionListener(UAkComponent* AkComponent, bool PlayerOrientation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetMotionListener"));
    struct Params_SetMotionListener {
        UAkComponent* AkComponent; // 0x0
        bool PlayerOrientation; // 0x8
    }; // Size: 0x9
    Params_SetMotionListener params{};
    params.AkComponent = (UAkComponent*)AkComponent;
    params.PlayerOrientation = (bool)PlayerOrientation;
    ProcessEvent(func, &params);
}
void ABiped_Player::ResetComboPoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.ResetComboPoints"));
    struct Params_ResetComboPoints {
    }; // Size: 0x0
    Params_ResetComboPoints params{};
    ProcessEvent(func, &params);
}
int32_t ABiped_Player::GetPlantCount(FString trackerName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetPlantCount"));
    struct Params_GetPlantCount {
        FString trackerName; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetPlantCount params{};
    params.trackerName = (FString)trackerName;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void ABiped_Player::SetManagedAM(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetManagedAM"));
    struct Params_SetManagedAM {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetManagedAM params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void ABiped_Player::SetCooldownRateScale(float RateScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetCooldownRateScale"));
    struct Params_SetCooldownRateScale {
        float RateScale; // 0x0
    }; // Size: 0x4
    Params_SetCooldownRateScale params{};
    params.RateScale = (float)RateScale;
    ProcessEvent(func, &params);
}
void ABiped_Player::SetLastSafeInteractLocation(FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetLastSafeInteractLocation"));
    struct Params_SetLastSafeInteractLocation {
        FVector Location; // 0x0
    }; // Size: 0xc
    Params_SetLastSafeInteractLocation params{};
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
}
void ABiped_Player::SetLastEdgeState(EEdgeState::Type InEdgeState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetLastEdgeState"));
    struct Params_SetLastEdgeState {
        EEdgeState::Type InEdgeState; // 0x0
    }; // Size: 0x1
    Params_SetLastEdgeState params{};
    params.InEdgeState = (EEdgeState::Type)InEdgeState;
    ProcessEvent(func, &params);
}
void ABiped_Player::HideReticle(bool bHide) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.HideReticle"));
    struct Params_HideReticle {
        bool bHide; // 0x0
    }; // Size: 0x1
    Params_HideReticle params{};
    params.bHide = (bool)bHide;
    ProcessEvent(func, &params);
}
void ABiped_Player::SetInvulnerable(bool bInInvulnerable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetInvulnerable"));
    struct Params_SetInvulnerable {
        bool bInInvulnerable; // 0x0
    }; // Size: 0x1
    Params_SetInvulnerable params{};
    params.bInInvulnerable = (bool)bInInvulnerable;
    ProcessEvent(func, &params);
}
void ABiped_Player::SetInLockOnMode(bool bInFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetInLockOnMode"));
    struct Params_SetInLockOnMode {
        bool bInFlag; // 0x0
    }; // Size: 0x1
    Params_SetInLockOnMode params{};
    params.bInFlag = (bool)bInFlag;
    ProcessEvent(func, &params);
}
bool ABiped_Player::QuickActionInteract(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.QuickActionInteract"));
    struct Params_QuickActionInteract {
        int32_t Index; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_QuickActionInteract params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABiped_Player::SetInteractStickyTarget(bool bSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetInteractStickyTarget"));
    struct Params_SetInteractStickyTarget {
        bool bSet; // 0x0
    }; // Size: 0x1
    Params_SetInteractStickyTarget params{};
    params.bSet = (bool)bSet;
    ProcessEvent(func, &params);
}
void ABiped_Player::SetFieldGuideHotSpot(AFieldGuideHotSpot* InFieldGuideHotSpot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetFieldGuideHotSpot"));
    struct Params_SetFieldGuideHotSpot {
        AFieldGuideHotSpot* InFieldGuideHotSpot; // 0x0
    }; // Size: 0x8
    Params_SetFieldGuideHotSpot params{};
    params.InFieldGuideHotSpot = (AFieldGuideHotSpot*)InFieldGuideHotSpot;
    ProcessEvent(func, &params);
}
void ABiped_Player::SetDodgeDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetDodgeDirection"));
    struct Params_SetDodgeDirection {
    }; // Size: 0x0
    Params_SetDodgeDirection params{};
    ProcessEvent(func, &params);
}
FVector ABiped_Player::GetLastSafeLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetLastSafeLocation"));
    struct Params_GetLastSafeLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetLastSafeLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void ABiped_Player::SetDisableCombatPlantHideOnSuspendEnemies(bool bInVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetDisableCombatPlantHideOnSuspendEnemies"));
    struct Params_SetDisableCombatPlantHideOnSuspendEnemies {
        bool bInVal; // 0x0
    }; // Size: 0x1
    Params_SetDisableCombatPlantHideOnSuspendEnemies params{};
    params.bInVal = (bool)bInVal;
    ProcessEvent(func, &params);
}
void ABiped_Player::SetCameraStyle(FName CameraStyle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetCameraStyle"));
    struct Params_SetCameraStyle {
        FName CameraStyle; // 0x0
    }; // Size: 0x8
    Params_SetCameraStyle params{};
    params.CameraStyle = (FName)CameraStyle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ABiped_Player::ReleasePhoenixCameraLookAt() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.ReleasePhoenixCameraLookAt"));
    struct Params_ReleasePhoenixCameraLookAt {
    }; // Size: 0x0
    Params_ReleasePhoenixCameraLookAt params{};
    ProcessEvent(func, &params);
}
void ABiped_Player::SetAutoTargetingDirection(FVector InWorldDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetAutoTargetingDirection"));
    struct Params_SetAutoTargetingDirection {
        FVector InWorldDirection; // 0x0
    }; // Size: 0xc
    Params_SetAutoTargetingDirection params{};
    params.InWorldDirection = (FVector)InWorldDirection;
    ProcessEvent(func, &params);
}
UCurveFloat* ABiped_Player::GetSpeedGovernorCurve() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetSpeedGovernorCurve"));
    struct Params_GetSpeedGovernorCurve {
        UCurveFloat* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSpeedGovernorCurve params{};
    ProcessEvent(func, &params);
    return (UCurveFloat*)params.ReturnValue;
}
void ABiped_Player::SetAccessibilitySpellToggle(bool ToggleOn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SetAccessibilitySpellToggle"));
    struct Params_SetAccessibilitySpellToggle {
        bool ToggleOn; // 0x0
    }; // Size: 0x1
    Params_SetAccessibilitySpellToggle params{};
    params.ToggleOn = (bool)ToggleOn;
    ProcessEvent(func, &params);
}
AActor* ABiped_Player::Set_WandCast_TargetTrackerTargets(bool bIgnoreTargets, AActor* InTargetOverride, FVector InTargetOverrideWorldLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.Set_WandCast_TargetTrackerTargets"));
    struct Params_Set_WandCast_TargetTrackerTargets {
        bool bIgnoreTargets; // 0x0
        char pad_1[0x7];
        AActor* InTargetOverride; // 0x8
        FVector InTargetOverrideWorldLocation; // 0x10
        char pad_1c[0x4];
        AActor* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_Set_WandCast_TargetTrackerTargets params{};
    params.bIgnoreTargets = (bool)bIgnoreTargets;
    params.InTargetOverride = (AActor*)InTargetOverride;
    params.InTargetOverrideWorldLocation = (FVector)InTargetOverrideWorldLocation;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void ABiped_Player::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
void ABiped_Player::SendCriticalMunitionImpactToTarget(AActor* TargetActor, FName UniqueTag, TArray<UInteractionArchitectAsset*>& MunitionDataAssets, FGameplayTagContainer& MunitionTagContainer, float Damage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SendCriticalMunitionImpactToTarget"));
    struct Params_SendCriticalMunitionImpactToTarget {
        AActor* TargetActor; // 0x0
        FName UniqueTag; // 0x8
        TArray<UInteractionArchitectAsset*> MunitionDataAssets; // 0x10
        FGameplayTagContainer MunitionTagContainer; // 0x20
        float Damage; // 0x40
    }; // Size: 0x44
    Params_SendCriticalMunitionImpactToTarget params{};
    params.TargetActor = (AActor*)TargetActor;
    params.UniqueTag = (FName)UniqueTag;
    params.MunitionDataAssets = (TArray<UInteractionArchitectAsset*>)MunitionDataAssets;
    params.MunitionTagContainer = (FGameplayTagContainer)MunitionTagContainer;
    params.Damage = (float)Damage;
    ProcessEvent(func, &params);
    MunitionDataAssets = params.MunitionDataAssets;
    MunitionTagContainer = params.MunitionTagContainer;
}
bool ABiped_Player::SafeTeleportTo(FVector& DestLocation, FRotator& DestRotation, bool bIsATest, bool bNoCheck) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.SafeTeleportTo"));
    struct Params_SafeTeleportTo {
        FVector DestLocation; // 0x0
        FRotator DestRotation; // 0xc
        bool bIsATest; // 0x18
        bool bNoCheck; // 0x19
        bool ReturnValue; // 0x1a
    }; // Size: 0x1b
    Params_SafeTeleportTo params{};
    params.DestLocation = (FVector)DestLocation;
    params.DestRotation = (FRotator)DestRotation;
    params.bIsATest = (bool)bIsATest;
    params.bNoCheck = (bool)bNoCheck;
    ProcessEvent(func, &params);
    DestLocation = params.DestLocation;
    DestRotation = params.DestRotation;
    return (bool)params.ReturnValue;
}
void ABiped_Player::RestoreHealth() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.RestoreHealth"));
    struct Params_RestoreHealth {
    }; // Size: 0x0
    Params_RestoreHealth params{};
    ProcessEvent(func, &params);
}
void ABiped_Player::OnBlackboardInitialized(bool bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.OnBlackboardInitialized"));
    struct Params_OnBlackboardInitialized {
        bool bSuccess; // 0x0
    }; // Size: 0x1
    Params_OnBlackboardInitialized params{};
    params.bSuccess = (bool)bSuccess;
    ProcessEvent(func, &params);
}
void ABiped_Player::ResetStickTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.ResetStickTime"));
    struct Params_ResetStickTime {
    }; // Size: 0x0
    Params_ResetStickTime params{};
    ProcessEvent(func, &params);
}
void ABiped_Player::ResetPhoenixCameraRotation(float ResetSpeed, UCurveFloat* ResetSpeedCurve) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.ResetPhoenixCameraRotation"));
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
void ABiped_Player::RecordSafeLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.RecordSafeLocation"));
    struct Params_RecordSafeLocation {
    }; // Size: 0x0
    Params_RecordSafeLocation params{};
    ProcessEvent(func, &params);
}
void ABiped_Player::RecordSafeInteractLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.RecordSafeInteractLocation"));
    struct Params_RecordSafeInteractLocation {
    }; // Size: 0x0
    Params_RecordSafeInteractLocation params{};
    ProcessEvent(func, &params);
}
float ABiped_Player::CalculateVendorPricesModifier(FVendorTransactionInfo& Info) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.CalculateVendorPricesModifier"));
    struct Params_CalculateVendorPricesModifier {
        FVendorTransactionInfo Info; // 0x0
        float ReturnValue; // 0x14
    }; // Size: 0x18
    Params_CalculateVendorPricesModifier params{};
    params.Info = (FVendorTransactionInfo)Info;
    ProcessEvent(func, &params);
    Info = params.Info;
    return (float)params.ReturnValue;
}
void ABiped_Player::PutPlayerIntoCinematicState(bool bFlag, bool bAlterAbilities) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.PutPlayerIntoCinematicState"));
    struct Params_PutPlayerIntoCinematicState {
        bool bFlag; // 0x0
        bool bAlterAbilities; // 0x1
    }; // Size: 0x2
    Params_PutPlayerIntoCinematicState params{};
    params.bFlag = (bool)bFlag;
    params.bAlterAbilities = (bool)bAlterAbilities;
    ProcessEvent(func, &params);
}
bool ABiped_Player::HandleDodgeUnblockable(AActor*& OutAttacker) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.HandleDodgeUnblockable"));
    struct Params_HandleDodgeUnblockable {
        AActor* OutAttacker; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_HandleDodgeUnblockable params{};
    params.OutAttacker = (AActor*)OutAttacker;
    ProcessEvent(func, &params);
    OutAttacker = params.OutAttacker;
    return (bool)params.ReturnValue;
}
void ABiped_Player::PushDisableStack(FName_GameLogicVarInt32 StackName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.PushDisableStack"));
    struct Params_PushDisableStack {
        FName_GameLogicVarInt32 StackName; // 0x0
    }; // Size: 0x8
    Params_PushDisableStack params{};
    params.StackName = (FName_GameLogicVarInt32)StackName;
    ProcessEvent(func, &params);
}
bool ABiped_Player::ProcessStick(float StickX, float StickY, float DeltaTime, UCurveFloat* DeadZoneCurve, UCurveFloat* SpeedCurve, UCurveFloat* SpeedGovernorCurve, float& WorldSpeed, FVector& WorldDirection, ECustomInterpType::Type InterpType, float InterpSpeed, float StickMagReductionDelayTimer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.ProcessStick"));
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
bool ABiped_Player::InCombatMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.InCombatMode"));
    struct Params_InCombatMode {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_InCombatMode params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABiped_Player::ProcessFollowTarget(AActor* InFollowActor, UCurveFloat* SpeedCurve, float& OutWorldSpeed, FVector& OutWorldDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.ProcessFollowTarget"));
    struct Params_ProcessFollowTarget {
        AActor* InFollowActor; // 0x0
        UCurveFloat* SpeedCurve; // 0x8
        float OutWorldSpeed; // 0x10
        FVector OutWorldDirection; // 0x14
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_ProcessFollowTarget params{};
    params.InFollowActor = (AActor*)InFollowActor;
    params.SpeedCurve = (UCurveFloat*)SpeedCurve;
    params.OutWorldSpeed = (float)OutWorldSpeed;
    params.OutWorldDirection = (FVector)OutWorldDirection;
    ProcessEvent(func, &params);
    OutWorldDirection = params.OutWorldDirection;
    OutWorldSpeed = params.OutWorldSpeed;
    return (bool)params.ReturnValue;
}
AActor* ABiped_Player::PrepCriticalFinisher() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.PrepCriticalFinisher"));
    struct Params_PrepCriticalFinisher {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_PrepCriticalFinisher params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void ABiped_Player::OnNewGame(UObject* InCaller, bool bInIsIntro) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.OnNewGame"));
    struct Params_OnNewGame {
        UObject* InCaller; // 0x0
        bool bInIsIntro; // 0x8
    }; // Size: 0x9
    Params_OnNewGame params{};
    params.InCaller = (UObject*)InCaller;
    params.bInIsIntro = (bool)bInIsIntro;
    ProcessEvent(func, &params);
}
void ABiped_Player::PopDisableStack(FName_GameLogicVarInt32 StackName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.PopDisableStack"));
    struct Params_PopDisableStack {
        FName_GameLogicVarInt32 StackName; // 0x0
    }; // Size: 0x8
    Params_PopDisableStack params{};
    params.StackName = (FName_GameLogicVarInt32)StackName;
    ProcessEvent(func, &params);
}
void ABiped_Player::PlayerGetOutOfBed(AStation* BedStation, UClass* PlayerBedAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.PlayerGetOutOfBed"));
    struct Params_PlayerGetOutOfBed {
        AStation* BedStation; // 0x0
        UClass* PlayerBedAbility; // 0x8
    }; // Size: 0x10
    Params_PlayerGetOutOfBed params{};
    params.BedStation = (AStation*)BedStation;
    params.PlayerBedAbility = (UClass*)PlayerBedAbility;
    ProcessEvent(func, &params);
}
void ABiped_Player::AddCustomCamera(UCameraComponent* customCam, float weight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.AddCustomCamera"));
    struct Params_AddCustomCamera {
        UCameraComponent* customCam; // 0x0
        float weight; // 0x8
    }; // Size: 0xc
    Params_AddCustomCamera params{};
    params.customCam = (UCameraComponent*)customCam;
    params.weight = (float)weight;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool ABiped_Player::PlacePlayerInBed(AStation*& BedStation, UClass*& PlayerBedAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.PlacePlayerInBed"));
    struct Params_PlacePlayerInBed {
        AStation* BedStation; // 0x0
        UClass* PlayerBedAbility; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_PlacePlayerInBed params{};
    params.BedStation = (AStation*)BedStation;
    params.PlayerBedAbility = (UClass*)PlayerBedAbility;
    ProcessEvent(func, &params);
    PlayerBedAbility = params.PlayerBedAbility;
    BedStation = params.BedStation;
    return (bool)params.ReturnValue;
}
void ABiped_Player::OnTeleportTo__DelegateSignature(FVector PrevLocation, FRotator PrevRotation, bool bIsATest, bool bNoCheck, bool bSuccess) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.Biped_Player.OnTeleportTo__DelegateSignature"));
    struct Params_OnTeleportTo__DelegateSignature {
        FVector PrevLocation; // 0x0
        FRotator PrevRotation; // 0xc
        bool bIsATest; // 0x18
        bool bNoCheck; // 0x19
        bool bSuccess; // 0x1a
    }; // Size: 0x1b
    Params_OnTeleportTo__DelegateSignature params{};
    params.PrevLocation = (FVector)PrevLocation;
    params.PrevRotation = (FRotator)PrevRotation;
    params.bIsATest = (bool)bIsATest;
    params.bNoCheck = (bool)bNoCheck;
    params.bSuccess = (bool)bSuccess;
    ProcessEvent(func, &params);
}
bool ABiped_Player::PlaceOnGround(float DownDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.PlaceOnGround"));
    struct Params_PlaceOnGround {
        float DownDistance; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_PlaceOnGround params{};
    params.DownDistance = (float)DownDistance;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABiped_Player::PauseComboTimeout() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.PauseComboTimeout"));
    struct Params_PauseComboTimeout {
    }; // Size: 0x0
    Params_PauseComboTimeout params{};
    ProcessEvent(func, &params);
}
void ABiped_Player::OnSpellCooldownChanged__DelegateSignature(FName SpellName, float CooldownPct) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.Biped_Player.OnSpellCooldownChanged__DelegateSignature"));
    struct Params_OnSpellCooldownChanged__DelegateSignature {
        FName SpellName; // 0x0
        float CooldownPct; // 0x8
    }; // Size: 0xc
    Params_OnSpellCooldownChanged__DelegateSignature params{};
    params.SpellName = (FName)SpellName;
    params.CooldownPct = (float)CooldownPct;
    ProcessEvent(func, &params);
}
void ABiped_Player::CognitionTargetHealthChanged(AActor* Target, float InHealthChanged, bool bIndicateHUD) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.CognitionTargetHealthChanged"));
    struct Params_CognitionTargetHealthChanged {
        AActor* Target; // 0x0
        float InHealthChanged; // 0x8
        bool bIndicateHUD; // 0xc
    }; // Size: 0xd
    Params_CognitionTargetHealthChanged params{};
    params.Target = (AActor*)Target;
    params.InHealthChanged = (float)InHealthChanged;
    params.bIndicateHUD = (bool)bIndicateHUD;
    ProcessEvent(func, &params);
}
void ABiped_Player::ComputeAimOffset(FName BoneName, float& Pitch, float& Yaw) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.ComputeAimOffset"));
    struct Params_ComputeAimOffset {
        FName BoneName; // 0x0
        float Pitch; // 0x8
        float Yaw; // 0xc
    }; // Size: 0x10
    Params_ComputeAimOffset params{};
    params.BoneName = (FName)BoneName;
    params.Pitch = (float)Pitch;
    params.Yaw = (float)Yaw;
    ProcessEvent(func, &params);
    Pitch = params.Pitch;
    Yaw = params.Yaw;
}
bool ABiped_Player::IsHoverDroneActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.IsHoverDroneActive"));
    struct Params_IsHoverDroneActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsHoverDroneActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABiped_Player::OnQuickItemSlotted(UObject* InCaller, FName& ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.OnQuickItemSlotted"));
    struct Params_OnQuickItemSlotted {
        UObject* InCaller; // 0x0
        FName ItemName; // 0x8
    }; // Size: 0x10
    Params_OnQuickItemSlotted params{};
    params.InCaller = (UObject*)InCaller;
    params.ItemName = (FName)ItemName;
    ProcessEvent(func, &params);
    ItemName = params.ItemName;
}
void ABiped_Player::OnFocusChanged__DelegateSignature(AActor* Target, float InFocusChange) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.Biped_Player.OnFocusChanged__DelegateSignature"));
    struct Params_OnFocusChanged__DelegateSignature {
        AActor* Target; // 0x0
        float InFocusChange; // 0x8
    }; // Size: 0xc
    Params_OnFocusChanged__DelegateSignature params{};
    params.Target = (AActor*)Target;
    params.InFocusChange = (float)InFocusChange;
    ProcessEvent(func, &params);
}
bool ABiped_Player::GetIsOnAMountOrInTransition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetIsOnAMountOrInTransition"));
    struct Params_GetIsOnAMountOrInTransition {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsOnAMountOrInTransition params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABiped_Player::OnCurtainRaised() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.OnCurtainRaised"));
    struct Params_OnCurtainRaised {
    }; // Size: 0x0
    Params_OnCurtainRaised params{};
    ProcessEvent(func, &params);
}
void ABiped_Player::OnCharacterLoadComplete(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.OnCharacterLoadComplete"));
    struct Params_OnCharacterLoadComplete {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_OnCharacterLoadComplete params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
void ABiped_Player::OnAboutToSaveGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.OnAboutToSaveGame"));
    struct Params_OnAboutToSaveGame {
    }; // Size: 0x0
    Params_OnAboutToSaveGame params{};
    ProcessEvent(func, &params);
}
bool ABiped_Player::IsManagedAMEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.IsManagedAMEnabled"));
    struct Params_IsManagedAMEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsManagedAMEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABiped_Player::OnAbilityAnimationBecameActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.OnAbilityAnimationBecameActive"));
    struct Params_OnAbilityAnimationBecameActive {
    }; // Size: 0x0
    Params_OnAbilityAnimationBecameActive params{};
    ProcessEvent(func, &params);
}
void ABiped_Player::NotifySucessfulBlock() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.NotifySucessfulBlock"));
    struct Params_NotifySucessfulBlock {
    }; // Size: 0x0
    Params_NotifySucessfulBlock params{};
    ProcessEvent(func, &params);
}
void ABiped_Player::NotifyDodgeFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.NotifyDodgeFinished"));
    struct Params_NotifyDodgeFinished {
    }; // Size: 0x0
    Params_NotifyDodgeFinished params{};
    ProcessEvent(func, &params);
}
void ABiped_Player::LockOnCamFlick(UStickFlickWatcherRecord* InStickFlickWatcherRecord) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.LockOnCamFlick"));
    struct Params_LockOnCamFlick {
        UStickFlickWatcherRecord* InStickFlickWatcherRecord; // 0x0
    }; // Size: 0x8
    Params_LockOnCamFlick params{};
    params.InStickFlickWatcherRecord = (UStickFlickWatcherRecord*)InStickFlickWatcherRecord;
    ProcessEvent(func, &params);
}
bool ABiped_Player::IsVenomousTentaculaAtMax() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.IsVenomousTentaculaAtMax"));
    struct Params_IsVenomousTentaculaAtMax {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsVenomousTentaculaAtMax params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABiped_Player::LockOnCameraMoving(bool bFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.LockOnCameraMoving"));
    struct Params_LockOnCameraMoving {
        bool bFlag; // 0x0
    }; // Size: 0x1
    Params_LockOnCameraMoving params{};
    params.bFlag = (bool)bFlag;
    ProcessEvent(func, &params);
}
bool ABiped_Player::LoadInventoryItemByName(FName InventoryObjectID, FName HolderID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.LoadInventoryItemByName"));
    struct Params_LoadInventoryItemByName {
        FName InventoryObjectID; // 0x0
        FName HolderID; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_LoadInventoryItemByName params{};
    params.InventoryObjectID = (FName)InventoryObjectID;
    params.HolderID = (FName)HolderID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABiped_Player::LevelUp() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.LevelUp"));
    struct Params_LevelUp {
    }; // Size: 0x0
    Params_LevelUp params{};
    ProcessEvent(func, &params);
}
bool ABiped_Player::InLockOnMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.InLockOnMode"));
    struct Params_InLockOnMode {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_InLockOnMode params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABiped_Player::LEDDamageEffect(AActor* InActor, AActor* InInstigator, float InDamage, FHitResult& InHit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.LEDDamageEffect"));
    struct Params_LEDDamageEffect {
        AActor* InActor; // 0x0
        AActor* InInstigator; // 0x8
        float InDamage; // 0x10
        FHitResult InHit; // 0x14
    }; // Size: 0x9c
    Params_LEDDamageEffect params{};
    params.InActor = (AActor*)InActor;
    params.InInstigator = (AActor*)InInstigator;
    params.InDamage = (float)InDamage;
    params.InHit = (FHitResult)InHit;
    ProcessEvent(func, &params);
    InHit = params.InHit;
}
FVector ABiped_Player::GetBestAutoTargetActor_WorldLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetBestAutoTargetActor_WorldLocation"));
    struct Params_GetBestAutoTargetActor_WorldLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetBestAutoTargetActor_WorldLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void ABiped_Player::LeafNodeSwitched() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.LeafNodeSwitched"));
    struct Params_LeafNodeSwitched {
    }; // Size: 0x0
    Params_LeafNodeSwitched params{};
    ProcessEvent(func, &params);
}
void ABiped_Player::AdjustCooldownsByCategory(float Time, ESpellCategory SpellCategory) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.AdjustCooldownsByCategory"));
    struct Params_AdjustCooldownsByCategory {
        float Time; // 0x0
        ESpellCategory SpellCategory; // 0x4
    }; // Size: 0x5
    Params_AdjustCooldownsByCategory params{};
    params.Time = (float)Time;
    params.SpellCategory = (ESpellCategory)SpellCategory;
    ProcessEvent(func, &params);
}
bool ABiped_Player::IsSwimming() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.IsSwimming"));
    struct Params_IsSwimming {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSwimming params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABiped_Player::IgnoreRetaliateTarget(AActor* RetaliateTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.IgnoreRetaliateTarget"));
    struct Params_IgnoreRetaliateTarget {
        AActor* RetaliateTarget; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IgnoreRetaliateTarget params{};
    params.RetaliateTarget = (AActor*)RetaliateTarget;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABiped_Player::IsPlayingIntro() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.IsPlayingIntro"));
    struct Params_IsPlayingIntro {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlayingIntro params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABiped_Player::IsPerfectRetaliate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.IsPerfectRetaliate"));
    struct Params_IsPerfectRetaliate {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPerfectRetaliate params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABiped_Player::IsInventoryItemHighlighted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.IsInventoryItemHighlighted"));
    struct Params_IsInventoryItemHighlighted {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInventoryItemHighlighted params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABiped_Player::IsInLockOnMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.IsInLockOnMode"));
    struct Params_IsInLockOnMode {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInLockOnMode params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABiped_Player::IsCameraMoving() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.IsCameraMoving"));
    struct Params_IsCameraMoving {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCameraMoving params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABiped_Player::IsFinisherAvailable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.IsFinisherAvailable"));
    struct Params_IsFinisherAvailable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFinisherAvailable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABiped_Player::IsCrawling() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.IsCrawling"));
    struct Params_IsCrawling {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCrawling params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABiped_Player::IsChompingCabbageAtMax() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.IsChompingCabbageAtMax"));
    struct Params_IsChompingCabbageAtMax {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsChompingCabbageAtMax params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABiped_Player::IsAMPushAvailable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.IsAMPushAvailable"));
    struct Params_IsAMPushAvailable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAMPushAvailable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABiped_Player::InteractingWithActor(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.InteractingWithActor"));
    struct Params_InteractingWithActor {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_InteractingWithActor params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
float ABiped_Player::GetCompanionsAtMaxLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetCompanionsAtMaxLevel"));
    struct Params_GetCompanionsAtMaxLevel {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCompanionsAtMaxLevel params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool ABiped_Player::InstaUseInventoryItem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.InstaUseInventoryItem"));
    struct Params_InstaUseInventoryItem {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_InstaUseInventoryItem params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABiped_Player::InCombatModeDelayed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.InCombatModeDelayed"));
    struct Params_InCombatModeDelayed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_InCombatModeDelayed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABiped_Player::HighestEnemyChanged(AActor* InEnemyActor, int32_t InLevelDiff) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.HighestEnemyChanged"));
    struct Params_HighestEnemyChanged {
        AActor* InEnemyActor; // 0x0
        int32_t InLevelDiff; // 0x8
    }; // Size: 0xc
    Params_HighestEnemyChanged params{};
    params.InEnemyActor = (AActor*)InEnemyActor;
    params.InLevelDiff = (int32_t)InLevelDiff;
    ProcessEvent(func, &params);
}
bool ABiped_Player::HasMandrakeTalent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.HasMandrakeTalent"));
    struct Params_HasMandrakeTalent {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasMandrakeTalent params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t ABiped_Player::GetOffenseStat() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetOffenseStat"));
    struct Params_GetOffenseStat {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetOffenseStat params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void ABiped_Player::HandleVenomousTentaculaCountChanged() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.HandleVenomousTentaculaCountChanged"));
    struct Params_HandleVenomousTentaculaCountChanged {
    }; // Size: 0x0
    Params_HandleVenomousTentaculaCountChanged params{};
    ProcessEvent(func, &params);
}
void ABiped_Player::HandleActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.HandleActorHit"));
    struct Params_HandleActorHit {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
        FVector NormalImpulse; // 0x10
        FHitResult Hit; // 0x1c
    }; // Size: 0xa4
    Params_HandleActorHit params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
FName ABiped_Player::GetWandStyle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetWandStyle"));
    struct Params_GetWandStyle {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetWandStyle params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
EGenderPronoun ABiped_Player::GetPlayerGenderPronoun() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetPlayerGenderPronoun"));
    struct Params_GetPlayerGenderPronoun {
        EGenderPronoun ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPlayerGenderPronoun params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EGenderPronoun)params.ReturnValue;
}
FName ABiped_Player::GetWandBaseStyle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetWandBaseStyle"));
    struct Params_GetWandBaseStyle {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetWandBaseStyle params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
int32_t ABiped_Player::GetVenomousTentaculaCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetVenomousTentaculaCount"));
    struct Params_GetVenomousTentaculaCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetVenomousTentaculaCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
ABiped_Player* ABiped_Player::GetTheBipedPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetTheBipedPlayer"));
    struct Params_GetTheBipedPlayer {
        ABiped_Player* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTheBipedPlayer params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ABiped_Player*)params.ReturnValue;
}
UCurveFloat* ABiped_Player::GetSpeedCurve(bool& bIgnoreGovernor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetSpeedCurve"));
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
SocialHeritageStatusIDs ABiped_Player::GetPlayerSocialHeritage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetPlayerSocialHeritage"));
    struct Params_GetPlayerSocialHeritage {
        SocialHeritageStatusIDs ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPlayerSocialHeritage params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (SocialHeritageStatusIDs)params.ReturnValue;
}
float ABiped_Player::GetPlayerMovementDuration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetPlayerMovementDuration"));
    struct Params_GetPlayerMovementDuration {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlayerMovementDuration params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ABiped_Player::GetPlayerLastUsedItemEffectiveness() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetPlayerLastUsedItemEffectiveness"));
    struct Params_GetPlayerLastUsedItemEffectiveness {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlayerLastUsedItemEffectiveness params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ABiped_Player::CalculateSilencioRangeModifier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.CalculateSilencioRangeModifier"));
    struct Params_CalculateSilencioRangeModifier {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_CalculateSilencioRangeModifier params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ABiped_Player::GetExpectedDistanceFromTarget(bool bIgnoreTargets, AActor* InTargetOverride, bool& bFound, FVector& ToTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetExpectedDistanceFromTarget"));
    struct Params_GetExpectedDistanceFromTarget {
        bool bIgnoreTargets; // 0x0
        char pad_1[0x7];
        AActor* InTargetOverride; // 0x8
        bool bFound; // 0x10
        char pad_11[0x3];
        FVector ToTarget; // 0x14
        float ReturnValue; // 0x20
    }; // Size: 0x24
    Params_GetExpectedDistanceFromTarget params{};
    params.bIgnoreTargets = (bool)bIgnoreTargets;
    params.InTargetOverride = (AActor*)InTargetOverride;
    params.bFound = (bool)bFound;
    params.ToTarget = (FVector)ToTarget;
    ProcessEvent(func, &params);
    bFound = params.bFound;
    ToTarget = params.ToTarget;
    return (float)params.ReturnValue;
}
void ABiped_Player::GetMoveStickValues(float& X, float& Y) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetMoveStickValues"));
    struct Params_GetMoveStickValues {
        float X; // 0x0
        float Y; // 0x4
    }; // Size: 0x8
    Params_GetMoveStickValues params{};
    params.X = (float)X;
    params.Y = (float)Y;
    ProcessEvent(func, &params);
    X = params.X;
    Y = params.Y;
}
UAkComponent* ABiped_Player::GetMotionListenerPlayerOrientation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetMotionListenerPlayerOrientation"));
    struct Params_GetMotionListenerPlayerOrientation {
        UAkComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMotionListenerPlayerOrientation params{};
    ProcessEvent(func, &params);
    return (UAkComponent*)params.ReturnValue;
}
bool ABiped_Player::GetAccessibilitySpellToggle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetAccessibilitySpellToggle"));
    struct Params_GetAccessibilitySpellToggle {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAccessibilitySpellToggle params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UAkComponent* ABiped_Player::GetMotionListenerCameraOrientation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetMotionListenerCameraOrientation"));
    struct Params_GetMotionListenerCameraOrientation {
        UAkComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMotionListenerCameraOrientation params{};
    ProcessEvent(func, &params);
    return (UAkComponent*)params.ReturnValue;
}
float ABiped_Player::GetMaxFocus() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetMaxFocus"));
    struct Params_GetMaxFocus {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxFocus params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector ABiped_Player::GetLastSafeInteractLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetLastSafeInteractLocation"));
    struct Params_GetLastSafeInteractLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetLastSafeInteractLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
int32_t ABiped_Player::GetInventorySizeModification() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetInventorySizeModification"));
    struct Params_GetInventorySizeModification {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetInventorySizeModification params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void ABiped_Player::DisableCooldownPickups(bool bDisable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.DisableCooldownPickups"));
    struct Params_DisableCooldownPickups {
        bool bDisable; // 0x0
    }; // Size: 0x1
    Params_DisableCooldownPickups params{};
    params.bDisable = (bool)bDisable;
    ProcessEvent(func, &params);
}
float ABiped_Player::GetHiddenAfterTakedownTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetHiddenAfterTakedownTime"));
    struct Params_GetHiddenAfterTakedownTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetHiddenAfterTakedownTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool ABiped_Player::GetGameLogicBoolVariable(FName_GameLogicVarBool BoolVar) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetGameLogicBoolVariable"));
    struct Params_GetGameLogicBoolVariable {
        FName_GameLogicVarBool BoolVar; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetGameLogicBoolVariable params{};
    params.BoolVar = (FName_GameLogicVarBool)BoolVar;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float ABiped_Player::GetFocusPercent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetFocusPercent"));
    struct Params_GetFocusPercent {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFocusPercent params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ABiped_Player::GetFocus() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetFocus"));
    struct Params_GetFocus {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFocus params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ABiped_Player::GetFinisherDamage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetFinisherDamage"));
    struct Params_GetFinisherDamage {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFinisherDamage params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t ABiped_Player::GetDefenseStat() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetDefenseStat"));
    struct Params_GetDefenseStat {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDefenseStat params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float ABiped_Player::GetCurrentCriticalHealthFadeOutPercent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetCurrentCriticalHealthFadeOutPercent"));
    struct Params_GetCurrentCriticalHealthFadeOutPercent {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentCriticalHealthFadeOutPercent params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t ABiped_Player::GetCooldownStat() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetCooldownStat"));
    struct Params_GetCooldownStat {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCooldownStat params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float ABiped_Player::GetCooldownRateScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetCooldownRateScale"));
    struct Params_GetCooldownRateScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCooldownRateScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ABiped_Player::GetCooldownPercentByName(FName SpellName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetCooldownPercentByName"));
    struct Params_GetCooldownPercentByName {
        FName SpellName; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetCooldownPercentByName params{};
    params.SpellName = (FName)SpellName;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ABiped_Player::GetCooldownPercent(USpellToolRecord* InSpellToolRecord) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetCooldownPercent"));
    struct Params_GetCooldownPercent {
        USpellToolRecord* InSpellToolRecord; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetCooldownPercent params{};
    params.InSpellToolRecord = (USpellToolRecord*)InSpellToolRecord;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t ABiped_Player::GetConsecutiveEnemyHits() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetConsecutiveEnemyHits"));
    struct Params_GetConsecutiveEnemyHits {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetConsecutiveEnemyHits params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float ABiped_Player::GetComboPoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetComboPoints"));
    struct Params_GetComboPoints {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetComboPoints params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t ABiped_Player::GetChompingCabbageMax() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetChompingCabbageMax"));
    struct Params_GetChompingCabbageMax {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetChompingCabbageMax params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FVector ABiped_Player::GetBestLockOnActor_WorldLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetBestLockOnActor_WorldLocation"));
    struct Params_GetBestLockOnActor_WorldLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetBestLockOnActor_WorldLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
int32_t ABiped_Player::GetChompingCabbageCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetChompingCabbageCount"));
    struct Params_GetChompingCabbageCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetChompingCabbageCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
ECharacterDeathType ABiped_Player::GetCauseOfDeath() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetCauseOfDeath"));
    struct Params_GetCauseOfDeath {
        ECharacterDeathType ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCauseOfDeath params{};
    ProcessEvent(func, &params);
    return (ECharacterDeathType)params.ReturnValue;
}
int32_t ABiped_Player::GetBonusSpellLoadouts() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetBonusSpellLoadouts"));
    struct Params_GetBonusSpellLoadouts {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetBonusSpellLoadouts params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void ABiped_Player::ClearStick() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.ClearStick"));
    struct Params_ClearStick {
    }; // Size: 0x0
    Params_ClearStick params{};
    ProcessEvent(func, &params);
}
int32_t ABiped_Player::GetBonusAncientMagicBars() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetBonusAncientMagicBars"));
    struct Params_GetBonusAncientMagicBars {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetBonusAncientMagicBars params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UBiped_AnimInstance* ABiped_Player::GetBipedAnimInstance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetBipedAnimInstance"));
    struct Params_GetBipedAnimInstance {
        UBiped_AnimInstance* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBipedAnimInstance params{};
    ProcessEvent(func, &params);
    return (UBiped_AnimInstance*)params.ReturnValue;
}
FVector ABiped_Player::GetBestLockOnActor_ScreenLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetBestLockOnActor_ScreenLocation"));
    struct Params_GetBestLockOnActor_ScreenLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetBestLockOnActor_ScreenLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float ABiped_Player::GetBaseOffenseStat() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetBaseOffenseStat"));
    struct Params_GetBaseOffenseStat {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetBaseOffenseStat params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ABiped_Player::GetBaseDefenseStat() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetBaseDefenseStat"));
    struct Params_GetBaseDefenseStat {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetBaseDefenseStat params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ABiped_Player::GetBaseCooldownStat() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.GetBaseCooldownStat"));
    struct Params_GetBaseCooldownStat {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetBaseCooldownStat params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ABiped_Player::DetectEdgeChange(FVector TestActorLocation, float TraceRadius, bool bSendEvents, bool bDebugDraw) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.DetectEdgeChange"));
    struct Params_DetectEdgeChange {
        FVector TestActorLocation; // 0x0
        float TraceRadius; // 0xc
        bool bSendEvents; // 0x10
        bool bDebugDraw; // 0x11
    }; // Size: 0x12
    Params_DetectEdgeChange params{};
    params.TestActorLocation = (FVector)TestActorLocation;
    params.TraceRadius = (float)TraceRadius;
    params.bSendEvents = (bool)bSendEvents;
    params.bDebugDraw = (bool)bDebugDraw;
    ProcessEvent(func, &params);
}
void ABiped_Player::FullyResetPhoenixCamera(float ResetSpeed, UCurveFloat* ResetSpeedCurve) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.FullyResetPhoenixCamera"));
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
void ABiped_Player::ForceEndDisillusionment() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.ForceEndDisillusionment"));
    struct Params_ForceEndDisillusionment {
    }; // Size: 0x0
    Params_ForceEndDisillusionment params{};
    ProcessEvent(func, &params);
}
void ABiped_Player::EndCriticalFinisher(AActor* InTargetActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.EndCriticalFinisher"));
    struct Params_EndCriticalFinisher {
        AActor* InTargetActor; // 0x0
    }; // Size: 0x8
    Params_EndCriticalFinisher params{};
    params.InTargetActor = (AActor*)InTargetActor;
    ProcessEvent(func, &params);
}
void ABiped_Player::EndBulletTime(float EaseOutDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.EndBulletTime"));
    struct Params_EndBulletTime {
        float EaseOutDuration; // 0x0
    }; // Size: 0x4
    Params_EndBulletTime params{};
    params.EaseOutDuration = (float)EaseOutDuration;
    ProcessEvent(func, &params);
}
void ABiped_Player::EnableManagedAM(bool Enabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.EnableManagedAM"));
    struct Params_EnableManagedAM {
        bool Enabled; // 0x0
    }; // Size: 0x1
    Params_EnableManagedAM params{};
    params.Enabled = (bool)Enabled;
    ProcessEvent(func, &params);
}
void ABiped_Player::DisablePlayerHealthRecovery(bool bDisable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.DisablePlayerHealthRecovery"));
    struct Params_DisablePlayerHealthRecovery {
        bool bDisable; // 0x0
    }; // Size: 0x1
    Params_DisablePlayerHealthRecovery params{};
    params.bDisable = (bool)bDisable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ABiped_Player::DEBUG_SetGlobalTimeDilation(UObject* WorldContextObject, float TimeDilation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.DEBUG_SetGlobalTimeDilation"));
    struct Params_DEBUG_SetGlobalTimeDilation {
        UObject* WorldContextObject; // 0x0
        float TimeDilation; // 0x8
    }; // Size: 0xc
    Params_DEBUG_SetGlobalTimeDilation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.TimeDilation = (float)TimeDilation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ABiped_Player::DamageDirectionEffect(AActor* InActor, AActor* InInstigator, float InDamage, FHitResult& InHit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.DamageDirectionEffect"));
    struct Params_DamageDirectionEffect {
        AActor* InActor; // 0x0
        AActor* InInstigator; // 0x8
        float InDamage; // 0x10
        FHitResult InHit; // 0x14
    }; // Size: 0x9c
    Params_DamageDirectionEffect params{};
    params.InActor = (AActor*)InActor;
    params.InInstigator = (AActor*)InInstigator;
    params.InDamage = (float)InDamage;
    params.InHit = (FHitResult)InHit;
    ProcessEvent(func, &params);
    InHit = params.InHit;
}
bool ABiped_Player::CreateLinkToAttackingActor(EEnemy_ParryButtonPressed ParryEventReason, bool& bOutDodgeWindow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.CreateLinkToAttackingActor"));
    struct Params_CreateLinkToAttackingActor {
        EEnemy_ParryButtonPressed ParryEventReason; // 0x0
        bool bOutDodgeWindow; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_CreateLinkToAttackingActor params{};
    params.ParryEventReason = (EEnemy_ParryButtonPressed)ParryEventReason;
    params.bOutDodgeWindow = (bool)bOutDodgeWindow;
    ProcessEvent(func, &params);
    bOutDodgeWindow = params.bOutDodgeWindow;
    return (bool)params.ReturnValue;
}
void ABiped_Player::CognitionTargetPlayerAwareStateChanged(ENPC_TargetAwareState InAwareState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.CognitionTargetPlayerAwareStateChanged"));
    struct Params_CognitionTargetPlayerAwareStateChanged {
        ENPC_TargetAwareState InAwareState; // 0x0
    }; // Size: 0x1
    Params_CognitionTargetPlayerAwareStateChanged params{};
    params.InAwareState = (ENPC_TargetAwareState)InAwareState;
    ProcessEvent(func, &params);
}
void ABiped_Player::ClearOverrideWandStyle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.ClearOverrideWandStyle"));
    struct Params_ClearOverrideWandStyle {
    }; // Size: 0x0
    Params_ClearOverrideWandStyle params{};
    ProcessEvent(func, &params);
}
void ABiped_Player::ClearInvulnerable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.ClearInvulnerable"));
    struct Params_ClearInvulnerable {
    }; // Size: 0x0
    Params_ClearInvulnerable params{};
    ProcessEvent(func, &params);
}
void ABiped_Player::ClearCustomCameras() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.ClearCustomCameras"));
    struct Params_ClearCustomCameras {
    }; // Size: 0x0
    Params_ClearCustomCameras params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ABiped_Player::ChangeManagedAM(float change) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.ChangeManagedAM"));
    struct Params_ChangeManagedAM {
        float change; // 0x0
    }; // Size: 0x4
    Params_ChangeManagedAM params{};
    params.change = (float)change;
    ProcessEvent(func, &params);
}
float ABiped_Player::CalculateStealRateModifier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.CalculateStealRateModifier"));
    struct Params_CalculateStealRateModifier {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_CalculateStealRateModifier params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ABiped_Player::CalculateSneakOScopeWindupModifier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.CalculateSneakOScopeWindupModifier"));
    struct Params_CalculateSneakOScopeWindupModifier {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_CalculateSneakOScopeWindupModifier params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ABiped_Player::CalculatePlantDamageModifier(FName DbId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.CalculatePlantDamageModifier"));
    struct Params_CalculatePlantDamageModifier {
        FName DbId; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_CalculatePlantDamageModifier params{};
    params.DbId = (FName)DbId;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ABiped_Player::CalculateMandrakeBonusReaction() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.CalculateMandrakeBonusReaction"));
    struct Params_CalculateMandrakeBonusReaction {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_CalculateMandrakeBonusReaction params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector ABiped_Player::CalculateLookAtDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.CalculateLookAtDirection"));
    struct Params_CalculateLookAtDirection {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_CalculateLookAtDirection params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
int32_t ABiped_Player::CalculateExtendedCompanionInventoryCapacity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.CalculateExtendedCompanionInventoryCapacity"));
    struct Params_CalculateExtendedCompanionInventoryCapacity {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_CalculateExtendedCompanionInventoryCapacity params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool ABiped_Player::AutoNavToTarget(AActor* InTarget, float InSpeed, float DistanceFromTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.AutoNavToTarget"));
    struct Params_AutoNavToTarget {
        AActor* InTarget; // 0x0
        float InSpeed; // 0x8
        float DistanceFromTarget; // 0xc
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_AutoNavToTarget params{};
    params.InTarget = (AActor*)InTarget;
    params.InSpeed = (float)InSpeed;
    params.DistanceFromTarget = (float)DistanceFromTarget;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABiped_Player::AllowStop(float InWorldSpeed, FVector InWorldDirection, float DeltaTime, float MinTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.AllowStop"));
    struct Params_AllowStop {
        float InWorldSpeed; // 0x0
        FVector InWorldDirection; // 0x4
        float DeltaTime; // 0x10
        float MinTime; // 0x14
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_AllowStop params{};
    params.InWorldSpeed = (float)InWorldSpeed;
    params.InWorldDirection = (FVector)InWorldDirection;
    params.DeltaTime = (float)DeltaTime;
    params.MinTime = (float)MinTime;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABiped_Player::AllowMove(float InWorldSpeed, FVector InWorldDirection, float DeltaTime, float MinTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.AllowMove"));
    struct Params_AllowMove {
        float InWorldSpeed; // 0x0
        FVector InWorldDirection; // 0x4
        float DeltaTime; // 0x10
        float MinTime; // 0x14
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_AllowMove params{};
    params.InWorldSpeed = (float)InWorldSpeed;
    params.InWorldDirection = (FVector)InWorldDirection;
    params.DeltaTime = (float)DeltaTime;
    params.MinTime = (float)MinTime;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABiped_Player::AdjustFocusByName(FName Name, float ExternalFocusModifier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.AdjustFocusByName"));
    struct Params_AdjustFocusByName {
        FName Name; // 0x0
        float ExternalFocusModifier; // 0x8
    }; // Size: 0xc
    Params_AdjustFocusByName params{};
    params.Name = (FName)Name;
    params.ExternalFocusModifier = (float)ExternalFocusModifier;
    ProcessEvent(func, &params);
}
void ABiped_Player::AdjustFocus(float change, float ExternalFocusModifier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.AdjustFocus"));
    struct Params_AdjustFocus {
        float change; // 0x0
        float ExternalFocusModifier; // 0x4
    }; // Size: 0x8
    Params_AdjustFocus params{};
    params.change = (float)change;
    params.ExternalFocusModifier = (float)ExternalFocusModifier;
    ProcessEvent(func, &params);
}
void ABiped_Player::AdjustComboPoints(EComboType ComboType, AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Player.AdjustComboPoints"));
    struct Params_AdjustComboPoints {
        EComboType ComboType; // 0x0
        char pad_1[0x7];
        AActor* Target; // 0x8
    }; // Size: 0x10
    Params_AdjustComboPoints params{};
    params.ComboType = (EComboType)ComboType;
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
