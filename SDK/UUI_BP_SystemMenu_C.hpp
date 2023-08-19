#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FGeometry.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSaveGameInfo.hpp"
#include "USystemMenuWidget.hpp"
class UCanvasPanel;
class USettingsTabWidget;
class UUI_BP_FG_DetailsPanelBack_C;
class UWidgetAnimation;
class ULegend;
class UUI_BP_AsyncLoadWrapper_C;
class UTabPageWidget;
class UAsyncWidgetSwitcher;
class UButton;
class UPhoenixTextBlock;
class UUI_BP_KeyMapping_C;
class UImage;
class UUI_BP_FG_CategoryNavBar_C;
class UUI_BP_Settings_Calibration_C;
class UUI_BP_Settings_HDRCalibration_C;
class UUI_BP_LegendItem_C;
class UBorder;
class UUserWidget;
class UWidget;
struct FVector2D;
class UAsyncLoadWrapper;
class UUI_BP_Settings_GamepadControls_C;
class UGraphicsSettingsWidget;
class UIconButtonWidget;
class UPhoenixGameSettings;
class ULegendItem;
class UPopupScreen;
#pragma pack(push, 1)
class UUI_BP_SystemMenu_C : public USystemMenuWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x3d0
    UWidgetAnimation* ToggleHDRCalibrationScreen; // 0x3d8
    UWidgetAnimation* ToggleCalibrationScreen; // 0x3e0
    UUI_BP_AsyncLoadWrapper_C* AsyncAccessibility; // 0x3e8
    UUI_BP_AsyncLoadWrapper_C* AsyncAudio; // 0x3f0
    UUI_BP_AsyncLoadWrapper_C* AsyncConsoleDisplay; // 0x3f8
    UUI_BP_AsyncLoadWrapper_C* AsyncDisplay; // 0x400
    UUI_BP_AsyncLoadWrapper_C* AsyncGamepadControls; // 0x408
    UUI_BP_AsyncLoadWrapper_C* AsyncGameplay; // 0x410
    UUI_BP_AsyncLoadWrapper_C* AsyncGraphics; // 0x418
    UUI_BP_AsyncLoadWrapper_C* AsyncKeyboardControls; // 0x420
    UAsyncWidgetSwitcher* AsyncMenuSwitcher; // 0x428
    UUI_BP_AsyncLoadWrapper_C* AsyncUI; // 0x430
    UUI_BP_FG_DetailsPanelBack_C* confirmBack; // 0x438
    UCanvasPanel* ConfirmGraphicsChangesPopup; // 0x440
    UButton* ConfirmPopupClickable; // 0x448
    UImage* ConfirmScreenFade; // 0x450
    UPhoenixTextBlock* GraphicsAcceptCountdownText; // 0x458
    UUI_BP_FG_CategoryNavBar_C* navBar; // 0x460
    UUI_BP_Settings_Calibration_C* page_Calibration; // 0x468
    UUI_BP_Settings_HDRCalibration_C* Page_HDRCalibration; // 0x470
    UPhoenixTextBlock* popupBody; // 0x478
    UUI_BP_LegendItem_C* popupLegendItem_Accept; // 0x480
    UUI_BP_LegendItem_C* popupLegendItem_Cancel; // 0x488
    UPhoenixTextBlock* PopupTitle; // 0x490
    UBorder* settingsBorder; // 0x498
    UImage* SettingsPageIcon; // 0x4a0
    UPhoenixTextBlock* settingsTitle; // 0x4a8
    UUserWidget* MainMenu; // 0x4b0
    int32_t PageIndex; // 0x4b8
    bool isInCalibration; // 0x4bc
    bool IsInHDRCalibration; // 0x4bd
    bool InAcceptGraphicsChangeMode; // 0x4be
    char pad_4bf[0x1];
    float AcceptTimeRemaining; // 0x4c0
    bool RequiresConfirm; // 0x4c4
    char pad_4c5[0x3];
    float MinFOVOffset_Console; // 0x4c8
    float MaxFOVOffset_Console; // 0x4cc
    float MinFOVOffset_PC; // 0x4d0
    float MaxFOVOffset_PC; // 0x4d4
    TArray<float> DynamicRanges; // 0x4d8
    FString CurrentPlatform; // 0x4e8
    bool InPageTransition; // 0x4f8
    char pad_4f9[0x7];
    TArray<FString> MenuTitles; // 0x500
    TArray<void*> Categories; // 0x510
    char pad_520[0x10];
    int32_t CategoryIndexToGoAfterConfirm; // 0x530
    char pad_534[0x14];
    ULegend* ParentLegend; // 0x548
    int32_t HoveredNavBarIndex; // 0x550
    char pad_554[0x4];
    static UUI_BP_SystemMenu_C* StaticClass();
    void GetAsyncWrapperRenderSize(FVector2D& RenderSize);
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, FString CallFunc_Array_Get_Item);
    bool SettingsNeedExitConfirmed0(FString& OutConfirmTitle, FString& OutConfirmDesc, bool CallFunc_Not_PreBool_ReturnValue, UWidget* CallFunc_GetActiveWidget_ReturnValue, UAsyncLoadWrapper* K2Node_DynamicCast_AsAsync_Load_Wrapper, bool K2Node_DynamicCast_bSuccess, USettingsTabWidget* K2Node_DynamicCast_AsSettings_Tab_Widget, bool K2Node_DynamicCast_bSuccess_1);
    void FilterTabsByPlatform(FString Temp_string_Variable);
    void RequestExitFromTab(FString PopupTitle, FString PopupDesc);
    void IsOnKeyMappingTab(bool& IsOnKeyMappingTab, bool& HasUnboundActions, UWidget* CallFunc_GetActiveWidget_ReturnValue, UUI_BP_KeyMapping_C* K2Node_DynamicCast_AsUI_BP_Key_Mapping, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_GetHasAnyUnboundActions_HasAnyUnbound);
    void ChangeKeyboardControlTab();
    void Change_Control_Tab(int32_t Direction, bool& Handled, UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UUI_BP_Settings_GamepadControls_C* K2Node_DynamicCast_AsUI_BP_Settings_Gamepad_Controls, bool K2Node_DynamicCast_bSuccess);
    void DismissConfirmationDialog(bool Accepted, UGraphicsSettingsWidget* K2Node_DynamicCast_AsGraphics_Settings_Widget, bool K2Node_DynamicCast_bSuccess);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FString CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle, FString CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc, bool CallFunc_SettingsNeedExitConfirmed_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, FString CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle_1, FString CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc_1, bool CallFunc_SettingsNeedExitConfirmed_ReturnValue_1, bool CallFunc_Change_Control_Tab_Handled, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_Change_Control_Tab_Handled_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9);
    void SetMenuTitle(int32_t PageIndex, FString CallFunc_Array_Get_Item, bool CallFunc_AsyncFindIconTexture2D_ReturnValue);
    void SetCurrentLegend(TArray<FLegendItemData>& LegendData);
    void IsOnPc(bool& IsOnPc, bool CallFunc_IsPCPlatform_ReturnValue);
    void Toggle_Accept_Graphics_Change_Mode(bool NewAcceptMode, float Duration, bool Temp_bool_Variable, int32_t CallFunc_FCeil_ReturnValue);
    void GoToCategoryPage(int32_t NewPageIndex, bool CallFunc_GoToCategory_CategoryChanged, bool CallFunc_NotEqual_IntInt_ReturnValue);
    void CategorySwitch(int32_t NewIndex, UWidget* CallFunc_GetChildAt_ReturnValue, UAsyncLoadWrapper* K2Node_DynamicCast_AsAsync_Load_Wrapper, bool K2Node_DynamicCast_bSuccess, UTabPageWidget* K2Node_DynamicCast_AsTab_Page_Widget, bool K2Node_DynamicCast_bSuccess_1);
    void DisplaySaveGames(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, TArray<FSaveGameInfo>& CallFunc_GetAllUserEntries_ReturnValue, TArray<FSaveGameInfo>& CallFunc_GetAllAutoEntries_ReturnValue, FSaveGameInfo CallFunc_Array_Get_Item, FSaveGameInfo CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1);
    void InEditorPostConstruct();
    void BndEvt__AsyncDisplaySettings_K2Node_ComponentBoundEvent_0_AsyncWrapperChildReadyEvent__DelegateSignature(UUserWidget* ChildObject);
    void OnShowConfirmDialog(float Duration);
    void OnShowCalibration();
    void BndEvt__UI_BP_SystemMenu_AsyncConsoleDisplay_K2Node_ComponentBoundEvent_1_AsyncWrapperChildReadyEvent__DelegateSignature(UUserWidget* ChildObject);
    void OnShowCalibration_Console();
    void OnShowHDRCalibration();
    void OnShowHDRCalibration_Console();
    void BndEvt__UI_BP_SystemMenu_navBar_K2Node_ComponentBoundEvent_2_HoveredCategory__DelegateSignature(int32_t ButtonIndex, UIconButtonWidget* CategoryButton);
    void Initialize();
    void SetParent(UUserWidget* Parent);
    void Construct();
    void GoToPage(TArray<FString>& DestinationStack);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__KeepFocusOnMe_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void BndEvt__UI_BP_SystemMenu_AsyncGameplay_K2Node_ComponentBoundEvent_2_AsyncWrapperChildReadyEvent__DelegateSignature(UUserWidget* ChildObject);
    void OnLegendItemHoldEnd(ULegendItem* LegendItem, bool HoldWasCompleted);
    void ConfirmPageUp();
    void ConfirmPageDown();
    void ConfirmBackOut();
    void ExitPopupDismissed(UPopupScreen* Popup, int32_t ResultIndex);
    void LeaveFromPage();
    void BndEvt__UI_BP_SystemMenu_navBar_K2Node_ComponentBoundEvent_3_ChangedCategory__DelegateSignature(int32_t NewCategoryIndex);
    void ActiveWidgetDisplayable(UUserWidget* ActiveWidget);
    void OnIntroEnded(int32_t IntroType);
    void BlueprintFocusAcquired();
    void NewLegendRequested(TArray<FLegendItemData>& NewLegend);
    void ExecuteUbergraph_UI_BP_SystemMenu(int32_t EntryPoint);
    void HDRScreenToggled__DelegateSignature(bool IsShown);
    void BackOutPromptConfirmed__DelegateSignature();
}; // Size: 0x558
#pragma pack(pop)
