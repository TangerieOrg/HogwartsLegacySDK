#pragma once
#include <cstdint>
#include "EDifficulty.hpp"
#include "EInputDeviceUsed.hpp"
#include "ESlateVisibility.hpp"
#include "EUIHealthBarType.hpp"
#include "FExperienceChange.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FMailEntry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTutorialLayoutData.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UPhoenixHUDWidget.hpp"
class UUI_BP_AncientMagicCollectionHUD_C;
class UWidgetAnimation;
class UCanvasPanel;
class UUI_BP_TextNotificationPanel_C;
class UUI_BP_VaseCounter_C;
class UMissionBannerWidget;
class UUI_BP_ChallengeComplete_C;
class UUI_BP_ComboHUD_C;
class UWidgetSwitcher;
class UUI_BP_BeaconHUDPanel_C;
class UUI_BP_CombatBreakout_C;
class UUI_BP_AsyncLoadWrapper_C;
class UUI_BP_ActionDiamondRing_C;
class UUI_BP_HUD_BossMeter_C;
class UUIManager;
class UUI_BP_ChallengeHud_C;
class UUI_BP_NoDismount_C;
class UUI_BP_CombatParry_C;
class UUI_BP_LookAtWidget_C;
class UUI_BP_QuickHealthActions_C;
class UUI_BP_CreatureNurturingHUD_Socket_C;
class UUI_BP_UnreadMailIcon_C;
class UCanvasPanelSlot;
class UPhoenixGameInstance;
class UUI_BP_DamageIndicators_C;
class AActor;
class UUI_BP_DuelTechniques_C;
class UUI_BP_FinisherMeter_C;
class UUI_BP_CompassIcon_C;
class UUI_BP_HUDHint_C;
class UUI_BP_OutOfAreaNotification_C;
class UInvalidationBox;
class UUI_BP_NPCHealthMeter_C;
class UUI_BP_MiniMap_C;
class APlayerController;
class UUI_BP_MountHUD_C;
class UUI_BP_OwlMailNotification_C;
class UUI_BP_ActionHUD_PC_C;
class UUI_BP_BroomRaceHUD_C;
class UUI_BP_SpecialChallengeNotification_C;
class AHUD;
class UUI_BP_BroomHUD_C;
class UWidget;
class UUI_BP_ErrorMessage_C;
class UUI_BP_MissionBanner_New_C;
class UUI_BP_NoFlyHud_C;
class UMinimapManager;
class UUI_BP_QuickItemHUD_C;
class UUI_BP_SavingIcon_C;
class UUI_BP_Wanted_C;
class UUI_BP_XPMeter_C;
class ACharacter;
class UAsyncLoadWrapper;
class UHUDCompassIcon;
class UObject;
class APhoenixHUD;
class UMapSubSystem;
class UCreature_MountComponent;
class UClass;
class UScreen;
class AFlyingBroom;
class UUserWidget;
class UPersistentData;
#pragma pack(push, 1)
class UUI_BP_PhoenixHUDWidget_C : public UPhoenixHUDWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x310
    UWidgetAnimation* FadeHUD; // 0x318
    UWidgetAnimation* BreakoutRingSuccess; // 0x320
    UWidgetAnimation* BreakoutRingFail; // 0x328
    UWidgetAnimation* SwapBreakoutButton; // 0x330
    UUI_BP_ActionDiamondRing_C* ActionRing; // 0x338
    UUI_BP_AncientMagicCollectionHUD_C* AncientMagicHud; // 0x340
    UUI_BP_AsyncLoadWrapper_C* AsyncCompanionLevelNotification; // 0x348
    UUI_BP_AsyncLoadWrapper_C* AsyncFastTravelUnlockedNotification; // 0x350
    UUI_BP_AsyncLoadWrapper_C* AsyncNotificationPanel; // 0x358
    UUI_BP_AsyncLoadWrapper_C* AsyncReticule; // 0x360
    UUI_BP_AsyncLoadWrapper_C* AsyncSpecialItemNotification; // 0x368
    UUI_BP_BeaconHUDPanel_C* BeaconHUDPanel; // 0x370
    UUI_BP_HUD_BossMeter_C* BossHealthMeter; // 0x378
    UUI_BP_ChallengeComplete_C* ChallengeCompleteNotification; // 0x380
    UUI_BP_ChallengeHud_C* ChallengeHud; // 0x388
    UUI_BP_CombatBreakout_C* CombatBreakout; // 0x390
    UUI_BP_CombatParry_C* CombatParry; // 0x398
    UUI_BP_ComboHUD_C* ComboHud; // 0x3a0
    UUI_BP_CreatureNurturingHUD_Socket_C* CreatureNurturingHUDSocket; // 0x3a8
    UUI_BP_DamageIndicators_C* DamageIndicators; // 0x3b0
    UUI_BP_DuelTechniques_C* DuelTechniquesHUD; // 0x3b8
    UUI_BP_FinisherMeter_C* FinisherMeter; // 0x3c0
    UWidgetSwitcher* HealthBarSwitcher; // 0x3c8
    UUI_BP_HUDHint_C* HintHud; // 0x3d0
    UUI_BP_LookAtWidget_C* LookAtWidget; // 0x3d8
    UCanvasPanel* MapSettingsElements; // 0x3e0
    UCanvasPanel* MeterSettingsElements; // 0x3e8
    UInvalidationBox* MeterSettingsInvalidationBox; // 0x3f0
    UUI_BP_MiniMap_C* Minimap; // 0x3f8
    UUI_BP_MountHUD_C* MountHud; // 0x400
    UUI_BP_NoDismount_C* NoDismountAllowedIcon; // 0x408
    UCanvasPanel* NoTickWhenHidden; // 0x410
    UUI_BP_NPCHealthMeter_C* NPCHealthMeter; // 0x418
    UUI_BP_OutOfAreaNotification_C* OutOfArea; // 0x420
    UUI_BP_OwlMailNotification_C* OwlMailNotification; // 0x428
    UUI_BP_ActionHUD_PC_C* PCActionRing; // 0x430
    UWidgetSwitcher* QuickActionsSwitcher; // 0x438
    UUI_BP_QuickHealthActions_C* QuickHealthActions; // 0x440
    UCanvasPanel* Root; // 0x448
    UUI_BP_SpecialChallengeNotification_C* SpecialChallengeNotification; // 0x450
    UCanvasPanel* SpellSettingsElements; // 0x458
    UInvalidationBox* SpellSettingsInvalidationBox; // 0x460
    UUI_BP_TextNotificationPanel_C* TextNotificationPanel; // 0x468
    UCanvasPanel* TickWhenHidden; // 0x470
    UUI_BP_BroomHUD_C* UI_BP_BroomHUD; // 0x478
    UUI_BP_BroomRaceHUD_C* UI_BP_BroomRaceHUD; // 0x480
    UUI_BP_ErrorMessage_C* UI_BP_ErrorMessage; // 0x488
    UUI_BP_MissionBanner_New_C* UI_BP_MissionBanner_New; // 0x490
    UUI_BP_NoFlyHud_C* UI_BP_NoFlyHud; // 0x498
    UUI_BP_QuickItemHUD_C* UI_BP_QuickItemHUD; // 0x4a0
    UUI_BP_SavingIcon_C* UI_BP_SavingIcon; // 0x4a8
    UUI_BP_UnreadMailIcon_C* UI_BP_UnreadMailIcon; // 0x4b0
    UUI_BP_VaseCounter_C* UI_BP_VaseCounter; // 0x4b8
    UUI_BP_Wanted_C* wanted; // 0x4c0
    UUI_BP_XPMeter_C* XpMeter; // 0x4c8
    AActor* TargetActor; // 0x4d0
    bool HasTarget; // 0x4d8
    char pad_4d9[0x3];
    int32_t Count; // 0x4dc
    FString Breakout_ButtonString; // 0x4e0
    int32_t Breakout_String_randomINT; // 0x4f0
    bool BreakoutComplete; // 0x4f4
    bool RandomBreakout; // 0x4f5
    char pad_4f6[0x2];
    TArray<FHermesBPDelegateHandle> HermesBindings; // 0x4f8
    FString ConjurationCategory; // 0x508
    EUIHealthBarType HealthBarType; // 0x518
    char pad_519[0x7];
    UUI_BP_BroomRaceHUD_C* UI_BP_Broom_Race_HUD; // 0x520
    static UUI_BP_PhoenixHUDWidget_C* StaticClass();
    void GetAsyncWrapperRenderSize(FVector2D& RenderSize);
    void GameDifficultyChanged(EDifficulty NewDifficulty, EDifficulty Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility K2Node_Select_Default);
    void TranslateBreakout(ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Divide_FloatFloat_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector2D CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition, bool CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void AddBeaconToHUD0(UHUDCompassIcon* Beacon, UCanvasPanelSlot*& BeaconSlot, UCanvasPanelSlot* CallFunc_AddBeacon_NewSlot);
    UMissionBannerWidget* GetMissionBanner0();
    void UpdateQuickActionsHUD(float Temp_float_Variable, int32_t Temp_int_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, int32_t Temp_int_Variable_1, float Temp_float_Variable_3, float Temp_float_Variable_4, int32_t Temp_int_Variable_2, float Temp_float_Variable_5, float Temp_float_Variable_6, bool Temp_bool_Variable, int32_t Temp_int_Variable_3, int32_t Temp_int_Variable_4, float Temp_float_Variable_7, UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, int32_t Temp_int_Variable_5, UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_1, bool K2Node_DynamicCast_bSuccess_1, UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_2, bool K2Node_DynamicCast_bSuccess_2, UUIManager* CallFunc_Get_ReturnValue, EInputDeviceUsed CallFunc_GetLastUsedInputDevice_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32_t K2Node_Select_Default, float K2Node_Select_Default_1, float K2Node_Select_Default_2, FVector2D CallFunc_MakeVector2D_ReturnValue, float K2Node_Select_Default_3, FVector2D CallFunc_MakeVector2D_ReturnValue_1, float K2Node_Select_Default_4, FVector2D CallFunc_MakeVector2D_ReturnValue_2);
    void HasUnreadMailNotification(bool& bUnreadMail);
    void SetVisibilityPerWidget(bool ShouldShow, TArray<UWidget*> NoTickWidgets, TArray<UWidget*> TickWidgets);
    void AdjustHUDDisplayForDemoBuilds(bool IsPlayingDemoBuild, UPhoenixGameInstance* CallFunc_GetPhoenixGameInstance_ReturnValue, bool CallFunc_GetPlayingDemoBuild_ReturnValue);
    void HandleSetElementVisibility(FString ElementName, ESlateVisibility Visibility, UObject* Provider, bool Temp_bool_Variable, bool K2Node_SwitchString_CmpSuccess, EDifficulty CallFunc_GetCurrentGameDifficulty_Difficulty, bool CallFunc_GetCurrentGameDifficulty_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, ESlateVisibility Temp_byte_Variable, ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_3, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_4, UMinimapManager* CallFunc_GetMiniMapManager_ReturnValue, UMinimapManager* CallFunc_GetMiniMapManager_ReturnValue_1);
    UHUDCompassIcon* MakeBeaconIcon0(FString IconName, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUI_BP_CompassIcon_C* CallFunc_Create_ReturnValue);
    void LayoutLoaded();
    void DisplayAutoSave();
    void GameLogicElementEvt_BreakoutBottom_K2Node_GameLogicBoolResultEvent_3(bool CachedResult);
    void GameLogicElementEvt_BreakoutLeft_K2Node_GameLogicBoolResultEvent_2(bool CachedResult);
    void GameLogicElementEvt_BreakoutRight_K2Node_GameLogicBoolResultEvent_1(bool CachedResult);
    void GameLogicElementEvt_BreakoutTop_K2Node_GameLogicBoolResultEvent_0(bool CachedResult);
    void OnLoaded_34BC5BCD467F67EB9A5A9E95BA21BA69(UClass* Loaded);
    void Construct();
    void OnGameToBeSaved();
    void OnShowEnemyInfo0(bool Show);
    void OnSetEnemyData0(FName& Name, float pct);
    void ExperienceChangedBP0(FExperienceChange ExperienceChangedData);
    void OnSetHUDVisibility0();
    void OnAddTextTickerNotification0(FString NotificationText);
    void ShowConjurationUI0(bool Show, int32_t IntroType);
    void ShowTransformationUI0(bool Show, int32_t IntroType);
    void Destruct();
    void ShowCreatureNurturingHUD0(bool Show);
    void OnAddSpecialItemNotification0(FString Name, FString IconName, int32_t Count, FString UnlockMessage);
    void AncMag_Pickup(UObject* Caller, float float);
    void NurturingHUDSlideOutComplete();
    void SetHudElementVisibility0(FString ElementName, ESlateVisibility NewVisibility, UObject* Provider);
    void CreatureFirstTimeCapture(UObject* Caller, int32_t int);
    void OnAddCompanionLevelUpNotification0(FString CompanionName);
    void HideMountHUD0();
    void BndEvt__AsyncReticule_K2Node_ComponentBoundEvent_0_AsyncWrapperLoadComplete__DelegateSignature(UAsyncLoadWrapper* SelfReference);
    void ShowMountHUD0(UCreature_MountComponent* MountComponent, bool bIncludeCharge);
    void SetCurrentTargetActor0(AActor* Target, bool ShowName, bool ShowHealth);
    void HideChallengeHUD(UObject* Caller);
    void AccessedTalentsPage(UObject* Caller);
    void SetAndShowHintMessage0(FString HintKey, FTutorialLayoutData HintPositionData, bool bIgnoreShowTutorialElementsFlag, float MaxDuration);
    void ClearHintMessage0();
    void ConjurationScreenLoaded(UScreen* LoadedScreen);
    void TogglePersistentStepBanner0(bool IsPersistent);
    void ShowBroomHUD0(AFlyingBroom* BroomActor);
    void HideBroomHUD0();
    void SetConjurationCategory(UObject* Caller, FString String);
    void ShowNoFlyHUD0(FName& ErrorMessageKey);
    void HideNoFlyHUD0();
    void SetGlobalHudVisibility0(bool ShouldShow, bool AllowTicking, bool ShouldAnimate);
    void AnimateTrackingInfoWidget0();
    void SyncSettingsVisibilities0();
    void ShowChallengeHUD(UObject* Caller);
    void OnMailRecieved0(FMailEntry Entry, int32_t DisplayPriority);
    void ShowLookAtCallout(UObject* Caller, int32_t int);
    void ReadActiveOwlMail0();
    void ShowBroomRaceHUD0();
    void HideBroomRaceHUD0();
    void ShowOutOfAreaAlert0(FName Message, float InitialTime);
    void HideOutOfAreaAlert0();
    void UpdateOutOfAreaAlertTimer0(float Time);
    void OnAddChallengeCompleteNotification0(FName ChallengeID, FName ChallengeCategory, int32_t CompletedLevel, int32_t TotalLevels, int32_t TotalInstancesForLevel);
    void OnAddCollectionKnownNotification0(FName CollectionItemID, FName CollectionCategory);
    void OnAddCollectionObtainedNotification0(FName CollectionItemID, FName CollectionCategory);
    void OnAddPickupNotification0(FString Name, FString IconName, int32_t Count, bool bSpecial, FName Variation);
    void OnAddChallengeUpdatedNotification0(FName ChallengeID, FName ChallengeCategory, int32_t CompletedAmt, int32_t TotalRequired);
    void Initialize();
    void SetParent(UUserWidget* Parent);
    void InEditorPostConstruct();
    void OnAddChallengeUnlockedNotification0(FName ChallengeID, FName ChallengeCategory, int32_t TotalRequired);
    void FadeOutNoTick();
    void FadeOutAllowTick();
    void RefreshButtonCallouts(UObject* Caller);
    void ToggleMissionDetailsHold0(bool IsHeld);
    void ShowNotificationsHUD0();
    void HideNotificationsHUD0();
    void OnAddFastTravelUnlockedNotification0(FString Name, FString IconName);
    void RemoveBeaconFromHUD0(UHUDCompassIcon* Beacon);
    void BndEvt__UI_BP_PhoenixHUDWidget_UI_BP_QuickItemHUD_K2Node_ComponentBoundEvent_1_OnFocusPotionApplied__DelegateSignature();
    void BndEvt__UI_BP_PhoenixHUDWidget_UI_BP_QuickItemHUD_K2Node_ComponentBoundEvent_2_OnFocusPotionExpired__DelegateSignature();
    void ExecuteUbergraph_UI_BP_PhoenixHUDWidget(int32_t EntryPoint, UPersistentData* CallFunc_GetInstance_ReturnValue);
}; // Size: 0x528
#pragma pack(pop)
