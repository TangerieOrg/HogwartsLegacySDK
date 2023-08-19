#include "AActor.hpp"
#include "AAmbulatory_Character.hpp"
#include "APawn.hpp"
#include "EVoiceOverCompanionSelection.hpp"
#include "EVoiceOverConditions.hpp"
#include "FCompanionFollowParams.hpp"
#include "FCompanionSettingData.hpp"
#include "FCompanionVolumeEntry.hpp"
#include "FCompanionVolumeSettings.hpp"
#include "FHitResult.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UCompanionConfigData.hpp"
#include "UCompanionManager.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UScheduledEntity.hpp"
void UCompanionManager::OnCompanionHealing(AActor* Instigator, float InHealthChange, AActor* TargetActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.OnCompanionHealing"));
    struct Params_OnCompanionHealing {
        AActor* Instigator; // 0x0
        float InHealthChange; // 0x8
        char pad_c[0x4];
        AActor* TargetActor; // 0x10
    }; // Size: 0x18
    Params_OnCompanionHealing params{};
    params.Instigator = (AActor*)Instigator;
    params.InHealthChange = (float)InHealthChange;
    params.TargetActor = (AActor*)TargetActor;
    ProcessEvent(func, &params);
}
bool UCompanionManager::TryCompanionTeleportBehindPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.TryCompanionTeleportBehindPlayer"));
    struct Params_TryCompanionTeleportBehindPlayer {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_TryCompanionTeleportBehindPlayer params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UCompanionManager* UCompanionManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CompanionManager");
    return (UCompanionManager*)res;
}
TArray<FName> UCompanionManager::GetDisabledSystemicCompanions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.GetDisabledSystemicCompanions"));
    struct Params_GetDisabledSystemicCompanions {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetDisabledSystemicCompanions params{};
    ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
bool UCompanionManager::TryCompanionTeleportBP(UScheduledEntity* ScheduledEntity, FVector& TargetLocation, FRotator& TargetRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.TryCompanionTeleportBP"));
    struct Params_TryCompanionTeleportBP {
        UScheduledEntity* ScheduledEntity; // 0x0
        FVector TargetLocation; // 0x8
        FRotator TargetRotation; // 0x14
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_TryCompanionTeleportBP params{};
    params.ScheduledEntity = (UScheduledEntity*)ScheduledEntity;
    params.TargetLocation = (FVector)TargetLocation;
    params.TargetRotation = (FRotator)TargetRotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetLocation = params.TargetLocation;
    TargetRotation = params.TargetRotation;
    return (bool)params.ReturnValue;
}
TArray<FName> UCompanionManager::GetUnlockedSystemicCompanions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.GetUnlockedSystemicCompanions"));
    struct Params_GetUnlockedSystemicCompanions {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetUnlockedSystemicCompanions params{};
    ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
void UCompanionManager::HandleCompanionInteractionBP(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.HandleCompanionInteractionBP"));
    struct Params_HandleCompanionInteractionBP {
        int32_t Index; // 0x0
    }; // Size: 0x4
    Params_HandleCompanionInteractionBP params{};
    params.Index = (int32_t)Index;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UCompanionManager::StopPrimaryCompanionCustomAbility() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.StopPrimaryCompanionCustomAbility"));
    struct Params_StopPrimaryCompanionCustomAbility {
    }; // Size: 0x0
    Params_StopPrimaryCompanionCustomAbility params{};
    ProcessEvent(func, &params);
}
UCompanionManager* UCompanionManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.Get"));
    struct Params_Get {
        UCompanionManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UCompanionManager*)params.ReturnValue;
}
void UCompanionManager::HandleFleshLoaded(AActor* FleshActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.HandleFleshLoaded"));
    struct Params_HandleFleshLoaded {
        AActor* FleshActor; // 0x0
    }; // Size: 0x8
    Params_HandleFleshLoaded params{};
    params.FleshActor = (AActor*)FleshActor;
    ProcessEvent(func, &params);
}
void UCompanionManager::AddIdentityToCompanion(FName& InCompanionName, FName& InIdentityName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.AddIdentityToCompanion"));
    struct Params_AddIdentityToCompanion {
        FName InCompanionName; // 0x0
        FName InIdentityName; // 0x8
    }; // Size: 0x10
    Params_AddIdentityToCompanion params{};
    params.InCompanionName = (FName)InCompanionName;
    params.InIdentityName = (FName)InIdentityName;
    ProcessEvent(func, &params);
    InCompanionName = params.InCompanionName;
    InIdentityName = params.InIdentityName;
}
void UCompanionManager::TryCompanionPlayerRescue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.TryCompanionPlayerRescue"));
    struct Params_TryCompanionPlayerRescue {
    }; // Size: 0x0
    Params_TryCompanionPlayerRescue params{};
    ProcessEvent(func, &params);
}
TArray<FName> UCompanionManager::IdentitiesAllowedToAddOnCompanion(FName& InCompanionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.IdentitiesAllowedToAddOnCompanion"));
    struct Params_IdentitiesAllowedToAddOnCompanion {
        FName InCompanionName; // 0x0
        TArray<FName> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_IdentitiesAllowedToAddOnCompanion params{};
    params.InCompanionName = (FName)InCompanionName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InCompanionName = params.InCompanionName;
    return (TArray<FName>)params.ReturnValue;
}
void UCompanionManager::StopMovement(bool InStopMovement) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.StopMovement"));
    struct Params_StopMovement {
        bool InStopMovement; // 0x0
    }; // Size: 0x1
    Params_StopMovement params{};
    params.InStopMovement = (bool)InStopMovement;
    ProcessEvent(func, &params);
}
void UCompanionManager::StopCompanionForcedWaiting() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.StopCompanionForcedWaiting"));
    struct Params_StopCompanionForcedWaiting {
    }; // Size: 0x0
    Params_StopCompanionForcedWaiting params{};
    ProcessEvent(func, &params);
}
void UCompanionManager::StartPrimaryCompanionCustomAbility(UClass* Ability) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.StartPrimaryCompanionCustomAbility"));
    struct Params_StartPrimaryCompanionCustomAbility {
        UClass* Ability; // 0x0
    }; // Size: 0x8
    Params_StartPrimaryCompanionCustomAbility params{};
    params.Ability = (UClass*)Ability;
    ProcessEvent(func, &params);
}
FString UCompanionManager::GetCompanionInteractionTextBP(AActor* interactionActor, int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.GetCompanionInteractionTextBP"));
    struct Params_GetCompanionInteractionTextBP {
        AActor* interactionActor; // 0x0
        int32_t Index; // 0x8
        char pad_c[0x4];
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetCompanionInteractionTextBP params{};
    params.interactionActor = (AActor*)interactionActor;
    params.Index = (int32_t)Index;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UCompanionManager::StartFadeOut() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.StartFadeOut"));
    struct Params_StartFadeOut {
    }; // Size: 0x0
    Params_StartFadeOut params{};
    ProcessEvent(func, &params);
}
FString UCompanionManager::GetForcedCompanionName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.GetForcedCompanionName"));
    struct Params_GetForcedCompanionName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetForcedCompanionName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UCompanionManager::PlayVoiceOverForPawn(FString VOEventName, APawn* Pawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.PlayVoiceOverForPawn"));
    struct Params_PlayVoiceOverForPawn {
        FString VOEventName; // 0x0
        APawn* Pawn; // 0x10
    }; // Size: 0x18
    Params_PlayVoiceOverForPawn params{};
    params.VOEventName = (FString)VOEventName;
    params.Pawn = (APawn*)Pawn;
    ProcessEvent(func, &params);
}
void UCompanionManager::StartFadeIn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.StartFadeIn"));
    struct Params_StartFadeIn {
    }; // Size: 0x0
    Params_StartFadeIn params{};
    ProcessEvent(func, &params);
}
bool UCompanionManager::MoveToLocation(FVector InCharacterLocation, APawn* InCompanionPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.MoveToLocation"));
    struct Params_MoveToLocation {
        FVector InCharacterLocation; // 0x0
        char pad_c[0x4];
        APawn* InCompanionPawn; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_MoveToLocation params{};
    params.InCharacterLocation = (FVector)InCharacterLocation;
    params.InCompanionPawn = (APawn*)InCompanionPawn;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCompanionManager::GetCompanionSettingDataBP(FString Name, FCompanionSettingData& OutCompanionSettingData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.GetCompanionSettingDataBP"));
    struct Params_GetCompanionSettingDataBP {
        FString Name; // 0x0
        FCompanionSettingData OutCompanionSettingData; // 0x10
        bool ReturnValue; // 0x90
    }; // Size: 0x91
    Params_GetCompanionSettingDataBP params{};
    params.Name = (FString)Name;
    params.OutCompanionSettingData = (FCompanionSettingData)OutCompanionSettingData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutCompanionSettingData = params.OutCompanionSettingData;
    return (bool)params.ReturnValue;
}
void UCompanionManager::SetSystemicCompanionBP(FString Name, bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.SetSystemicCompanionBP"));
    struct Params_SetSystemicCompanionBP {
        FString Name; // 0x0
        bool bEnable; // 0x10
    }; // Size: 0x11
    Params_SetSystemicCompanionBP params{};
    params.Name = (FString)Name;
    params.bEnable = (bool)bEnable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UCompanionManager::SetCompanionSettingDataToConfigBP(FString Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.SetCompanionSettingDataToConfigBP"));
    struct Params_SetCompanionSettingDataToConfigBP {
        FString Name; // 0x0
    }; // Size: 0x10
    Params_SetCompanionSettingDataToConfigBP params{};
    params.Name = (FString)Name;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FName UCompanionManager::GetCompanionNameWithMostCompanionshipTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.GetCompanionNameWithMostCompanionshipTime"));
    struct Params_GetCompanionNameWithMostCompanionshipTime {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCompanionNameWithMostCompanionshipTime params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UCompanionManager::IsCompanionWaitingBP(APawn* Pawn, FVector& WaitLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.IsCompanionWaitingBP"));
    struct Params_IsCompanionWaitingBP {
        APawn* Pawn; // 0x0
        FVector WaitLocation; // 0x8
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_IsCompanionWaitingBP params{};
    params.Pawn = (APawn*)Pawn;
    params.WaitLocation = (FVector)WaitLocation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    WaitLocation = params.WaitLocation;
    return (bool)params.ReturnValue;
}
void UCompanionManager::OnCharacterTeleported(AAmbulatory_Character* TeleportedCharacter, FVector AmountDisplaced, FRotator AmountRotated) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.OnCharacterTeleported"));
    struct Params_OnCharacterTeleported {
        AAmbulatory_Character* TeleportedCharacter; // 0x0
        FVector AmountDisplaced; // 0x8
        FRotator AmountRotated; // 0x14
    }; // Size: 0x20
    Params_OnCharacterTeleported params{};
    params.TeleportedCharacter = (AAmbulatory_Character*)TeleportedCharacter;
    params.AmountDisplaced = (FVector)AmountDisplaced;
    params.AmountRotated = (FRotator)AmountRotated;
    ProcessEvent(func, &params);
}
void UCompanionManager::SetCompanionSettingDataBP(FString Name, FCompanionSettingData InCompanionSettingData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.SetCompanionSettingDataBP"));
    struct Params_SetCompanionSettingDataBP {
        FString Name; // 0x0
        FCompanionSettingData InCompanionSettingData; // 0x10
    }; // Size: 0x90
    Params_SetCompanionSettingDataBP params{};
    params.Name = (FString)Name;
    params.InCompanionSettingData = (FCompanionSettingData)InCompanionSettingData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UCompanionManager::SetCompanionIsIdleFlag(AActor* InCompanionActor, bool InBCompanionIsIdle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.SetCompanionIsIdleFlag"));
    struct Params_SetCompanionIsIdleFlag {
        AActor* InCompanionActor; // 0x0
        bool InBCompanionIsIdle; // 0x8
    }; // Size: 0x9
    Params_SetCompanionIsIdleFlag params{};
    params.InCompanionActor = (AActor*)InCompanionActor;
    params.InBCompanionIsIdle = (bool)InBCompanionIsIdle;
    ProcessEvent(func, &params);
}
void UCompanionManager::SetCompanionForcedWaitLocation(FVector& InWaitLocation, FVector& InWaitDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.SetCompanionForcedWaitLocation"));
    struct Params_SetCompanionForcedWaitLocation {
        FVector InWaitLocation; // 0x0
        FVector InWaitDirection; // 0xc
    }; // Size: 0x18
    Params_SetCompanionForcedWaitLocation params{};
    params.InWaitLocation = (FVector)InWaitLocation;
    params.InWaitDirection = (FVector)InWaitDirection;
    ProcessEvent(func, &params);
    InWaitLocation = params.InWaitLocation;
    InWaitDirection = params.InWaitDirection;
}
void UCompanionManager::SetCompanionBP(FString Name, bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.SetCompanionBP"));
    struct Params_SetCompanionBP {
        FString Name; // 0x0
        bool bEnable; // 0x10
    }; // Size: 0x11
    Params_SetCompanionBP params{};
    params.Name = (FString)Name;
    params.bEnable = (bool)bEnable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UCompanionManager::RestoreCompanionHealth() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.RestoreCompanionHealth"));
    struct Params_RestoreCompanionHealth {
    }; // Size: 0x0
    Params_RestoreCompanionHealth params{};
    ProcessEvent(func, &params);
}
bool UCompanionManager::PlayVoiceOver(FString VOEventName, EVoiceOverCompanionSelection Selection, EVoiceOverConditions Condition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.PlayVoiceOver"));
    struct Params_PlayVoiceOver {
        FString VOEventName; // 0x0
        EVoiceOverCompanionSelection Selection; // 0x10
        EVoiceOverConditions Condition; // 0x11
        bool ReturnValue; // 0x12
    }; // Size: 0x13
    Params_PlayVoiceOver params{};
    params.VOEventName = (FString)VOEventName;
    params.Selection = (EVoiceOverCompanionSelection)Selection;
    params.Condition = (EVoiceOverConditions)Condition;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCompanionManager::OnCompanionDied(AActor* Companion) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.OnCompanionDied"));
    struct Params_OnCompanionDied {
        AActor* Companion; // 0x0
    }; // Size: 0x8
    Params_OnCompanionDied params{};
    params.Companion = (AActor*)Companion;
    ProcessEvent(func, &params);
}
void UCompanionManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
bool UCompanionManager::AreSystemicCompanionsDisabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.AreSystemicCompanionsDisabled"));
    struct Params_AreSystemicCompanionsDisabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AreSystemicCompanionsDisabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCompanionManager::OnAboutToSaveGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.OnAboutToSaveGame"));
    struct Params_OnAboutToSaveGame {
    }; // Size: 0x0
    Params_OnAboutToSaveGame params{};
    ProcessEvent(func, &params);
}
void UCompanionManager::OnPlayerEnterLeaveCompanionSettingsVolume(AActor* Volume, FCompanionVolumeSettings& Settings, bool bInside) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.OnPlayerEnterLeaveCompanionSettingsVolume"));
    struct Params_OnPlayerEnterLeaveCompanionSettingsVolume {
        AActor* Volume; // 0x0
        FCompanionVolumeSettings Settings; // 0x8
        bool bInside; // 0x1c
    }; // Size: 0x1d
    Params_OnPlayerEnterLeaveCompanionSettingsVolume params{};
    params.Volume = (AActor*)Volume;
    params.Settings = (FCompanionVolumeSettings)Settings;
    params.bInside = (bool)bInside;
    ProcessEvent(func, &params);
    Settings = params.Settings;
}
void UCompanionManager::OnPawnEnterLeaveCompanionSettingsVolume(AActor* Volume, APawn* Pawn, FCompanionVolumeSettings& Settings, bool bInside) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.OnPawnEnterLeaveCompanionSettingsVolume"));
    struct Params_OnPawnEnterLeaveCompanionSettingsVolume {
        AActor* Volume; // 0x0
        APawn* Pawn; // 0x8
        FCompanionVolumeSettings Settings; // 0x10
        bool bInside; // 0x24
    }; // Size: 0x25
    Params_OnPawnEnterLeaveCompanionSettingsVolume params{};
    params.Volume = (AActor*)Volume;
    params.Pawn = (APawn*)Pawn;
    params.Settings = (FCompanionVolumeSettings)Settings;
    params.bInside = (bool)bInside;
    ProcessEvent(func, &params);
    Settings = params.Settings;
}
void UCompanionManager::OnCompanionRemoved(AActor* Companion) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.OnCompanionRemoved"));
    struct Params_OnCompanionRemoved {
        AActor* Companion; // 0x0
    }; // Size: 0x8
    Params_OnCompanionRemoved params{};
    params.Companion = (AActor*)Companion;
    ProcessEvent(func, &params);
}
bool UCompanionManager::CanMoveCompanionBP(APawn* Pawn, FCompanionFollowParams& Params) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.CanMoveCompanionBP"));
    struct Params_CanMoveCompanionBP {
        APawn* Pawn; // 0x0
        FCompanionFollowParams Params; // 0x8
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_CanMoveCompanionBP params{};
    params.Pawn = (APawn*)Pawn;
    params.Params = (FCompanionFollowParams)Params;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    return (bool)params.ReturnValue;
}
bool UCompanionManager::HasAnyCompanion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.HasAnyCompanion"));
    struct Params_HasAnyCompanion {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasAnyCompanion params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCompanionManager::OnCompanionReady(UScheduledEntity* companionScheduledEntity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.OnCompanionReady"));
    struct Params_OnCompanionReady {
        UScheduledEntity* companionScheduledEntity; // 0x0
    }; // Size: 0x8
    Params_OnCompanionReady params{};
    params.companionScheduledEntity = (UScheduledEntity*)companionScheduledEntity;
    ProcessEvent(func, &params);
}
void UCompanionManager::OnCompanionDismissed(FName CompanionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.OnCompanionDismissed"));
    struct Params_OnCompanionDismissed {
        FName CompanionName; // 0x0
    }; // Size: 0x8
    Params_OnCompanionDismissed params{};
    params.CompanionName = (FName)CompanionName;
    ProcessEvent(func, &params);
}
void UCompanionManager::OnCompanionDamaged(AActor* InActor, AActor* InInstigator, float InDamage, FHitResult& InHit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.OnCompanionDamaged"));
    struct Params_OnCompanionDamaged {
        AActor* InActor; // 0x0
        AActor* InInstigator; // 0x8
        float InDamage; // 0x10
        FHitResult InHit; // 0x14
    }; // Size: 0x9c
    Params_OnCompanionDamaged params{};
    params.InActor = (AActor*)InActor;
    params.InInstigator = (AActor*)InInstigator;
    params.InDamage = (float)InDamage;
    params.InHit = (FHitResult)InHit;
    ProcessEvent(func, &params);
    InHit = params.InHit;
}
APawn* UCompanionManager::GetPrimaryCompanionPawn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.GetPrimaryCompanionPawn"));
    struct Params_GetPrimaryCompanionPawn {
        APawn* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPrimaryCompanionPawn params{};
    ProcessEvent(func, &params);
    return (APawn*)params.ReturnValue;
}
bool UCompanionManager::IsCharacterCompanion(UScheduledEntity* entity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.IsCharacterCompanion"));
    struct Params_IsCharacterCompanion {
        UScheduledEntity* entity; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsCharacterCompanion params{};
    params.entity = (UScheduledEntity*)entity;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCompanionManager::HasPrimaryFollowingCompanion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.HasPrimaryFollowingCompanion"));
    struct Params_HasPrimaryFollowingCompanion {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasPrimaryFollowingCompanion params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCompanionManager::HasCompanionToRescuePlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.HasCompanionToRescuePlayer"));
    struct Params_HasCompanionToRescuePlayer {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasCompanionToRescuePlayer params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCompanionManager::HasPrimaryCompanion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.HasPrimaryCompanion"));
    struct Params_HasPrimaryCompanion {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasPrimaryCompanion params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName UCompanionManager::GetPrimaryCompanionNameBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.GetPrimaryCompanionNameBP"));
    struct Params_GetPrimaryCompanionNameBP {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPrimaryCompanionNameBP params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void UCompanionManager::HandleActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpluse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.HandleActorHit"));
    struct Params_HandleActorHit {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
        FVector NormalImpluse; // 0x10
        FHitResult Hit; // 0x1c
    }; // Size: 0xa4
    Params_HandleActorHit params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    params.NormalImpluse = (FVector)NormalImpluse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
bool UCompanionManager::GetCompanionSettingDataFromActorBP(AActor* companionActor, FCompanionSettingData& OutCompanionSettingData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.GetCompanionSettingDataFromActorBP"));
    struct Params_GetCompanionSettingDataFromActorBP {
        AActor* companionActor; // 0x0
        FCompanionSettingData OutCompanionSettingData; // 0x8
        bool ReturnValue; // 0x88
    }; // Size: 0x89
    Params_GetCompanionSettingDataFromActorBP params{};
    params.companionActor = (AActor*)companionActor;
    params.OutCompanionSettingData = (FCompanionSettingData)OutCompanionSettingData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutCompanionSettingData = params.OutCompanionSettingData;
    return (bool)params.ReturnValue;
}
UCompanionManager* UCompanionManager::GetCompanionManager() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.GetCompanionManager"));
    struct Params_GetCompanionManager {
        UCompanionManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCompanionManager params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UCompanionManager*)params.ReturnValue;
}
bool UCompanionManager::GetCompanionFollowParamsBP(APawn* Pawn, FCompanionFollowParams& Params) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.GetCompanionFollowParamsBP"));
    struct Params_GetCompanionFollowParamsBP {
        APawn* Pawn; // 0x0
        FCompanionFollowParams Params; // 0x8
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_GetCompanionFollowParamsBP params{};
    params.Pawn = (APawn*)Pawn;
    params.Params = (FCompanionFollowParams)Params;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    return (bool)params.ReturnValue;
}
TArray<FName> UCompanionManager::GetAllPossibleSystemicCompanions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.GetAllPossibleSystemicCompanions"));
    struct Params_GetAllPossibleSystemicCompanions {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllPossibleSystemicCompanions params{};
    ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
bool UCompanionManager::CanAddIdentity(FName& InCompanionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.CanAddIdentity"));
    struct Params_CanAddIdentity {
        FName InCompanionName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_CanAddIdentity params{};
    params.InCompanionName = (FName)InCompanionName;
    ProcessEvent(func, &params);
    InCompanionName = params.InCompanionName;
    return (bool)params.ReturnValue;
}
bool UCompanionManager::GetActivePrimaryCompanionPawnAndName(APawn*& CompanionPawn, FName& OutCompanionName, bool bIsFemale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.GetActivePrimaryCompanionPawnAndName"));
    struct Params_GetActivePrimaryCompanionPawnAndName {
        APawn* CompanionPawn; // 0x0
        FName OutCompanionName; // 0x8
        bool bIsFemale; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_GetActivePrimaryCompanionPawnAndName params{};
    params.CompanionPawn = (APawn*)CompanionPawn;
    params.OutCompanionName = (FName)OutCompanionName;
    params.bIsFemale = (bool)bIsFemale;
    ProcessEvent(func, &params);
    CompanionPawn = params.CompanionPawn;
    OutCompanionName = params.OutCompanionName;
    return (bool)params.ReturnValue;
}
bool UCompanionManager::GetActivePrimaryCompanionPawn(APawn*& CompanionPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.GetActivePrimaryCompanionPawn"));
    struct Params_GetActivePrimaryCompanionPawn {
        APawn* CompanionPawn; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetActivePrimaryCompanionPawn params{};
    params.CompanionPawn = (APawn*)CompanionPawn;
    ProcessEvent(func, &params);
    CompanionPawn = params.CompanionPawn;
    return (bool)params.ReturnValue;
}
void UCompanionManager::DisableSystemicCompanionsForDungeons(bool bDisable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.DisableSystemicCompanionsForDungeons"));
    struct Params_DisableSystemicCompanionsForDungeons {
        bool bDisable; // 0x0
    }; // Size: 0x1
    Params_DisableSystemicCompanionsForDungeons params{};
    params.bDisable = (bool)bDisable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UCompanionManager::ChooseLocation(APawn* InCompanionPawn, FVector& OutDestination) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.ChooseLocation"));
    struct Params_ChooseLocation {
        APawn* InCompanionPawn; // 0x0
        FVector OutDestination; // 0x8
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_ChooseLocation params{};
    params.InCompanionPawn = (APawn*)InCompanionPawn;
    params.OutDestination = (FVector)OutDestination;
    ProcessEvent(func, &params);
    OutDestination = params.OutDestination;
    return (bool)params.ReturnValue;
}
void UCompanionManager::ChangeCompanionInvulnerableBP(FName& InCompanionName, bool InBMakeInvulnerable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.ChangeCompanionInvulnerableBP"));
    struct Params_ChangeCompanionInvulnerableBP {
        FName InCompanionName; // 0x0
        bool InBMakeInvulnerable; // 0x8
    }; // Size: 0x9
    Params_ChangeCompanionInvulnerableBP params{};
    params.InCompanionName = (FName)InCompanionName;
    params.InBMakeInvulnerable = (bool)InBMakeInvulnerable;
    ProcessEvent(func, &params);
    InCompanionName = params.InCompanionName;
}
bool UCompanionManager::CanSystemicallyCompanionable(FName& InNPCName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.CanSystemicallyCompanionable"));
    struct Params_CanSystemicallyCompanionable {
        FName InNPCName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_CanSystemicallyCompanionable params{};
    params.InNPCName = (FName)InNPCName;
    ProcessEvent(func, &params);
    InNPCName = params.InNPCName;
    return (bool)params.ReturnValue;
}
void UCompanionManager::CancelAttackForAllCompanions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionManager.CancelAttackForAllCompanions"));
    struct Params_CancelAttackForAllCompanions {
    }; // Size: 0x0
    Params_CancelAttackForAllCompanions params{};
    ProcessEvent(func, &params);
}
