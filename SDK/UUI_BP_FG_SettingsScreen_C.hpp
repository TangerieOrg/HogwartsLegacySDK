#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FDateTime.hpp"
#include "FGeometry.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSaveGameInfo.hpp"
#include "USystemMenuWidget.hpp"
class UCanvasPanel;
class UWidgetAnimation;
class UImage;
class UUI_BP_FG_CategoryNavBar_C;
class UUI_BP_AsyncLoadWrapper_C;
class UPhoenixTextBlock;
struct FVector2D;
class USettingsTabWidget;
class UAsyncWidgetSwitcher;
class UButton;
class ULegendItem;
class UBorder;
class UUI_BP_Settings_Calibration_C;
class UUI_BP_Settings_HDRCalibration_C;
class UUI_BP_LoadMenu_C;
class UGraphicsSettingsWidget;
class UIconButtonWidget;
class UUI_BP_FG_DetailsPanelBack_C;
class UUI_BP_LegendItem_C;
class UUI_BP_SaveMenu_C;
class UUserWidget;
class UUI_BP_Settings_GamepadControls_C;
class ULegend;
class UPhoenixGameSettings;
class UWidget;
class UAsyncLoadWrapper;
class UUI_BP_KeyMapping_C;
class UPopupScreen;
class UUIManager;
class UFieldGuideMenu;
class UUI_BP_FieldGuide_C;
class UTabPageWidget;
class UObject;
#pragma pack(push, 1)
class UUI_BP_FG_SettingsScreen_C : public USystemMenuWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x3d0
    UWidgetAnimation* ToggleHDRCalibrationScreen; // 0x3d8
    UWidgetAnimation* ToggleSaveList; // 0x3e0
    UWidgetAnimation* IntroAnim; // 0x3e8
    UWidgetAnimation* ToggleCalibrationScreen; // 0x3f0
    UWidgetAnimation* ToggleLoadList; // 0x3f8
    UUI_BP_AsyncLoadWrapper_C* AsyncAccessibility; // 0x400
    UUI_BP_AsyncLoadWrapper_C* AsyncAudio; // 0x408
    UUI_BP_AsyncLoadWrapper_C* AsyncConsoleDisplay; // 0x410
    UUI_BP_AsyncLoadWrapper_C* AsyncDisplay; // 0x418
    UUI_BP_AsyncLoadWrapper_C* AsyncGamepadControls; // 0x420
    UUI_BP_AsyncLoadWrapper_C* AsyncGameplay; // 0x428
    UUI_BP_AsyncLoadWrapper_C* AsyncGraphics; // 0x430
    UUI_BP_AsyncLoadWrapper_C* AsyncKeyboardControls; // 0x438
    UAsyncWidgetSwitcher* AsyncMenuSwitcher; // 0x440
    UUI_BP_AsyncLoadWrapper_C* AsyncSaveLoad; // 0x448
    UUI_BP_AsyncLoadWrapper_C* AsyncUI; // 0x450
    UUI_BP_FG_CategoryNavBar_C* categoryNavBar; // 0x458
    UCanvasPanel* ConfirmGraphicsChangesPopup; // 0x460
    UButton* ConfirmPopupClickable; // 0x468
    UImage* ConfirmScreenFade; // 0x470
    UPhoenixTextBlock* GraphicsAcceptCountdownText; // 0x478
    UBorder* LoadSaveResultPopup; // 0x480
    UPhoenixTextBlock* LoadSaveResultStr; // 0x488
    UUI_BP_Settings_Calibration_C* page_Calibration; // 0x490
    UUI_BP_Settings_HDRCalibration_C* Page_HDRCalibration; // 0x498
    UUI_BP_LoadMenu_C* page_LoadGame; // 0x4a0
    UUI_BP_FG_DetailsPanelBack_C* panelBack; // 0x4a8
    UPhoenixTextBlock* popupBody; // 0x4b0
    UUI_BP_LegendItem_C* popupLegendItem_Accept; // 0x4b8
    UUI_BP_LegendItem_C* popupLegendItem_Cancel; // 0x4c0
    UPhoenixTextBlock* PopupTitle; // 0x4c8
    UBorder* settingsBorder; // 0x4d0
    UImage* SettingsPageIcon; // 0x4d8
    UPhoenixTextBlock* settingsTitle; // 0x4e0
    UUI_BP_SaveMenu_C* UI_BP_SaveMenu; // 0x4e8
    bool IsInLoadMenu; // 0x4f0
    char pad_4f1[0x7];
    UUserWidget* MainMenu; // 0x4f8
    bool isInCalibration; // 0x500
    bool IsInHDRCalibration; // 0x501
    bool InAcceptGraphicsChangeMode; // 0x502
    char pad_503[0x1];
    float AcceptTimeRemaining; // 0x504
    bool RequiresConfirm; // 0x508
    bool HideSaveLoadPage; // 0x509
    char pad_50a[0x2];
    float MinFOVOffset_Console; // 0x50c
    float MaxFOVOffset_Console; // 0x510
    float MinFOVOffset_PC; // 0x514
    float MaxFOVOffset_PC; // 0x518
    char pad_51c[0x4];
    TArray<float> DynamicRanges; // 0x520
    FString CurrentPlatform; // 0x530
    bool InPageTransition; // 0x540
    bool IsLoadingSaveGame; // 0x541
    char pad_542[0x6];
    TArray<FString> MenuTitles; // 0x548
    TArray<void*> Categories; // 0x558
    bool IsInSaveMenu; // 0x568
    char pad_569[0x7];
    FDateTime LastSaveStartTime; // 0x570
    float MinActiveSaveBannerDuration; // 0x578
    int32_t CategoryIndexToGoAfterConfirm; // 0x57c
    ULegend* ParentLegend; // 0x580
    int32_t HoveredNavBarIndex; // 0x588
    char pad_58c[0x4];
    static UUI_BP_FG_SettingsScreen_C* StaticClass();
    void GetAsyncWrapperRenderSize(FVector2D& RenderSize);
    void SetParentLegend(ULegend* Legend);
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, FString CallFunc_Array_Get_Item, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1);
    bool SettingsNeedExitConfirmed0(FString& OutConfirmTitle, FString& OutConfirmDesc, UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UAsyncLoadWrapper* K2Node_DynamicCast_AsAsync_Load_Wrapper, bool K2Node_DynamicCast_bSuccess, USettingsTabWidget* K2Node_DynamicCast_AsSettings_Tab_Widget, bool K2Node_DynamicCast_bSuccess_1);
    void RequestExitFromTab(FString PopupTitle, FString PopupDesc);
    void IsOnKeyMappingTab(bool& IsOnKeyMappingTab, bool& HasUnboundActions, UWidget* CallFunc_GetActiveWidget_ReturnValue, UUI_BP_KeyMapping_C* K2Node_DynamicCast_AsUI_BP_Key_Mapping, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_GetHasAnyUnboundActions_HasAnyUnbound);
    void InitLegend();
    void ChangeKeyboardControlTab();
    void Change_Control_Tab(int32_t Direction, bool& Handled, UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UUI_BP_Settings_GamepadControls_C* K2Node_DynamicCast_AsUI_BP_Settings_Gamepad_Controls, bool K2Node_DynamicCast_bSuccess);
    void DismissConfirmationDialog(bool Accepted, UGraphicsSettingsWidget* K2Node_DynamicCast_AsGraphics_Settings_Widget, bool K2Node_DynamicCast_bSuccess);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, UUIManager* CallFunc_Get_ReturnValue, UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue, UUI_BP_FieldGuide_C* K2Node_DynamicCast_AsUI_BP_Field_Guide, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FString CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle, FString CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc, bool CallFunc_SettingsNeedExitConfirmed_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, int32_t CallFunc_PostEventAtLocation_ReturnValue_3, int32_t CallFunc_PostEventAtLocation_ReturnValue_4, FString CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle_1, FString CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc_1, bool CallFunc_SettingsNeedExitConfirmed_ReturnValue_1, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_GetInMenuTransition_ReturnValue, UTabPageWidget* K2Node_DynamicCast_AsTab_Page_Widget, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Change_Control_Tab_Handled, int32_t CallFunc_PostEventAtLocation_ReturnValue_5, bool CallFunc_Change_Control_Tab_Handled_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32_t CallFunc_ReadStat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9);
    void SetMenuTitle(int32_t PageIndex, FString CallFunc_Array_Get_Item, bool CallFunc_AsyncFindIconTexture2D_ReturnValue);
    void SetCurrentLegend(TArray<FLegendItemData>& CurrentPage);
    void IsOnPc(bool& IsOnPc, bool CallFunc_IsPCPlatform_ReturnValue);
    void ToggleSaveLoadPage(bool HideSaveLoad, bool CallFunc_RemoveChild_ReturnValue);
    void ToggleAcceptGraphicsChangeMode(bool NewAcceptMode, float Duration, bool Temp_bool_Variable, int32_t CallFunc_FCeil_ReturnValue);
    void CategorySwitch(int32_t NewIndex, bool CallFunc_GoToCategory_CategoryChanged, int32_t CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, UWidget* CallFunc_GetActiveWidget_ReturnValue, UAsyncLoadWrapper* K2Node_DynamicCast_AsAsync_Load_Wrapper, bool K2Node_DynamicCast_bSuccess, UTabPageWidget* K2Node_DynamicCast_AsTab_Page_Widget, bool K2Node_DynamicCast_bSuccess_1);
    void DisplaySaveGames(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, TArray<FSaveGameInfo>& CallFunc_GetAllUserEntries_ReturnValue, TArray<FSaveGameInfo>& CallFunc_GetAllAutoEntries_ReturnValue, FSaveGameInfo CallFunc_Array_Get_Item, FSaveGameInfo CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1);
    void OnShowCalibration();
    void OnShowLoadList();
    void BndEvt__AsyncSaveLoad_K2Node_ComponentBoundEvent_3_AsyncWrapperEvent__DelegateSignature(UUserWidget* ChildObject);
    void SetParent(UUserWidget* Parent);
    void OnSaveButtonClicked();
    void BndEvt__UI_BP_FG_SettingsScreen_AsyncConsoleDisplay_K2Node_ComponentBoundEvent_8_AsyncWrapperChildReadyEvent__DelegateSignature(UUserWidget* ChildObject);
    void OnShowCalibration_Console();
    void OnShowHDRCalibration();
    void OnShowHDRCalibration_Console();
    void InEditorPostConstruct();
    void BndEvt__UI_BP_FG_SettingsScreen_AsyncAudio_K2Node_ComponentBoundEvent_10_AsyncWrapperChildReadyEvent__DelegateSignature(UUserWidget* ChildObject);
    void OnRestartFromLastSaveFail();
    void Initialize();
    void Construct();
    void GoToPage(TArray<FString>& DestinationStack);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__KeepFocusOnMe_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ShowLoadSaveResultPopup0(FString ResultMessage, float Duration);
    void BndEvt__page_LoadGame_K2Node_ComponentBoundEvent_2_OnLoadSave__DelegateSignature(FString Filename, int32_t CharacterID);
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void OnShowConfirmDialog(float Duration);
    void BndEvt__UI_BP_FG_SettingsScreen_categoryNavBar_K2Node_ComponentBoundEvent_3_ChangedCategory__DelegateSignature(int32_t NewCategoryIndex);
    void OnLegendItemHoldEnd(ULegendItem* LegendItem, bool HoldWasCompleted);
    void BndEvt__UI_BP_FG_SettingsScreen_UI_BP_SaveMenu_K2Node_ComponentBoundEvent_6_StartStopDelete__DelegateSignature(bool Start, int32_t LegendIndex);
    void BndEvt__UI_BP_FG_SettingsScreen_UI_BP_SaveMenu_K2Node_ComponentBoundEvent_1_StartStopOverwrite__DelegateSignature(bool Start, int32_t LegendIndex);
    void BndEvt__UI_BP_FG_SettingsScreen_UI_BP_SaveMenu_K2Node_ComponentBoundEvent_0_OnGameSaved__DelegateSignature();
    void BndEvt__UI_BP_FG_SettingsScreen_UI_BP_SaveMenu_K2Node_ComponentBoundEvent_4_OnSaveStarted__DelegateSignature();
    void BndEvt__UI_BP_FG_SettingsScreen_UI_BP_SaveMenu_K2Node_ComponentBoundEvent_5_OnSaveFailed__DelegateSignature();
    void BndEvt__AsyncDisplaySettings_K2Node_ComponentBoundEvent_0_AsyncWrapperChildReadyEvent__DelegateSignature(UUserWidget* ChildObject);
    void ConfirmPageUp();
    void ConfirmPageDown();
    void ConfirmBackOut();
    void ExitPopupDismissed(UPopupScreen* Popup, int32_t ResultIndex);
    void LeaveFromPage();
    void ActiveWidgetDisplayable(UUserWidget* ActiveWidget);
    void OnIntroEnded(int32_t IntroType);
    void BlueprintFocusAcquired();
    void BndEvt__UI_BP_FG_SettingsScreen_categoryNavBar_K2Node_ComponentBoundEvent_8_HoveredCategory__DelegateSignature(int32_t ButtonIndex, UIconButtonWidget* CategoryButton);
    void LoadSaveGameFailed(UObject* Caller);
    void ExecuteUbergraph_UI_BP_FG_SettingsScreen(int32_t EntryPoint, UUIManager* CallFunc_GetUIManagerPure_ReturnValue);
}; // Size: 0x590
#pragma pack(pop)
