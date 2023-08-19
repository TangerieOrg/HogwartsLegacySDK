#pragma once
#include <cstdint>
#include "EDisciplineType.hpp"
#include "EFactsheetButtonState.hpp"
#include "EFieldGuideExitReasons.hpp"
#include "EGamepadType.hpp"
#include "EGenderEnum.hpp"
#include "EInputDeviceUsed.hpp"
#include "EPauseMenuPage.hpp"
#include "ETutorialPosition.hpp"
#include "EUIDisplayMode.hpp"
#include "EUIFactsheetMode.hpp"
#include "EUIGameOverReason.hpp"
#include "EUIPlatformInputDevice.hpp"
#include "EUIPopupPriority.hpp"
#include "EWidgetType.hpp"
#include "FColor.hpp"
#include "FInputActionHoldInfo.hpp"
#include "FInputActionKeyMapping.hpp"
#include "FInputAxisKeyMapping.hpp"
#include "FInputGroupHeader.hpp"
#include "FKey.hpp"
#include "FLegendItemData.hpp"
#include "FLinearColor.hpp"
#include "FMenuReaderVoice.hpp"
#include "FRPGUIInfo.hpp"
#include "FTimespan.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "HouseIds.hpp"
#include "UObject.hpp"
class UScreen;
class UTexture2D;
class UDataTable;
class UTutorialSystem;
class UPhoenixNotificationManager;
class UWorldSupportWorld;
class APlayerController;
class UWorldSupportLevel;
class UMapOverland;
class UUserWidget;
class APawn;
class UClass;
class UMapDungeon;
class UWorld;
class UMapHogwarts;
class UMapHogsmeade;
class UInGameMenuScreen;
class UUIInputManager;
class UFieldGuideMenu;
class UBeaconInfo;
class APhoenixPathActor;
class UScreenFadeWidget;
class UMissionFailScreenBase;
class AActor;
class UPopupScreen;
class UMenuCursorWidget;
struct FMastermindTutorialInfo;
struct FMastermindScreenInfo;
struct FMastermindPopupInfo;
class UMapSubSystem;
#pragma pack(push, 1)
class UUIManager : public UObject {
public:
    char pad_28[0x60];
    UDataTable* IconDataTable; // 0x88
    UDataTable* TargetUITable; // 0x90
    UPhoenixNotificationManager* NotificationManager; // 0x98
    UTutorialSystem* TutorialSystem; // 0xa0
    UTexture2D* ErrorTexture; // 0xa8
    UTexture2D* LoadingTexture; // 0xb0
    char pad_b8[0x48];
    EUIDisplayMode UIDisplayMode; // 0x100
    char pad_101[0x3];
    FName CompendiumCategory; // 0x104
    char pad_10c[0x4];
    FString CompendiumItemName; // 0x110
    FString LastVisitedMenuPage; // 0x120
    float GlobalParallaxMultiplier; // 0x130
    float NextExpGainDelay; // 0x134
    FName LastLocationName; // 0x138
    EGenderEnum DefaultGenderRig; // 0x140
    char pad_141[0x3];
    FName DefaultMalePreset; // 0x144
    FName DefaultFemalePreset; // 0x14c
    char pad_154[0x54];
    UWorldSupportWorld* PauseWorld; // 0x1a8
    UWorldSupportWorld* FieldGuideWorld; // 0x1b0
    char pad_1b8[0x8];
    UWorldSupportWorld* VendorWorld; // 0x1c0
    UWorldSupportWorld* CompanionWorld; // 0x1c8
    UScreen* CompanionSelectScreen; // 0x1d0
    APlayerController* GamePlayerController; // 0x1d8
    char pad_1e0[0x30];
    bool CastStupefyWithRightTrigger; // 0x210
    char pad_211[0x6f];
    UMapOverland* OverlandMap; // 0x280
    char pad_288[0x98];
    UUserWidget* InteractWidget; // 0x320
    TArray<FName> PauseRequesters; // 0x328
    UClass* mUIScreenFadeClass; // 0x338
    char pad_340[0x80];
    UMapDungeon* DungeonMap; // 0x3c0
    UMapHogwarts* HogwartsMap; // 0x3c8
    UMapHogsmeade* HogsmeadeMap; // 0x3d0
    char pad_3d8[0x8];
    UClass* InGameMenuWidgetClass; // 0x3e0
    UClass* FieldGuideWidgetClass; // 0x3e8
    UInGameMenuScreen* InGameMenuWidget; // 0x3f0
    UFieldGuideMenu* FieldGuideWidget; // 0x3f8
    char pad_400[0x8];
    UClass* PopupScreenClass; // 0x408
    char pad_410[0x7];
    bool bIsRichPaperShowing; // 0x417
    APhoenixPathActor* PathActor; // 0x418
    char pad_420[0x10];
    FColor PauseMenuLEDColor; // 0x430
    char pad_434[0xa4];
    UUIInputManager* InputManager; // 0x4d8
    char pad_4e0[0x38];
    TArray<UTexture2D*> AlwaysLoadedTextures; // 0x518
    UScreenFadeWidget* m_pScreenFadeWidget; // 0x528
    char pad_530[0x10];
    UMissionFailScreenBase* MissionFailedScreen; // 0x540
    char pad_548[0x88];
    UBeaconInfo* CompanionBeaconInfo; // 0x5d0
    char pad_5d8[0xb9];
    bool ReadyToShowDSFirmwareUpgrade; // 0x691
    char pad_692[0x56];
    static UUIManager* StaticClass();
    void WidgetClassLoaded(UUserWidget* Widget);
    static FMenuReaderVoice ValidateMenuReaderVoice(FMenuReaderVoice InVoice);
    void UseHoverDrone();
    void UpdateHintGameLogic(FName GameLogicVar, bool SetOn);
    static bool UpdateFSKnownItemsDetailMap(FString FactItem, FString FactAttribute, EFactsheetButtonState FactState);
    void UpdateAllFastTravelLocations();
    void UnpauseLocationNameUI();
    void UnlockAllPauseMenuTabs();
    void UnloadFieldGuideScreen();
    static bool UnbindMKBAxis(FInputAxisKeyMapping& InAxisMapping, bool bForceRebuildKeymaps, bool bTranspose);
    static bool UnbindMKBAction(FInputActionKeyMapping& InActionMapping, bool bForceRebuildKeymaps, bool bTranspose);
    void UITriggerLevelLoad();
    void UIManager_ToggleShowCurentLevelName();
    void UIBuildNavMeshData();
    void TriggerGamepadTextInput();
    void TriggerFadeOut();
    void TriggerFadeIn();
    static TArray<FInputAxisKeyMapping> TransposeAxisToQWERTY(TArray<FInputAxisKeyMapping>& AxisMappings);
    static TArray<FInputAxisKeyMapping> TransposeAxisFromQWERTY(TArray<FInputAxisKeyMapping>& AxisMappings);
    static TArray<FInputActionKeyMapping> TransposeActionToQWERTY(TArray<FInputActionKeyMapping>& ActionMappings);
    static TArray<FInputActionKeyMapping> TransposeActionFromQWERTY(TArray<FInputActionKeyMapping>& ActionMappings);
    void TogglePathActive();
    void ToggleMenuTab(EPauseMenuPage MenuPage, bool ShouldShow);
    void ToggleHUD(bool Enable, bool AllowSelectiveTicking);
    bool TargetWidgetSetup(AActor* Target);
    void TargetComponentWidget(AActor* Target);
    void StopVendorWorld();
    void StopCompanionWorld();
    void StartVendorWorld();
    void StartCompanionWorld();
    UPopupScreen* ShowYesNoPopup(FString TitleString, FString DescriptionString, bool IsDescTranslated, bool bPausesTheGame, UUserWidget* ContentWidget, EUIPopupPriority PopupPriority, bool bAutoCloseOnButtonPress);
    void ShowVirtualCursor(APlayerController* Controller, bool Enable, FVector2D Position, FString Context);
    void ShowRoadsInWorld();
    UPopupScreen* ShowPleaseWaitPopup(FString TitleString, FString DescriptionString, bool IsDescTranslated, bool bPausesTheGame, UUserWidget* ContentWidget, EUIPopupPriority PopupPriority, bool bAutoCloseOnButtonPress);
    void ShowPathSelectionReleased();
    void ShowPathSelectionPressed();
    void ShowPathSelectionCancelled();
    void ShowPathInWorld();
    UPopupScreen* ShowOkPopup(FString TitleString, FString DescriptionString, bool IsDescTranslated, bool bPausesTheGame, UUserWidget* ContentWidget, EUIPopupPriority PopupPriority, bool bAutoCloseOnButtonPress, int32_t ZOrder);
    UPopupScreen* ShowOkCancelPopup(FString TitleString, FString DescriptionString, bool IsDescTranslated, bool bPausesTheGame, UUserWidget* ContentWidget, EUIPopupPriority PopupPriority, bool bAutoCloseOnButtonPress);
    UPopupScreen* ShowGenericPopup(FString TitleString, FString DescriptionString, TArray<FLegendItemData>& LegendItems, TArray<FInputActionHoldInfo>& CompletionActions, bool bUsesWaitIndicator, bool IsDescTranslated, bool bPausesTheGame, UUserWidget* ContentWidget, EUIPopupPriority PopupPriority, bool bAutoCloseOnButtonPress, int32_t ZOrder);
    void ShowFloatingGamepadTextInput();
    static void SetUIDisplayMode(EUIDisplayMode DisplayMode);
    void SetToMapFromBackButton(bool pToMapFromBackButton);
    void SetTempPauseLock(bool pTempPauseLock);
    static bool SetStudentLocatorBeacon(FString StudentName);
    void SetPlayerPawn(APawn* Pawn);
    void SetPlayerInventorySortPreference(FString Preference);
    bool SetPlayerHouseEnum(HouseIds House);
    bool SetPlayerHouse(FString HouseName);
    bool SetPlayerGender(FString Gender);
    bool SetPlayerFirstAndLastName(FString PlayerFirstName, FString PlayerLastName);
    bool SetPlayerChosenWandInfo(FString WandStyle, FString WandWood, FString WandCore, FString WandLength, FString WandFlex);
    static bool SetMKBAxis(FInputAxisKeyMapping& InAxisMapping, bool bIsPrimary, bool bForceRebuildKeymaps, bool bTranspose);
    static bool SetMKBAction(FInputActionKeyMapping& InActionMapping, bool bIsPrimary, bool bForceRebuildKeymaps, bool bTranspose);
    static bool SetMenuReaderVolume(float InVolume);
    static bool SetMenuReaderVoice(FMenuReaderVoice InVoice);
    static bool SetMenuReaderEnabled(bool bEnabled);
    void SetManualFade(float Opacity);
    static bool SetLocatorBeaconUsingType(FString Type, FString NameOrLocation);
    static bool SetLocatorBeaconUsingDBLocation(FString LocationID);
    static bool SetLocatorBeaconUsingDBDungeonEntrances(FString LocationID);
    static bool SetLocatorBeacon(FString StudentName, FVector Location, FString BeaconIconName);
    void SetLocationName(FName LocationName, bool ShowNotification);
    void SetLoadingSaveGame(bool pLoadingSaveGame);
    void SetIsRichPaperShowing(bool Showing);
    void SetInPreGameplayState(bool InPreGameplayState);
    void SetInMenuTransitionWithDelay(bool pInMenuTransition, float Delay, FString pContext);
    void SetInMenuTransition(bool pInMenuTransition, FString pContext);
    void SetInFrontendLevel(bool bInFrontend);
    void SetInDarkArtsChallenge(bool InDA);
    void SetHiddenMenuTabs(TArray<EPauseMenuPage> PagesToHide);
    static void SetFactsheetMode(EUIFactsheetMode NewFactsheetMode);
    void SetDebugLoadingScreen(bool bDebug);
    static void SetCursorWidget(UMenuCursorWidget* NewCursor);
    void SetCompanionSelectionScreen(UScreen* InScreen);
    void SetCastStupefyWithRightTrigger(bool UseRT);
    void SetCanBackOutOfAvatarCreator(bool bCanBackOut);
    void SetAsyncScreenLoadInProgress(bool InProgress);
    void SetAndShowHintMessage(FString HintKey, ETutorialPosition HintPosition, bool bIgnoreShowTutorialElementsFlag, float MaxDuration);
    void SetActiveMenu(FName MenuToLoad, bool LoadToSubPage, bool LockToMenu);
    void SelectButton();
    static bool SaveInputConfig();
    void RevelioPageScreenLoaded(UScreen* Screen);
    void ReturnToStartPage();
    static FString ResolveOptionPanelChoice(FString DialogueLine);
    void RequestGameAndSystemPause(bool bPause, FName RequesterName);
    void RemoveTargetComponentWidget(AActor* Target, bool TargetDied);
    static void RemoveStudentLocatorBeacon();
    void RemoveInteractComponentWidget(AActor* Target);
    void RemoveAlertComponentWidget(AActor* Target, EWidgetType WidgetType);
    static FString PhoenixTranslate(FString Key, FString DebugLogText);
    static bool PhoenixKeyExists(FString Key);
    void PauseLocationNameUI();
    void PathSelectionTimerExpired();
    void OnVendorLevelUnload(UWorldSupportLevel* Level);
    void OnVendorLevelShow(UWorldSupportLevel* Level);
    void OnVendorLevelLoad(UWorldSupportLevel* Level);
    void OnStatChanged(FName StatID, int32_t Value, int32_t Delta);
    void OnSaveGameLoad();
    void OnInputDeviceChanged(EInputDeviceUsed UsedInputDevice, FKey InputPressed);
    void OnGameToBeSaved();
    void OnFieldGuideUnload(UWorldSupportLevel* Level);
    void OnFieldGuideShow(UWorldSupportLevel* Level);
    void OnFieldGuideLoad(UWorldSupportLevel* Level);
    void OnFadeInComplete();
    void OnDualShockFirmwareUpgradePopupClosed(UPopupScreen* PopupScreen, int32_t CompletionActionIndex);
    void OnControlSchemaChanged();
    void OnCompanionLevelUnload(UWorldSupportLevel* Level);
    void OnCompanionLevelShow(UWorldSupportLevel* Level);
    void OnCompanionLevelLoad(UWorldSupportLevel* Level);
    void MoviePlaybackFinished(UObject* Caller);
    void MissionFailScreenLoaded(UScreen* Screen);
    void LoadFieldGuideScreen();
    void KeepLoadScreenUp();
    bool IsVendorInteract(FName Target);
    static bool IsUsingXboxOneController();
    static bool IsUsingSwitchController();
    static bool IsUsingSteamController();
    static bool IsUsingPS5Controller();
    static bool IsUsingPS4Controller();
    static bool IsStudentLocatorBeaconActive(FString StudentName);
    bool IsSteamRunningOnSteamDeck();
    bool IsSteamInBigPictureMode();
    bool IsPopupReady();
    bool IsPauseRequestedBy(FName RequesterName);
    bool IsNabSackAlreadyEquipped();
    bool IsMenuTabHidden(EPauseMenuPage MenuTab);
    static bool IsMenuReaderSupported();
    static bool IsMenuReaderEnabled();
    static bool IsMenuReaderCurrentLanguageSupported();
    static bool IsMenuReaderBusy();
    bool IsItemNew(FName CategoryName, FName ItemName);
    bool IsInPreGameplayState();
    bool IsInFrontendLevel();
    static bool IsGamepadTypeConnected(EGamepadType GamepadType);
    bool IsFaded();
    bool IsDebugLoadingScreen();
    static bool IsAxisKeyValid(FInputAxisKeyMapping& InAxisMapping);
    bool IsAsyncScreenLoadInProgress();
    static bool IsActionKeyValid(FInputActionKeyMapping& InActionMapping);
    void InteractComponentWidget(AActor* Target);
    bool InPauseMode();
    bool InFieldGuideMenuTransition();
    bool InDarkArtsChallenge();
    void IconTextureLoadedCallback(UTexture2D* Texture, UObject* Param);
    void HandleMapLocationChanged(UObject* Caller, FString CurrentMapLocationName);
    AActor* GetVendorWorldPreviewActor();
    static EUIPlatformInputDevice GetUIPlatformInputDevice();
    static UUIManager* GetUIManagerPure();
    bool GetToMapFromBackButton();
    bool GetTempPauseLock();
    HouseIds GetSortingHatRecommendedHouse();
    bool GetShouldShowButtonGraphics();
    UScreenFadeWidget* GetScreenFadeWidget();
    float GetPSOProgress();
    int32_t GetPlayerYear(EDisciplineType Discipline);
    APawn* GetPlayerPawn();
    FString GetPlayerName();
    FString GetPlayerInventorySortPreference();
    HouseIds GetPlayerHouseEnum();
    FString GetPlayerHouse();
    FString GetPlayerGender();
    void GetPlayerFirstAndLastName(FString& PlayerFirstName, FString& PlayerLastName);
    bool GetPlayerChosenWandInfo(FString& WandStyle, FString& WandWood, FString& WandCore, FString& WandLength, FString& WandFlex);
    static TArray<FInputGroupHeader> GetPCInputGroupHeaders(bool bAction, bool bAxis);
    UMapOverland* GetOverlandMap();
    void GetNewIndicatorCategory(FName CategoryName, TArray<FName>& NewIndicatorItems);
    int32_t GetNewFactCount();
    static bool GetMutatedMKBAxisMappingsByName(FName& AxisName, TArray<FKey>& ForbiddenKeys, FInputAxisKeyMapping& OutPosMain, FInputAxisKeyMapping& OutFakePosMain, FInputAxisKeyMapping& OutPosAlt, FInputAxisKeyMapping& OutNegMain, FInputAxisKeyMapping& OutFakeNegMain, FInputAxisKeyMapping& OutNegAlt, bool bTranspose);
    static bool GetMKBAxisPairsByName(FName& AxisName, FInputAxisKeyMapping& OutPositivePrimary, FInputAxisKeyMapping& OutPositiveAlternative, FInputAxisKeyMapping& OutNegativePrimary, FInputAxisKeyMapping& OutNegativeAlternative, bool bTranspose);
    static bool GetMKBActionPairByName(FName ActionName, FInputActionKeyMapping& OutPrimary, FInputActionKeyMapping& OutAlternative, bool bTranspose);
    bool GetMastermindTutorialInfo(FMastermindTutorialInfo& outMastermindTutorialInfo);
    bool GetMastermindScreenInfo(FMastermindScreenInfo& outMastermindScreenInfo);
    bool GetMastermindPopupInfo(FMastermindPopupInfo& outMastermindPopupInfo);
    UMapSubSystem* GetMapSubSystem();
    EInputDeviceUsed GetLastUsedInputDevice();
    static void GetKeyIdsFromActionId(FString ActionId, TArray<FString>& OutKeyIds, bool Transpose, bool ForceGamepadKeys, bool ForceMouseKeyboardKeys);
    bool GetIsVirtualCursorShowing();
    bool GetIsUIShown();
    bool GetIsRichPaperShowing();
    bool GetIsInitialized();
    bool GetInMenuTransition();
    UInGameMenuScreen* GetInGameMenuWidget();
    UMapHogwarts* GetHogwartsMap();
    UMapHogsmeade* GetHogsmeadeMap();
    TArray<EPauseMenuPage> GetHiddenMenuTabs();
    static TArray<FName> GetGroupMappingNames(FName GroupName, bool bAction, bool bAxis, bool bSort);
    UFieldGuideMenu* GetFieldGuideWidget();
    static EUIFactsheetMode GetFactsheetMode();
    UMapDungeon* GetDungeonMap();
    FString GetDisplayedUserTag();
    static UMenuCursorWidget* GetCursorWidget();
    UWorld* GetCurrentWorld();
    UScreen* GetCompanionSelectionScreen();
    AActor* GetCallOutComponentTarget(AActor* Target);
    FString GetBuildNumber();
    static void GetAxisMappingByName(FName AxisName, TArray<FInputAxisKeyMapping>& OutMappings, bool bTranspose, bool bMouseAndKeyboardOnly, bool bIncludeUnbound);
    static TArray<FMenuReaderVoice> GetAvailableVoices();
    TArray<FRPGUIInfo> GetActiveBuffData();
    static void GetActionMappingByName(FName ActionName, TArray<FInputActionKeyMapping>& OutMappings, bool bTranspose, bool bMouseAndKeyboardOnly, bool bIncludeUnbound);
    static UUIManager* Get();
    void GameOverScreenLoaded(UScreen* Screen);
    static void ForceRebuildKeyMapsFromQWERTY();
    void FieldGuideMenuStart();
    void FadeOutToColor(float Duration, FLinearColor TargetColor);
    void FadeOut(float Duration);
    void FadeIn(float Duration);
    void ExitFieldGuideWithReason(EFieldGuideExitReasons ExitReason, bool SkipFadeScreen, int32_t CharacterID, FString Filename, FString FastTravelName);
    void DropLoadScreen();
    bool DoesRightTriggerCastStupefy();
    void DestroyVendorWorld();
    void DestroyCompanionrWorld();
    void DebugTriggerCollectionObtainedNotification(FName CollectionID, FName CollectionCategory);
    void DebugTriggerCollectionKnownNotification(FName CollectionID, FName CollectionCategory);
    void DebugTriggerChallengeUpdatedNotification(FName ChallengeID, FName ChallengeCategory, int32_t CompletedAmt, int32_t TotalRequired);
    void DebugTriggerChallengeUnlockedNotification(FName ChallengeID, FName ChallengeCategory, int32_t TotalRequired);
    void DebugTriggerChallengeCompleteNotification(FName ChallengeID, FName ChallengeCategory, int32_t CompletedLevel, int32_t TotalLevels, int32_t TotalInstancesForLevel);
    void CycleControlModeInputCheck1();
    void CreateHUDLog(bool pShow, FString Group, FString pContext);
    void CreateGameOverScreen(EUIGameOverReason Reason);
    static void CreateAsyncWidget();
    static void CorrectInputAxisKeyIfNeeded(FInputAxisKeyMapping& InInputAxisMapping, FInputAxisKeyMapping& OutInputAxisMapping);
    void ClearPauseMenuPageBP();
    void ClearPath();
    void ClearNewIndicatorItem(FName CategoryName, FName ItemName);
    void ClearNewIndicatorCategory(FName CategoryName);
    void ClearHintMessage();
    void ClearCurrentLocationName();
    void ChangeMenuPage();
    void ChallengeResultsScreenLoaded(UScreen* Screen);
    bool CanPlayIntroNormally();
    bool CanBackOutOfAvatarCreator();
    void BuildNavPointsUsingActors(TArray<AActor*>& Actors, float Width, float Height);
    void AppendNavPointsUsingActors(TArray<AActor*>& Actors);
    void AnimateTrackingInfo();
    void AlertComponentWidget(AActor* Target, EWidgetType WidgetType);
    void AdvanceTime(FTimespan DeltaTimeAdvance);
    static void AddTextTickerNotification(FString NotificationText);
    void AddPathStartEnd(FVector Start, FVector End, float Width, float Height);
    void AddPathPoints(TArray<FVector>& PathPoints, float Width, float Height);
    void AddPathEnd(FVector End, float Width, float Height);
    void AddNewIndicatorItem(FName CategoryName, FName ItemName);
    void AddNavPathPoints(TArray<FVector>& PathPoints, float Width, float Height);
}; // Size: 0x6e8
#pragma pack(pop)
