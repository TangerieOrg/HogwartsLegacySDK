#include "AActor.hpp"
#include "AFlyingBroom.hpp"
#include "ESlateVisibility.hpp"
#include "FExperienceChange.hpp"
#include "FMailEntry.hpp"
#include "FTutorialLayoutData.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UCanvasPanel.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UComboHelperHud.hpp"
#include "UCreature_MountComponent.hpp"
#include "UFunction.hpp"
#include "UHUDCompassIcon.hpp"
#include "UMissionBannerWidget.hpp"
#include "UObject.hpp"
#include "UPhoenixHUDWidget.hpp"
#include "UReticule.hpp"
#include "UUserWidget.hpp"
#include "UZoneNotification.hpp"
void UPhoenixHUDWidget::AddCompanionLevelUpNotification(UObject* i_caller, FString CompanionName, int32_t Level) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.AddCompanionLevelUpNotification"));
    struct Params_AddCompanionLevelUpNotification {
        UObject* i_caller; // 0x0
        FString CompanionName; // 0x8
        int32_t Level; // 0x18
    }; // Size: 0x1c
    Params_AddCompanionLevelUpNotification params{};
    params.i_caller = (UObject*)i_caller;
    params.CompanionName = (FString)CompanionName;
    params.Level = (int32_t)Level;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::ShowZoneNotification(FName Header_Name, FName Label_Name, FName Image_Left, FName Image_Right, float duration_seconds, bool PlaySound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.ShowZoneNotification"));
    struct Params_ShowZoneNotification {
        FName Header_Name; // 0x0
        FName Label_Name; // 0x8
        FName Image_Left; // 0x10
        FName Image_Right; // 0x18
        float duration_seconds; // 0x20
        bool PlaySound; // 0x24
    }; // Size: 0x25
    Params_ShowZoneNotification params{};
    params.Header_Name = (FName)Header_Name;
    params.Label_Name = (FName)Label_Name;
    params.Image_Left = (FName)Image_Left;
    params.Image_Right = (FName)Image_Right;
    params.duration_seconds = (float)duration_seconds;
    params.PlaySound = (bool)PlaySound;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::SetHudElementVisibility(FString ElementName, ESlateVisibility NewVisibility, UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.SetHudElementVisibility"));
    struct Params_SetHudElementVisibility {
        FString ElementName; // 0x0
        ESlateVisibility NewVisibility; // 0x10
        char pad_11[0x7];
        UObject* Provider; // 0x18
    }; // Size: 0x20
    Params_SetHudElementVisibility params{};
    params.ElementName = (FString)ElementName;
    params.NewVisibility = (ESlateVisibility)NewVisibility;
    params.Provider = (UObject*)Provider;
    ProcessEvent(func, &params);
}
UPhoenixHUDWidget* UPhoenixHUDWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixHUDWidget");
    return (UPhoenixHUDWidget*)res;
}
void UPhoenixHUDWidget::SetGlobalHudVisibility(bool ShouldShow, bool AllowTicking, bool ShouldAnimate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.SetGlobalHudVisibility"));
    struct Params_SetGlobalHudVisibility {
        bool ShouldShow; // 0x0
        bool AllowTicking; // 0x1
        bool ShouldAnimate; // 0x2
    }; // Size: 0x3
    Params_SetGlobalHudVisibility params{};
    params.ShouldShow = (bool)ShouldShow;
    params.AllowTicking = (bool)AllowTicking;
    params.ShouldAnimate = (bool)ShouldAnimate;
    ProcessEvent(func, &params);
}
bool UPhoenixHUDWidget::WorldToViewport(FVector WorldPos, FVector2D& o_Point, bool LockToViewableSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.WorldToViewport"));
    struct Params_WorldToViewport {
        FVector WorldPos; // 0x0
        FVector2D o_Point; // 0xc
        bool LockToViewableSpace; // 0x14
        bool ReturnValue; // 0x15
    }; // Size: 0x16
    Params_WorldToViewport params{};
    params.WorldPos = (FVector)WorldPos;
    params.o_Point = (FVector2D)o_Point;
    params.LockToViewableSpace = (bool)LockToViewableSpace;
    ProcessEvent(func, &params);
    o_Point = params.o_Point;
    return (bool)params.ReturnValue;
}
void UPhoenixHUDWidget::UpdateOutOfAreaAlertTimer(float Time) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.UpdateOutOfAreaAlertTimer"));
    struct Params_UpdateOutOfAreaAlertTimer {
        float Time; // 0x0
    }; // Size: 0x4
    Params_UpdateOutOfAreaAlertTimer params{};
    params.Time = (float)Time;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::AddSpecialItemNotification(FString Name, FString IconName, int32_t Count, FString UnlockMessage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.AddSpecialItemNotification"));
    struct Params_AddSpecialItemNotification {
        FString Name; // 0x0
        FString IconName; // 0x10
        int32_t Count; // 0x20
        char pad_24[0x4];
        FString UnlockMessage; // 0x28
    }; // Size: 0x38
    Params_AddSpecialItemNotification params{};
    params.Name = (FString)Name;
    params.IconName = (FString)IconName;
    params.Count = (int32_t)Count;
    params.UnlockMessage = (FString)UnlockMessage;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::TogglePersistentStepBanner(bool IsPersistent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.TogglePersistentStepBanner"));
    struct Params_TogglePersistentStepBanner {
        bool IsPersistent; // 0x0
    }; // Size: 0x1
    Params_TogglePersistentStepBanner params{};
    params.IsPersistent = (bool)IsPersistent;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::ShowTransformationUI(bool Show, int32_t IntroType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.ShowTransformationUI"));
    struct Params_ShowTransformationUI {
        bool Show; // 0x0
        char pad_1[0x3];
        int32_t IntroType; // 0x4
    }; // Size: 0x8
    Params_ShowTransformationUI params{};
    params.Show = (bool)Show;
    params.IntroType = (int32_t)IntroType;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::ShowBroomHUD(AFlyingBroom* BroomActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.ShowBroomHUD"));
    struct Params_ShowBroomHUD {
        AFlyingBroom* BroomActor; // 0x0
    }; // Size: 0x8
    Params_ShowBroomHUD params{};
    params.BroomActor = (AFlyingBroom*)BroomActor;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::SyncSettingsVisibilities() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.SyncSettingsVisibilities"));
    struct Params_SyncSettingsVisibilities {
    }; // Size: 0x0
    Params_SyncSettingsVisibilities params{};
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::ShowNoFlyHUD(FName& ErrorMessageKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.ShowNoFlyHUD"));
    struct Params_ShowNoFlyHUD {
        FName ErrorMessageKey; // 0x0
    }; // Size: 0x8
    Params_ShowNoFlyHUD params{};
    params.ErrorMessageKey = (FName)ErrorMessageKey;
    ProcessEvent(func, &params);
    ErrorMessageKey = params.ErrorMessageKey;
}
void UPhoenixHUDWidget::ToggleMissionDetailsHold(bool IsHeld) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.ToggleMissionDetailsHold"));
    struct Params_ToggleMissionDetailsHold {
        bool IsHeld; // 0x0
    }; // Size: 0x1
    Params_ToggleMissionDetailsHold params{};
    params.IsHeld = (bool)IsHeld;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::RemoveBeaconFromHUD(UHUDCompassIcon* Beacon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.RemoveBeaconFromHUD"));
    struct Params_RemoveBeaconFromHUD {
        UHUDCompassIcon* Beacon; // 0x0
    }; // Size: 0x8
    Params_RemoveBeaconFromHUD params{};
    params.Beacon = (UHUDCompassIcon*)Beacon;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::ShowSpellBar(bool Show) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.ShowSpellBar"));
    struct Params_ShowSpellBar {
        bool Show; // 0x0
    }; // Size: 0x1
    Params_ShowSpellBar params{};
    params.Show = (bool)Show;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::ShowOutOfAreaAlert(FName Message, float InitialTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.ShowOutOfAreaAlert"));
    struct Params_ShowOutOfAreaAlert {
        FName Message; // 0x0
        float InitialTime; // 0x8
    }; // Size: 0xc
    Params_ShowOutOfAreaAlert params{};
    params.Message = (FName)Message;
    params.InitialTime = (float)InitialTime;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::ShowNotificationsHUD() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.ShowNotificationsHUD"));
    struct Params_ShowNotificationsHUD {
    }; // Size: 0x0
    Params_ShowNotificationsHUD params{};
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::ShowMountHUD(UCreature_MountComponent* MountComponent, bool bIncludeCharge) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.ShowMountHUD"));
    struct Params_ShowMountHUD {
        UCreature_MountComponent* MountComponent; // 0x0
        bool bIncludeCharge; // 0x8
    }; // Size: 0x9
    Params_ShowMountHUD params{};
    params.MountComponent = (UCreature_MountComponent*)MountComponent;
    params.bIncludeCharge = (bool)bIncludeCharge;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::OnAddChallengeUnlockedNotification(FName ChallengeID, FName ChallengeCategory, int32_t TotalRequired) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.OnAddChallengeUnlockedNotification"));
    struct Params_OnAddChallengeUnlockedNotification {
        FName ChallengeID; // 0x0
        FName ChallengeCategory; // 0x8
        int32_t TotalRequired; // 0x10
    }; // Size: 0x14
    Params_OnAddChallengeUnlockedNotification params{};
    params.ChallengeID = (FName)ChallengeID;
    params.ChallengeCategory = (FName)ChallengeCategory;
    params.TotalRequired = (int32_t)TotalRequired;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::ShowCreatureNurturingHUD(bool Show) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.ShowCreatureNurturingHUD"));
    struct Params_ShowCreatureNurturingHUD {
        bool Show; // 0x0
    }; // Size: 0x1
    Params_ShowCreatureNurturingHUD params{};
    params.Show = (bool)Show;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::ShowCreatureCaptureHUD() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.ShowCreatureCaptureHUD"));
    struct Params_ShowCreatureCaptureHUD {
    }; // Size: 0x0
    Params_ShowCreatureCaptureHUD params{};
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::OnAddTextTickerNotification(FString NotificationText) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.OnAddTextTickerNotification"));
    struct Params_OnAddTextTickerNotification {
        FString NotificationText; // 0x0
    }; // Size: 0x10
    Params_OnAddTextTickerNotification params{};
    params.NotificationText = (FString)NotificationText;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::ShowConjurationUI(bool Show, int32_t IntroType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.ShowConjurationUI"));
    struct Params_ShowConjurationUI {
        bool Show; // 0x0
        char pad_1[0x3];
        int32_t IntroType; // 0x4
    }; // Size: 0x8
    Params_ShowConjurationUI params{};
    params.Show = (bool)Show;
    params.IntroType = (int32_t)IntroType;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::ShowBroomRaceHUD() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.ShowBroomRaceHUD"));
    struct Params_ShowBroomRaceHUD {
    }; // Size: 0x0
    Params_ShowBroomRaceHUD params{};
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::SetAndShowHintMessage(FString HintKey, FTutorialLayoutData HintPositionData, bool bIgnoreShowTutorialElementsFlag, float MaxDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.SetAndShowHintMessage"));
    struct Params_SetAndShowHintMessage {
        FString HintKey; // 0x0
        FTutorialLayoutData HintPositionData; // 0x10
        bool bIgnoreShowTutorialElementsFlag; // 0x20
        char pad_21[0x3];
        float MaxDuration; // 0x24
    }; // Size: 0x28
    Params_SetAndShowHintMessage params{};
    params.HintKey = (FString)HintKey;
    params.HintPositionData = (FTutorialLayoutData)HintPositionData;
    params.bIgnoreShowTutorialElementsFlag = (bool)bIgnoreShowTutorialElementsFlag;
    params.MaxDuration = (float)MaxDuration;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::SetCurrentTargetActor(AActor* Target, bool ShowName, bool ShowHealth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.SetCurrentTargetActor"));
    struct Params_SetCurrentTargetActor {
        AActor* Target; // 0x0
        bool ShowName; // 0x8
        bool ShowHealth; // 0x9
    }; // Size: 0xa
    Params_SetCurrentTargetActor params{};
    params.Target = (AActor*)Target;
    params.ShowName = (bool)ShowName;
    params.ShowHealth = (bool)ShowHealth;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::OnAddChallengeUpdatedNotification(FName ChallengeID, FName ChallengeCategory, int32_t CompletedAmt, int32_t TotalRequired) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.OnAddChallengeUpdatedNotification"));
    struct Params_OnAddChallengeUpdatedNotification {
        FName ChallengeID; // 0x0
        FName ChallengeCategory; // 0x8
        int32_t CompletedAmt; // 0x10
        int32_t TotalRequired; // 0x14
    }; // Size: 0x18
    Params_OnAddChallengeUpdatedNotification params{};
    params.ChallengeID = (FName)ChallengeID;
    params.ChallengeCategory = (FName)ChallengeCategory;
    params.CompletedAmt = (int32_t)CompletedAmt;
    params.TotalRequired = (int32_t)TotalRequired;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::OnAddPickupNotification(FString Name, FString IconName, int32_t Count, bool bSpecial, FName Variation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.OnAddPickupNotification"));
    struct Params_OnAddPickupNotification {
        FString Name; // 0x0
        FString IconName; // 0x10
        int32_t Count; // 0x20
        bool bSpecial; // 0x24
        char pad_25[0x3];
        FName Variation; // 0x28
    }; // Size: 0x30
    Params_OnAddPickupNotification params{};
    params.Name = (FString)Name;
    params.IconName = (FString)IconName;
    params.Count = (int32_t)Count;
    params.bSpecial = (bool)bSpecial;
    params.Variation = (FName)Variation;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::ReadActiveOwlMail() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.ReadActiveOwlMail"));
    struct Params_ReadActiveOwlMail {
    }; // Size: 0x0
    Params_ReadActiveOwlMail params{};
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::OverrideSpellBar() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.OverrideSpellBar"));
    struct Params_OverrideSpellBar {
    }; // Size: 0x0
    Params_OverrideSpellBar params{};
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::HideNotificationsHUD() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.HideNotificationsHUD"));
    struct Params_HideNotificationsHUD {
    }; // Size: 0x0
    Params_HideNotificationsHUD params{};
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::OnShowSpellBar(bool Show) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.OnShowSpellBar"));
    struct Params_OnShowSpellBar {
        bool Show; // 0x0
    }; // Size: 0x1
    Params_OnShowSpellBar params{};
    params.Show = (bool)Show;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::OnShowEnemyInfo(bool Show) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.OnShowEnemyInfo"));
    struct Params_OnShowEnemyInfo {
        bool Show; // 0x0
    }; // Size: 0x1
    Params_OnShowEnemyInfo params{};
    params.Show = (bool)Show;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::HideBroomHUD() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.HideBroomHUD"));
    struct Params_HideBroomHUD {
    }; // Size: 0x0
    Params_HideBroomHUD params{};
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::OnSetHUDVisibility() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.OnSetHUDVisibility"));
    struct Params_OnSetHUDVisibility {
    }; // Size: 0x0
    Params_OnSetHUDVisibility params{};
    ProcessEvent(func, &params);
}
UMissionBannerWidget* UPhoenixHUDWidget::GetMissionBanner() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.GetMissionBanner"));
    struct Params_GetMissionBanner {
        UMissionBannerWidget* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMissionBanner params{};
    ProcessEvent(func, &params);
    return (UMissionBannerWidget*)params.ReturnValue;
}
void UPhoenixHUDWidget::OnSetEnemyData(FName& Name, float pct) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.OnSetEnemyData"));
    struct Params_OnSetEnemyData {
        FName Name; // 0x0
        float pct; // 0x8
    }; // Size: 0xc
    Params_OnSetEnemyData params{};
    params.Name = (FName)Name;
    params.pct = (float)pct;
    ProcessEvent(func, &params);
    Name = params.Name;
}
void UPhoenixHUDWidget::OnAddCollectionKnownNotification(FName CollectionItemID, FName CollectionCategory) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.OnAddCollectionKnownNotification"));
    struct Params_OnAddCollectionKnownNotification {
        FName CollectionItemID; // 0x0
        FName CollectionCategory; // 0x8
    }; // Size: 0x10
    Params_OnAddCollectionKnownNotification params{};
    params.CollectionItemID = (FName)CollectionItemID;
    params.CollectionCategory = (FName)CollectionCategory;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::OnMailRecieved(FMailEntry Entry, int32_t DisplayPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.OnMailRecieved"));
    struct Params_OnMailRecieved {
        FMailEntry Entry; // 0x0
        int32_t DisplayPriority; // 0x58
    }; // Size: 0x5c
    Params_OnMailRecieved params{};
    params.Entry = (FMailEntry)Entry;
    params.DisplayPriority = (int32_t)DisplayPriority;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::ClearSpellBarOverride() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.ClearSpellBarOverride"));
    struct Params_ClearSpellBarOverride {
    }; // Size: 0x0
    Params_ClearSpellBarOverride params{};
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::OnAddSpecialItemNotification(FString Name, FString IconName, int32_t Count, FString UnlockMessage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.OnAddSpecialItemNotification"));
    struct Params_OnAddSpecialItemNotification {
        FString Name; // 0x0
        FString IconName; // 0x10
        int32_t Count; // 0x20
        char pad_24[0x4];
        FString UnlockMessage; // 0x28
    }; // Size: 0x38
    Params_OnAddSpecialItemNotification params{};
    params.Name = (FString)Name;
    params.IconName = (FString)IconName;
    params.Count = (int32_t)Count;
    params.UnlockMessage = (FString)UnlockMessage;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::OnAddFastTravelUnlockedNotification(FString Name, FString IconName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.OnAddFastTravelUnlockedNotification"));
    struct Params_OnAddFastTravelUnlockedNotification {
        FString Name; // 0x0
        FString IconName; // 0x10
    }; // Size: 0x20
    Params_OnAddFastTravelUnlockedNotification params{};
    params.Name = (FString)Name;
    params.IconName = (FString)IconName;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::OnAddCompanionLevelUpNotification(FString CompanionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.OnAddCompanionLevelUpNotification"));
    struct Params_OnAddCompanionLevelUpNotification {
        FString CompanionName; // 0x0
    }; // Size: 0x10
    Params_OnAddCompanionLevelUpNotification params{};
    params.CompanionName = (FString)CompanionName;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::OnAddCollectionObtainedNotification(FName CollectionItemID, FName CollectionCategory) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.OnAddCollectionObtainedNotification"));
    struct Params_OnAddCollectionObtainedNotification {
        FName CollectionItemID; // 0x0
        FName CollectionCategory; // 0x8
    }; // Size: 0x10
    Params_OnAddCollectionObtainedNotification params{};
    params.CollectionItemID = (FName)CollectionItemID;
    params.CollectionCategory = (FName)CollectionCategory;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::OnAddChallengeCompleteNotification(FName ChallengeID, FName ChallengeCategory, int32_t CompletedLevel, int32_t TotalLevels, int32_t TotalInstancesForLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.OnAddChallengeCompleteNotification"));
    struct Params_OnAddChallengeCompleteNotification {
        FName ChallengeID; // 0x0
        FName ChallengeCategory; // 0x8
        int32_t CompletedLevel; // 0x10
        int32_t TotalLevels; // 0x14
        int32_t TotalInstancesForLevel; // 0x18
    }; // Size: 0x1c
    Params_OnAddChallengeCompleteNotification params{};
    params.ChallengeID = (FName)ChallengeID;
    params.ChallengeCategory = (FName)ChallengeCategory;
    params.CompletedLevel = (int32_t)CompletedLevel;
    params.TotalLevels = (int32_t)TotalLevels;
    params.TotalInstancesForLevel = (int32_t)TotalInstancesForLevel;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::HideNoFlyHUD() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.HideNoFlyHUD"));
    struct Params_HideNoFlyHUD {
    }; // Size: 0x0
    Params_HideNoFlyHUD params{};
    ProcessEvent(func, &params);
}
UHUDCompassIcon* UPhoenixHUDWidget::MakeBeaconIcon(FString IconName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.MakeBeaconIcon"));
    struct Params_MakeBeaconIcon {
        FString IconName; // 0x0
        UHUDCompassIcon* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_MakeBeaconIcon params{};
    params.IconName = (FString)IconName;
    ProcessEvent(func, &params);
    return (UHUDCompassIcon*)params.ReturnValue;
}
void UPhoenixHUDWidget::HideZoneNotification() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.HideZoneNotification"));
    struct Params_HideZoneNotification {
    }; // Size: 0x0
    Params_HideZoneNotification params{};
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::HideMountHUD() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.HideMountHUD"));
    struct Params_HideMountHUD {
    }; // Size: 0x0
    Params_HideMountHUD params{};
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::HideOutOfAreaAlert() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.HideOutOfAreaAlert"));
    struct Params_HideOutOfAreaAlert {
    }; // Size: 0x0
    Params_HideOutOfAreaAlert params{};
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::HideCreatureCaptureHUD() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.HideCreatureCaptureHUD"));
    struct Params_HideCreatureCaptureHUD {
    }; // Size: 0x0
    Params_HideCreatureCaptureHUD params{};
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::HideBroomRaceHUD() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.HideBroomRaceHUD"));
    struct Params_HideBroomRaceHUD {
    }; // Size: 0x0
    Params_HideBroomRaceHUD params{};
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::ExperienceChangedBP(FExperienceChange ExperienceChangedData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.ExperienceChangedBP"));
    struct Params_ExperienceChangedBP {
        FExperienceChange ExperienceChangedData; // 0x0
    }; // Size: 0x20
    Params_ExperienceChangedBP params{};
    params.ExperienceChangedData = (FExperienceChange)ExperienceChangedData;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::ClearHintMessage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.ClearHintMessage"));
    struct Params_ClearHintMessage {
    }; // Size: 0x0
    Params_ClearHintMessage params{};
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::AnimateTrackingInfoWidget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.AnimateTrackingInfoWidget"));
    struct Params_AnimateTrackingInfoWidget {
    }; // Size: 0x0
    Params_AnimateTrackingInfoWidget params{};
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::AddFastTravelUnlockedNotification(FString Site, FString IconName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.AddFastTravelUnlockedNotification"));
    struct Params_AddFastTravelUnlockedNotification {
        FString Site; // 0x0
        FString IconName; // 0x10
    }; // Size: 0x20
    Params_AddFastTravelUnlockedNotification params{};
    params.Site = (FString)Site;
    params.IconName = (FString)IconName;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::AddCollectionNotification(FString Name, FString IconName, int32_t Count, bool bSpecial, FName Variation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.AddCollectionNotification"));
    struct Params_AddCollectionNotification {
        FString Name; // 0x0
        FString IconName; // 0x10
        int32_t Count; // 0x20
        bool bSpecial; // 0x24
        char pad_25[0x3];
        FName Variation; // 0x28
    }; // Size: 0x30
    Params_AddCollectionNotification params{};
    params.Name = (FString)Name;
    params.IconName = (FString)IconName;
    params.Count = (int32_t)Count;
    params.bSpecial = (bool)bSpecial;
    params.Variation = (FName)Variation;
    ProcessEvent(func, &params);
}
void UPhoenixHUDWidget::AddBeaconToHUD(UHUDCompassIcon* Beacon, UCanvasPanelSlot*& BeaconSlot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUDWidget.AddBeaconToHUD"));
    struct Params_AddBeaconToHUD {
        UHUDCompassIcon* Beacon; // 0x0
        UCanvasPanelSlot* BeaconSlot; // 0x8
    }; // Size: 0x10
    Params_AddBeaconToHUD params{};
    params.Beacon = (UHUDCompassIcon*)Beacon;
    params.BeaconSlot = (UCanvasPanelSlot*)BeaconSlot;
    ProcessEvent(func, &params);
    BeaconSlot = params.BeaconSlot;
}
