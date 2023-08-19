#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FGeometry.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSaveGameInfo.hpp"
#include "FVector2D.hpp"
#include "UAsyncLoadWrapper.hpp"
#include "UAsyncWidgetSwitcher.hpp"
#include "UBorder.hpp"
#include "UButton.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UGraphicsSettingsWidget.hpp"
#include "UIconButtonWidget.hpp"
#include "UImage.hpp"
#include "ULegend.hpp"
#include "ULegendItem.hpp"
#include "UPhoenixGameSettings.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPopupScreen.hpp"
#include "USettingsTabWidget.hpp"
#include "USystemMenuWidget.hpp"
#include "UTabPageWidget.hpp"
#include "UUI_BP_AsyncLoadWrapper_C.hpp"
#include "UUI_BP_FG_CategoryNavBar_C.hpp"
#include "UUI_BP_FG_DetailsPanelBack_C.hpp"
#include "UUI_BP_KeyMapping_C.hpp"
#include "UUI_BP_LegendItem_C.hpp"
#include "UUI_BP_Settings_Calibration_C.hpp"
#include "UUI_BP_Settings_GamepadControls_C.hpp"
#include "UUI_BP_Settings_HDRCalibration_C.hpp"
#include "UUI_BP_SystemMenu_C.hpp"
#include "UUserWidget.hpp"
#include "UWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_SystemMenu_C::ConfirmPageDown() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.ConfirmPageDown"));
    struct Params_ConfirmPageDown {
    }; // Size: 0x0
    Params_ConfirmPageDown params{};
    ProcessEvent(func, &params);
}
bool UUI_BP_SystemMenu_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FString CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle, FString CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc, bool CallFunc_SettingsNeedExitConfirmed_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, FString CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle_1, FString CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc_1, bool CallFunc_SettingsNeedExitConfirmed_ReturnValue_1, bool CallFunc_Change_Control_Tab_Handled, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_Change_Control_Tab_Handled_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        char pad_3[0x1];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x9
        char pad_a[0x6];
        FString CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle; // 0x10
        FString CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc; // 0x20
        bool CallFunc_SettingsNeedExitConfirmed_ReturnValue; // 0x30
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x31
        char pad_32[0x6];
        FString CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle_1; // 0x38
        FString CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc_1; // 0x48
        bool CallFunc_SettingsNeedExitConfirmed_ReturnValue_1; // 0x58
        bool CallFunc_Change_Control_Tab_Handled; // 0x59
        char pad_5a[0x2];
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x5c
        bool CallFunc_Change_Control_Tab_Handled_1; // 0x60
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0x61
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0x62
        bool CallFunc_Not_PreBool_ReturnValue; // 0x63
        bool CallFunc_Not_PreBool_ReturnValue_1; // 0x64
        bool CallFunc_BooleanOR_ReturnValue; // 0x65
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_5; // 0x66
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_6; // 0x67
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_7; // 0x68
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_8; // 0x69
        char pad_6a[0x6];
        UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue; // 0x70
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_9; // 0x78
    }; // Size: 0x79
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle = (FString)CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle;
    params.CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc = (FString)CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc;
    params.CallFunc_SettingsNeedExitConfirmed_ReturnValue = (bool)CallFunc_SettingsNeedExitConfirmed_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle_1 = (FString)CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle_1;
    params.CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc_1 = (FString)CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc_1;
    params.CallFunc_SettingsNeedExitConfirmed_ReturnValue_1 = (bool)CallFunc_SettingsNeedExitConfirmed_ReturnValue_1;
    params.CallFunc_Change_Control_Tab_Handled = (bool)CallFunc_Change_Control_Tab_Handled;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_Change_Control_Tab_Handled_1 = (bool)CallFunc_Change_Control_Tab_Handled_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue_1 = (bool)CallFunc_Not_PreBool_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_5;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_6;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_7;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_8 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_8;
    params.CallFunc_GetPhoenixGameSettings_ReturnValue = (UPhoenixGameSettings*)CallFunc_GetPhoenixGameSettings_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_9 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_9;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FString> UUI_BP_SystemMenu_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, FString CallFunc_Array_Get_Item) {}
void UUI_BP_SystemMenu_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
UUI_BP_SystemMenu_C* UUI_BP_SystemMenu_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C");
    return (UUI_BP_SystemMenu_C*)res;
}
void UUI_BP_SystemMenu_C::GetAsyncWrapperRenderSize(FVector2D& RenderSize) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.GetAsyncWrapperRenderSize"));
    struct Params_GetAsyncWrapperRenderSize {
        FVector2D RenderSize; // 0x0
    }; // Size: 0x8
    Params_GetAsyncWrapperRenderSize params{};
    params.RenderSize = (FVector2D)RenderSize;
    ProcessEvent(func, &params);
    RenderSize = params.RenderSize;
}
bool UUI_BP_SystemMenu_C::SettingsNeedExitConfirmed0(FString& OutConfirmTitle, FString& OutConfirmDesc, bool CallFunc_Not_PreBool_ReturnValue, UWidget* CallFunc_GetActiveWidget_ReturnValue, UAsyncLoadWrapper* K2Node_DynamicCast_AsAsync_Load_Wrapper, bool K2Node_DynamicCast_bSuccess, USettingsTabWidget* K2Node_DynamicCast_AsSettings_Tab_Widget, bool K2Node_DynamicCast_bSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.SettingsNeedExitConfirmed"));
    struct Params_SettingsNeedExitConfirmed {
        FString OutConfirmTitle; // 0x0
        FString OutConfirmDesc; // 0x10
        bool ReturnValue; // 0x20
        bool CallFunc_Not_PreBool_ReturnValue; // 0x21
        char pad_22[0x6];
        UWidget* CallFunc_GetActiveWidget_ReturnValue; // 0x28
        UAsyncLoadWrapper* K2Node_DynamicCast_AsAsync_Load_Wrapper; // 0x30
        bool K2Node_DynamicCast_bSuccess; // 0x38
        char pad_39[0x7];
        USettingsTabWidget* K2Node_DynamicCast_AsSettings_Tab_Widget; // 0x40
        bool K2Node_DynamicCast_bSuccess_1; // 0x48
    }; // Size: 0x49
    Params_SettingsNeedExitConfirmed params{};
    params.OutConfirmTitle = (FString)OutConfirmTitle;
    params.OutConfirmDesc = (FString)OutConfirmDesc;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_GetActiveWidget_ReturnValue = (UWidget*)CallFunc_GetActiveWidget_ReturnValue;
    params.K2Node_DynamicCast_AsAsync_Load_Wrapper = (UAsyncLoadWrapper*)K2Node_DynamicCast_AsAsync_Load_Wrapper;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_DynamicCast_AsSettings_Tab_Widget = (USettingsTabWidget*)K2Node_DynamicCast_AsSettings_Tab_Widget;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    ProcessEvent(func, &params);
    OutConfirmTitle = params.OutConfirmTitle;
    OutConfirmDesc = params.OutConfirmDesc;
    return (bool)params.ReturnValue;
}
void UUI_BP_SystemMenu_C::IsOnKeyMappingTab(bool& IsOnKeyMappingTab, bool& HasUnboundActions, UWidget* CallFunc_GetActiveWidget_ReturnValue, UUI_BP_KeyMapping_C* K2Node_DynamicCast_AsUI_BP_Key_Mapping, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_GetHasAnyUnboundActions_HasAnyUnbound) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.IsOnKeyMappingTab"));
    struct Params_IsOnKeyMappingTab {
        bool IsOnKeyMappingTab; // 0x0
        bool HasUnboundActions; // 0x1
        char pad_2[0x6];
        UWidget* CallFunc_GetActiveWidget_ReturnValue; // 0x8
        UUI_BP_KeyMapping_C* K2Node_DynamicCast_AsUI_BP_Key_Mapping; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x19
        bool CallFunc_GetHasAnyUnboundActions_HasAnyUnbound; // 0x1a
    }; // Size: 0x1b
    Params_IsOnKeyMappingTab params{};
    params.IsOnKeyMappingTab = (bool)IsOnKeyMappingTab;
    params.HasUnboundActions = (bool)HasUnboundActions;
    params.CallFunc_GetActiveWidget_ReturnValue = (UWidget*)CallFunc_GetActiveWidget_ReturnValue;
    params.K2Node_DynamicCast_AsUI_BP_Key_Mapping = (UUI_BP_KeyMapping_C*)K2Node_DynamicCast_AsUI_BP_Key_Mapping;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    params.CallFunc_GetHasAnyUnboundActions_HasAnyUnbound = (bool)CallFunc_GetHasAnyUnboundActions_HasAnyUnbound;
    ProcessEvent(func, &params);
    IsOnKeyMappingTab = params.IsOnKeyMappingTab;
    HasUnboundActions = params.HasUnboundActions;
}
void UUI_BP_SystemMenu_C::BndEvt__AsyncDisplaySettings_K2Node_ComponentBoundEvent_0_AsyncWrapperChildReadyEvent__DelegateSignature(UUserWidget* ChildObject) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.BndEvt__AsyncDisplaySettings_K2Node_ComponentBoundEvent_0_AsyncWrapperChildReadyEvent__DelegateSignature"));
    struct Params_BndEvt__AsyncDisplaySettings_K2Node_ComponentBoundEvent_0_AsyncWrapperChildReadyEvent__DelegateSignature {
        UUserWidget* ChildObject; // 0x0
    }; // Size: 0x8
    Params_BndEvt__AsyncDisplaySettings_K2Node_ComponentBoundEvent_0_AsyncWrapperChildReadyEvent__DelegateSignature params{};
    params.ChildObject = (UUserWidget*)ChildObject;
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::ChangeKeyboardControlTab() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.ChangeKeyboardControlTab"));
    struct Params_ChangeKeyboardControlTab {
    }; // Size: 0x0
    Params_ChangeKeyboardControlTab params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::RequestExitFromTab(FString PopupTitle, FString PopupDesc) {}
void UUI_BP_SystemMenu_C::OnShowHDRCalibration() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.OnShowHDRCalibration"));
    struct Params_OnShowHDRCalibration {
    }; // Size: 0x0
    Params_OnShowHDRCalibration params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::FilterTabsByPlatform(FString Temp_string_Variable) {}
void UUI_BP_SystemMenu_C::Change_Control_Tab(int32_t Direction, bool& Handled, UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UUI_BP_Settings_GamepadControls_C* K2Node_DynamicCast_AsUI_BP_Settings_Gamepad_Controls, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.Change Control Tab"));
    struct Params_Change_Control_Tab {
        int32_t Direction; // 0x0
        bool Handled; // 0x4
        char pad_5[0x3];
        UWidget* CallFunc_GetActiveWidget_ReturnValue; // 0x8
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x10
        char pad_11[0x7];
        UUI_BP_Settings_GamepadControls_C* K2Node_DynamicCast_AsUI_BP_Settings_Gamepad_Controls; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
    }; // Size: 0x21
    Params_Change_Control_Tab params{};
    params.Direction = (int32_t)Direction;
    params.Handled = (bool)Handled;
    params.CallFunc_GetActiveWidget_ReturnValue = (UWidget*)CallFunc_GetActiveWidget_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    params.K2Node_DynamicCast_AsUI_BP_Settings_Gamepad_Controls = (UUI_BP_Settings_GamepadControls_C*)K2Node_DynamicCast_AsUI_BP_Settings_Gamepad_Controls;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
    Handled = params.Handled;
}
void UUI_BP_SystemMenu_C::SetMenuTitle(int32_t PageIndex, FString CallFunc_Array_Get_Item, bool CallFunc_AsyncFindIconTexture2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.SetMenuTitle"));
    struct Params_SetMenuTitle {
        int32_t PageIndex; // 0x0
        char pad_4[0x4];
        FString CallFunc_Array_Get_Item; // 0x8
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x18
    }; // Size: 0x19
    Params_SetMenuTitle params{};
    params.PageIndex = (int32_t)PageIndex;
    params.CallFunc_Array_Get_Item = (FString)CallFunc_Array_Get_Item;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::DismissConfirmationDialog(bool Accepted, UGraphicsSettingsWidget* K2Node_DynamicCast_AsGraphics_Settings_Widget, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.DismissConfirmationDialog"));
    struct Params_DismissConfirmationDialog {
        bool Accepted; // 0x0
        char pad_1[0x7];
        UGraphicsSettingsWidget* K2Node_DynamicCast_AsGraphics_Settings_Widget; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
    }; // Size: 0x11
    Params_DismissConfirmationDialog params{};
    params.Accepted = (bool)Accepted;
    params.K2Node_DynamicCast_AsGraphics_Settings_Widget = (UGraphicsSettingsWidget*)K2Node_DynamicCast_AsGraphics_Settings_Widget;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::SetCurrentLegend(TArray<FLegendItemData>& LegendData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.SetCurrentLegend"));
    struct Params_SetCurrentLegend {
        TArray<FLegendItemData> LegendData; // 0x0
    }; // Size: 0x10
    Params_SetCurrentLegend params{};
    params.LegendData = (TArray<FLegendItemData>)LegendData;
    ProcessEvent(func, &params);
    LegendData = params.LegendData;
}
void UUI_BP_SystemMenu_C::IsOnPc(bool& IsOnPc, bool CallFunc_IsPCPlatform_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.IsOnPc"));
    struct Params_IsOnPc {
        bool IsOnPc; // 0x0
        bool CallFunc_IsPCPlatform_ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsOnPc params{};
    params.IsOnPc = (bool)IsOnPc;
    params.CallFunc_IsPCPlatform_ReturnValue = (bool)CallFunc_IsPCPlatform_ReturnValue;
    ProcessEvent(func, &params);
    IsOnPc = params.IsOnPc;
}
void UUI_BP_SystemMenu_C::LeaveFromPage() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.LeaveFromPage"));
    struct Params_LeaveFromPage {
    }; // Size: 0x0
    Params_LeaveFromPage params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::Toggle_Accept_Graphics_Change_Mode(bool NewAcceptMode, float Duration, bool Temp_bool_Variable, int32_t CallFunc_FCeil_ReturnValue) {}
void UUI_BP_SystemMenu_C::GoToCategoryPage(int32_t NewPageIndex, bool CallFunc_GoToCategory_CategoryChanged, bool CallFunc_NotEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.GoToCategoryPage"));
    struct Params_GoToCategoryPage {
        int32_t NewPageIndex; // 0x0
        bool CallFunc_GoToCategory_CategoryChanged; // 0x4
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0x5
    }; // Size: 0x6
    Params_GoToCategoryPage params{};
    params.NewPageIndex = (int32_t)NewPageIndex;
    params.CallFunc_GoToCategory_CategoryChanged = (bool)CallFunc_GoToCategory_CategoryChanged;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::CategorySwitch(int32_t NewIndex, UWidget* CallFunc_GetChildAt_ReturnValue, UAsyncLoadWrapper* K2Node_DynamicCast_AsAsync_Load_Wrapper, bool K2Node_DynamicCast_bSuccess, UTabPageWidget* K2Node_DynamicCast_AsTab_Page_Widget, bool K2Node_DynamicCast_bSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.CategorySwitch"));
    struct Params_CategorySwitch {
        int32_t NewIndex; // 0x0
        char pad_4[0x4];
        UWidget* CallFunc_GetChildAt_ReturnValue; // 0x8
        UAsyncLoadWrapper* K2Node_DynamicCast_AsAsync_Load_Wrapper; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x7];
        UTabPageWidget* K2Node_DynamicCast_AsTab_Page_Widget; // 0x20
        bool K2Node_DynamicCast_bSuccess_1; // 0x28
    }; // Size: 0x29
    Params_CategorySwitch params{};
    params.NewIndex = (int32_t)NewIndex;
    params.CallFunc_GetChildAt_ReturnValue = (UWidget*)CallFunc_GetChildAt_ReturnValue;
    params.K2Node_DynamicCast_AsAsync_Load_Wrapper = (UAsyncLoadWrapper*)K2Node_DynamicCast_AsAsync_Load_Wrapper;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_DynamicCast_AsTab_Page_Widget = (UTabPageWidget*)K2Node_DynamicCast_AsTab_Page_Widget;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::ConfirmPageUp() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.ConfirmPageUp"));
    struct Params_ConfirmPageUp {
    }; // Size: 0x0
    Params_ConfirmPageUp params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::DisplaySaveGames(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, TArray<FSaveGameInfo>& CallFunc_GetAllUserEntries_ReturnValue, TArray<FSaveGameInfo>& CallFunc_GetAllAutoEntries_ReturnValue, FSaveGameInfo CallFunc_Array_Get_Item, FSaveGameInfo CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.DisplaySaveGames"));
    struct Params_DisplaySaveGames {
        int32_t Temp_int_Loop_Counter_Variable; // 0x0
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x4
        int32_t Temp_int_Array_Index_Variable; // 0x8
        int32_t Temp_int_Array_Index_Variable_1; // 0xc
        TArray<FSaveGameInfo> CallFunc_GetAllUserEntries_ReturnValue; // 0x10
        TArray<FSaveGameInfo> CallFunc_GetAllAutoEntries_ReturnValue; // 0x20
        FSaveGameInfo CallFunc_Array_Get_Item; // 0x30
        FSaveGameInfo CallFunc_Array_Get_Item_1; // 0xa8
        int32_t CallFunc_Array_Length_ReturnValue; // 0x120
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x124
        bool CallFunc_Less_IntInt_ReturnValue; // 0x128
        char pad_129[0x3];
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x12c
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x130
        char pad_131[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x134
    }; // Size: 0x138
    Params_DisplaySaveGames params{};
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_GetAllUserEntries_ReturnValue = (TArray<FSaveGameInfo>)CallFunc_GetAllUserEntries_ReturnValue;
    params.CallFunc_GetAllAutoEntries_ReturnValue = (TArray<FSaveGameInfo>)CallFunc_GetAllAutoEntries_ReturnValue;
    params.CallFunc_Array_Get_Item = (FSaveGameInfo)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Get_Item_1 = (FSaveGameInfo)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    ProcessEvent(func, &params);
    CallFunc_GetAllAutoEntries_ReturnValue = params.CallFunc_GetAllAutoEntries_ReturnValue;
    CallFunc_GetAllUserEntries_ReturnValue = params.CallFunc_GetAllUserEntries_ReturnValue;
}
void UUI_BP_SystemMenu_C::InEditorPostConstruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.InEditorPostConstruct"));
    struct Params_InEditorPostConstruct {
    }; // Size: 0x0
    Params_InEditorPostConstruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::OnShowCalibration() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.OnShowCalibration"));
    struct Params_OnShowCalibration {
    }; // Size: 0x0
    Params_OnShowCalibration params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::OnShowConfirmDialog(float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.OnShowConfirmDialog"));
    struct Params_OnShowConfirmDialog {
        float Duration; // 0x0
    }; // Size: 0x4
    Params_OnShowConfirmDialog params{};
    params.Duration = (float)Duration;
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::BndEvt__UI_BP_SystemMenu_navBar_K2Node_ComponentBoundEvent_3_ChangedCategory__DelegateSignature(int32_t NewCategoryIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.BndEvt__UI_BP_SystemMenu_navBar_K2Node_ComponentBoundEvent_3_ChangedCategory__DelegateSignature"));
    struct Params_BndEvt__UI_BP_SystemMenu_navBar_K2Node_ComponentBoundEvent_3_ChangedCategory__DelegateSignature {
        int32_t NewCategoryIndex; // 0x0
    }; // Size: 0x4
    Params_BndEvt__UI_BP_SystemMenu_navBar_K2Node_ComponentBoundEvent_3_ChangedCategory__DelegateSignature params{};
    params.NewCategoryIndex = (int32_t)NewCategoryIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::ExitPopupDismissed(UPopupScreen* Popup, int32_t ResultIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.ExitPopupDismissed"));
    struct Params_ExitPopupDismissed {
        UPopupScreen* Popup; // 0x0
        int32_t ResultIndex; // 0x8
    }; // Size: 0xc
    Params_ExitPopupDismissed params{};
    params.Popup = (UPopupScreen*)Popup;
    params.ResultIndex = (int32_t)ResultIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::OnShowHDRCalibration_Console() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.OnShowHDRCalibration_Console"));
    struct Params_OnShowHDRCalibration_Console {
    }; // Size: 0x0
    Params_OnShowHDRCalibration_Console params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::BndEvt__UI_BP_SystemMenu_AsyncConsoleDisplay_K2Node_ComponentBoundEvent_1_AsyncWrapperChildReadyEvent__DelegateSignature(UUserWidget* ChildObject) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.BndEvt__UI_BP_SystemMenu_AsyncConsoleDisplay_K2Node_ComponentBoundEvent_1_AsyncWrapperChildReadyEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_SystemMenu_AsyncConsoleDisplay_K2Node_ComponentBoundEvent_1_AsyncWrapperChildReadyEvent__DelegateSignature {
        UUserWidget* ChildObject; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_SystemMenu_AsyncConsoleDisplay_K2Node_ComponentBoundEvent_1_AsyncWrapperChildReadyEvent__DelegateSignature params{};
    params.ChildObject = (UUserWidget*)ChildObject;
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::OnShowCalibration_Console() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.OnShowCalibration_Console"));
    struct Params_OnShowCalibration_Console {
    }; // Size: 0x0
    Params_OnShowCalibration_Console params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::BlueprintFocusAcquired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.BlueprintFocusAcquired"));
    struct Params_BlueprintFocusAcquired {
    }; // Size: 0x0
    Params_BlueprintFocusAcquired params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::BndEvt__UI_BP_SystemMenu_navBar_K2Node_ComponentBoundEvent_2_HoveredCategory__DelegateSignature(int32_t ButtonIndex, UIconButtonWidget* CategoryButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.BndEvt__UI_BP_SystemMenu_navBar_K2Node_ComponentBoundEvent_2_HoveredCategory__DelegateSignature"));
    struct Params_BndEvt__UI_BP_SystemMenu_navBar_K2Node_ComponentBoundEvent_2_HoveredCategory__DelegateSignature {
        int32_t ButtonIndex; // 0x0
        char pad_4[0x4];
        UIconButtonWidget* CategoryButton; // 0x8
    }; // Size: 0x10
    Params_BndEvt__UI_BP_SystemMenu_navBar_K2Node_ComponentBoundEvent_2_HoveredCategory__DelegateSignature params{};
    params.ButtonIndex = (int32_t)ButtonIndex;
    params.CategoryButton = (UIconButtonWidget*)CategoryButton;
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::Initialize() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.Initialize"));
    struct Params_Initialize {
    }; // Size: 0x0
    Params_Initialize params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::SetParent(UUserWidget* Parent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.SetParent"));
    struct Params_SetParent {
        UUserWidget* Parent; // 0x0
    }; // Size: 0x8
    Params_SetParent params{};
    params.Parent = (UUserWidget*)Parent;
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::ExecuteUbergraph_UI_BP_SystemMenu(int32_t EntryPoint) {}
void UUI_BP_SystemMenu_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::GoToPage(TArray<FString>& DestinationStack) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.GoToPage"));
    struct Params_GoToPage {
        TArray<FString> DestinationStack; // 0x0
    }; // Size: 0x10
    Params_GoToPage params{};
    params.DestinationStack = (TArray<FString>)DestinationStack;
    ProcessEvent(func, &params);
    DestinationStack = params.DestinationStack;
}
void UUI_BP_SystemMenu_C::ActiveWidgetDisplayable(UUserWidget* ActiveWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.ActiveWidgetDisplayable"));
    struct Params_ActiveWidgetDisplayable {
        UUserWidget* ActiveWidget; // 0x0
    }; // Size: 0x8
    Params_ActiveWidgetDisplayable params{};
    params.ActiveWidget = (UUserWidget*)ActiveWidget;
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::BndEvt__KeepFocusOnMe_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.BndEvt__KeepFocusOnMe_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__KeepFocusOnMe_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__KeepFocusOnMe_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::BndEvt__UI_BP_SystemMenu_AsyncGameplay_K2Node_ComponentBoundEvent_2_AsyncWrapperChildReadyEvent__DelegateSignature(UUserWidget* ChildObject) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.BndEvt__UI_BP_SystemMenu_AsyncGameplay_K2Node_ComponentBoundEvent_2_AsyncWrapperChildReadyEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_SystemMenu_AsyncGameplay_K2Node_ComponentBoundEvent_2_AsyncWrapperChildReadyEvent__DelegateSignature {
        UUserWidget* ChildObject; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_SystemMenu_AsyncGameplay_K2Node_ComponentBoundEvent_2_AsyncWrapperChildReadyEvent__DelegateSignature params{};
    params.ChildObject = (UUserWidget*)ChildObject;
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::OnIntroEnded(int32_t IntroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.OnIntroEnded"));
    struct Params_OnIntroEnded {
        int32_t IntroType; // 0x0
    }; // Size: 0x4
    Params_OnIntroEnded params{};
    params.IntroType = (int32_t)IntroType;
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::OnLegendItemHoldEnd(ULegendItem* LegendItem, bool HoldWasCompleted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.OnLegendItemHoldEnd"));
    struct Params_OnLegendItemHoldEnd {
        ULegendItem* LegendItem; // 0x0
        bool HoldWasCompleted; // 0x8
    }; // Size: 0x9
    Params_OnLegendItemHoldEnd params{};
    params.LegendItem = (ULegendItem*)LegendItem;
    params.HoldWasCompleted = (bool)HoldWasCompleted;
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::ConfirmBackOut() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.ConfirmBackOut"));
    struct Params_ConfirmBackOut {
    }; // Size: 0x0
    Params_ConfirmBackOut params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::NewLegendRequested(TArray<FLegendItemData>& NewLegend) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.NewLegendRequested"));
    struct Params_NewLegendRequested {
        TArray<FLegendItemData> NewLegend; // 0x0
    }; // Size: 0x10
    Params_NewLegendRequested params{};
    params.NewLegend = (TArray<FLegendItemData>)NewLegend;
    ProcessEvent(func, &params);
    NewLegend = params.NewLegend;
}
void UUI_BP_SystemMenu_C::HDRScreenToggled__DelegateSignature(bool IsShown) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.HDRScreenToggled__DelegateSignature"));
    struct Params_HDRScreenToggled__DelegateSignature {
        bool IsShown; // 0x0
    }; // Size: 0x1
    Params_HDRScreenToggled__DelegateSignature params{};
    params.IsShown = (bool)IsShown;
    ProcessEvent(func, &params);
}
void UUI_BP_SystemMenu_C::BackOutPromptConfirmed__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SystemMenu.UI_BP_SystemMenu_C.BackOutPromptConfirmed__DelegateSignature"));
    struct Params_BackOutPromptConfirmed__DelegateSignature {
    }; // Size: 0x0
    Params_BackOutPromptConfirmed__DelegateSignature params{};
    ProcessEvent(func, &params);
}
