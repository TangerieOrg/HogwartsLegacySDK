#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FExperienceChange.hpp"
#include "FMailEntry.hpp"
#include "FTutorialLayoutData.hpp"
#include "FVector.hpp"
#include "UUserWidget.hpp"
class AFlyingBroom;
class UCanvasPanel;
class UMissionBannerWidget;
class UZoneNotification;
class UComboHelperHud;
struct FVector2D;
class UReticule;
class UCreature_MountComponent;
class UObject;
class AActor;
class UHUDCompassIcon;
class UCanvasPanelSlot;
#pragma pack(push, 1)
class UPhoenixHUDWidget : public UUserWidget {
public:
    UCanvasPanel* LockOnReticlePanel; // 0x268
    UCanvasPanel* CapturingWidgetPanel; // 0x270
    UZoneNotification* HUD_ZoneNotification; // 0x278
    UComboHelperHud* ComboHelperHud; // 0x280
    UReticule* Reticule; // 0x288
    char pad_290[0x4];
    int32_t ConjurationIntroType; // 0x294
    int32_t TransfigurationIntroType; // 0x298
    float BeaconMinVertElevationDistMeters; // 0x29c
    float BeaconMaxHorizElevationDistMeters; // 0x2a0
    float BeaconElevationBufferMeters; // 0x2a4
    float MinVisibleBeaconTextDistMeters; // 0x2a8
    char pad_2ac[0x64];
    static UPhoenixHUDWidget* StaticClass();
    bool WorldToViewport(FVector WorldPos, FVector2D& o_Point, bool LockToViewableSpace);
    void UpdateOutOfAreaAlertTimer(float Time);
    void TogglePersistentStepBanner(bool IsPersistent);
    void ToggleMissionDetailsHold(bool IsHeld);
    void SyncSettingsVisibilities();
    void ShowZoneNotification(FName Header_Name, FName Label_Name, FName Image_Left, FName Image_Right, float duration_seconds, bool PlaySound);
    void ShowTransformationUI(bool Show, int32_t IntroType);
    void ShowSpellBar(bool Show);
    void ShowOutOfAreaAlert(FName Message, float InitialTime);
    void ShowNotificationsHUD();
    void ShowNoFlyHUD(FName& ErrorMessageKey);
    void ShowMountHUD(UCreature_MountComponent* MountComponent, bool bIncludeCharge);
    void ShowCreatureNurturingHUD(bool Show);
    void ShowCreatureCaptureHUD();
    void ShowConjurationUI(bool Show, int32_t IntroType);
    void ShowBroomRaceHUD();
    void ShowBroomHUD(AFlyingBroom* BroomActor);
    void SetHudElementVisibility(FString ElementName, ESlateVisibility NewVisibility, UObject* Provider);
    void SetGlobalHudVisibility(bool ShouldShow, bool AllowTicking, bool ShouldAnimate);
    void SetCurrentTargetActor(AActor* Target, bool ShowName, bool ShowHealth);
    void SetAndShowHintMessage(FString HintKey, FTutorialLayoutData HintPositionData, bool bIgnoreShowTutorialElementsFlag, float MaxDuration);
    void RemoveBeaconFromHUD(UHUDCompassIcon* Beacon);
    void ReadActiveOwlMail();
    void OverrideSpellBar();
    void OnShowSpellBar(bool Show);
    void OnShowEnemyInfo(bool Show);
    void OnSetHUDVisibility();
    void OnSetEnemyData(FName& Name, float pct);
    void OnMailRecieved(FMailEntry Entry, int32_t DisplayPriority);
    void OnAddTextTickerNotification(FString NotificationText);
    void OnAddSpecialItemNotification(FString Name, FString IconName, int32_t Count, FString UnlockMessage);
    void OnAddPickupNotification(FString Name, FString IconName, int32_t Count, bool bSpecial, FName Variation);
    void OnAddFastTravelUnlockedNotification(FString Name, FString IconName);
    void OnAddCompanionLevelUpNotification(FString CompanionName);
    void OnAddCollectionObtainedNotification(FName CollectionItemID, FName CollectionCategory);
    void OnAddCollectionKnownNotification(FName CollectionItemID, FName CollectionCategory);
    void OnAddChallengeUpdatedNotification(FName ChallengeID, FName ChallengeCategory, int32_t CompletedAmt, int32_t TotalRequired);
    void OnAddChallengeUnlockedNotification(FName ChallengeID, FName ChallengeCategory, int32_t TotalRequired);
    void OnAddChallengeCompleteNotification(FName ChallengeID, FName ChallengeCategory, int32_t CompletedLevel, int32_t TotalLevels, int32_t TotalInstancesForLevel);
    UHUDCompassIcon* MakeBeaconIcon(FString IconName);
    void HideZoneNotification();
    void HideOutOfAreaAlert();
    void HideNotificationsHUD();
    void HideNoFlyHUD();
    void HideMountHUD();
    void HideCreatureCaptureHUD();
    void HideBroomRaceHUD();
    void HideBroomHUD();
    UMissionBannerWidget* GetMissionBanner();
    void ExperienceChangedBP(FExperienceChange ExperienceChangedData);
    void ClearSpellBarOverride();
    void ClearHintMessage();
    void AnimateTrackingInfoWidget();
    void AddSpecialItemNotification(FString Name, FString IconName, int32_t Count, FString UnlockMessage);
    void AddFastTravelUnlockedNotification(FString Site, FString IconName);
    void AddCompanionLevelUpNotification(UObject* i_caller, FString CompanionName, int32_t Level);
    void AddCollectionNotification(FString Name, FString IconName, int32_t Count, bool bSpecial, FName Variation);
    void AddBeaconToHUD(UHUDCompassIcon* Beacon, UCanvasPanelSlot*& BeaconSlot);
}; // Size: 0x310
#pragma pack(pop)
