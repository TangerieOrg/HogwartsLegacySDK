#include "ABiped_Player.hpp"
#include "EFieldGuideExitReasons.hpp"
#include "EInputDeviceUsed.hpp"
#include "EInputEvent.hpp"
#include "ENotificationCategory.hpp"
#include "EPauseMenuPage.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FFormatArgumentData.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAsyncLoadWrapper.hpp"
#include "UAsyncWidgetSwitcher.hpp"
#include "UButton.hpp"
#include "UCanvasPanel.hpp"
#include "UFieldGuideMenu.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UImage.hpp"
#include "ULegendItem.hpp"
#include "UMapSubSystem.hpp"
#include "UObject.hpp"
#include "UPhoenixUserWidget.hpp"
#include "USystemMenuWidget.hpp"
#include "UTabPageWidget.hpp"
#include "UTutorialSystem.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_AsyncLoadWrapper_C.hpp"
#include "UUI_BP_FG_Index_C.hpp"
#include "UUI_BP_FG_InventoryScreen_C.hpp"
#include "UUI_BP_FG_SettingsScreen_C.hpp"
#include "UUI_BP_FieldGuide_C.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UUI_BP_NavBarButton_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_Async_FG_Collections_K2Node_ComponentBoundEvent_7_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_Async_FG_Collections_K2Node_ComponentBoundEvent_7_AsyncWrapperClassLoadEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_Async_FG_Collections_K2Node_ComponentBoundEvent_7_AsyncWrapperClassLoadEvent__DelegateSignature {
        UAsyncLoadWrapper* SelfReference; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_Async_FG_Collections_K2Node_ComponentBoundEvent_7_AsyncWrapperClassLoadEvent__DelegateSignature params{};
    params.SelfReference = (UAsyncLoadWrapper*)SelfReference;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_FieldGuide_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.GatherMenuReaderStrings"));
    struct Params_GatherMenuReaderStrings {
        int32_t DepthLevel; // 0x0
        char pad_4[0x4];
        TArray<FString> ReturnValue; // 0x8
        TArray<FString> TempGatheredStrings; // 0x18
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue; // 0x28
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue_1; // 0x38
    }; // Size: 0x48
    Params_GatherMenuReaderStrings params{};
    params.DepthLevel = (int32_t)DepthLevel;
    params.TempGatheredStrings = (TArray<FString>)TempGatheredStrings;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue_1 = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue_1;
    ProcessEvent(func, &params);
    CallFunc_GatherMenuReaderStrings_ReturnValue = params.CallFunc_GatherMenuReaderStrings_ReturnValue;
    CallFunc_GatherMenuReaderStrings_ReturnValue_1 = params.CallFunc_GatherMenuReaderStrings_ReturnValue_1;
    return (TArray<FString>)params.ReturnValue;
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Inventory_K2Node_ComponentBoundEvent_0_OnHoveredEventDispatcher__DelegateSignature(UUI_BP_NavBarButton_C* Me) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Inventory_K2Node_ComponentBoundEvent_0_OnHoveredEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Inventory_K2Node_ComponentBoundEvent_0_OnHoveredEventDispatcher__DelegateSignature {
        UUI_BP_NavBarButton_C* Me; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_btn_Inventory_K2Node_ComponentBoundEvent_0_OnHoveredEventDispatcher__DelegateSignature params{};
    params.Me = (UUI_BP_NavBarButton_C*)Me;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::ShouldSkipPage(UUI_BP_AsyncLoadWrapper_C* MenuPage, bool& ShouldSkip, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, EPauseMenuPage CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue, bool CallFunc_IsMenuTabHidden_ReturnValue, bool CallFunc_IsDungeon_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.ShouldSkipPage"));
    struct Params_ShouldSkipPage {
        UUI_BP_AsyncLoadWrapper_C* MenuPage; // 0x0
        bool ShouldSkip; // 0x8
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x9
        EPauseMenuPage CallFunc_Map_Find_Value; // 0xa
        bool CallFunc_Map_Find_ReturnValue; // 0xb
        char pad_c[0x4];
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x10
        UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue; // 0x18
        bool CallFunc_IsMenuTabHidden_ReturnValue; // 0x20
        bool CallFunc_IsDungeon_ReturnValue; // 0x21
        bool CallFunc_BooleanAND_ReturnValue; // 0x22
        bool CallFunc_BooleanOR_ReturnValue; // 0x23
    }; // Size: 0x24
    Params_ShouldSkipPage params{};
    params.MenuPage = (UUI_BP_AsyncLoadWrapper_C*)MenuPage;
    params.ShouldSkip = (bool)ShouldSkip;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    params.CallFunc_Map_Find_Value = (EPauseMenuPage)CallFunc_Map_Find_Value;
    params.CallFunc_Map_Find_ReturnValue = (bool)CallFunc_Map_Find_ReturnValue;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_GetMapSubSystem_ReturnValue = (UMapSubSystem*)CallFunc_GetMapSubSystem_ReturnValue;
    params.CallFunc_IsMenuTabHidden_ReturnValue = (bool)CallFunc_IsMenuTabHidden_ReturnValue;
    params.CallFunc_IsDungeon_ReturnValue = (bool)CallFunc_IsDungeon_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
    ShouldSkip = params.ShouldSkip;
}
UUI_BP_FieldGuide_C* UUI_BP_FieldGuide_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C");
    return (UUI_BP_FieldGuide_C*)res;
}
void UUI_BP_FieldGuide_C::LegendHoldComplete(ULegendItem* LegendItem, bool HoldCompleted, UWidget* CallFunc_GetActiveWidget_ReturnValue, UUI_BP_AsyncLoadWrapper_C* K2Node_DynamicCast_AsUI_BP_Async_Load_Wrapper, bool K2Node_DynamicCast_bSuccess, UTabPageWidget* K2Node_DynamicCast_AsTab_Page_Widget, bool K2Node_DynamicCast_bSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.LegendHoldComplete"));
    struct Params_LegendHoldComplete {
        ULegendItem* LegendItem; // 0x0
        bool HoldCompleted; // 0x8
        char pad_9[0x7];
        UWidget* CallFunc_GetActiveWidget_ReturnValue; // 0x10
        UUI_BP_AsyncLoadWrapper_C* K2Node_DynamicCast_AsUI_BP_Async_Load_Wrapper; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x7];
        UTabPageWidget* K2Node_DynamicCast_AsTab_Page_Widget; // 0x28
        bool K2Node_DynamicCast_bSuccess_1; // 0x30
    }; // Size: 0x31
    Params_LegendHoldComplete params{};
    params.LegendItem = (ULegendItem*)LegendItem;
    params.HoldCompleted = (bool)HoldCompleted;
    params.CallFunc_GetActiveWidget_ReturnValue = (UWidget*)CallFunc_GetActiveWidget_ReturnValue;
    params.K2Node_DynamicCast_AsUI_BP_Async_Load_Wrapper = (UUI_BP_AsyncLoadWrapper_C*)K2Node_DynamicCast_AsUI_BP_Async_Load_Wrapper;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_DynamicCast_AsTab_Page_Widget = (UTabPageWidget*)K2Node_DynamicCast_AsTab_Page_Widget;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::IsInspectableShown(bool& IsShown, UWidget* CallFunc_GetActiveWidget_ReturnValue, UUI_BP_FG_InventoryScreen_C* K2Node_DynamicCast_AsUI_BP_FG_Inventory_Screen, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.IsInspectableShown"));
    struct Params_IsInspectableShown {
        bool IsShown; // 0x0
        char pad_1[0x7];
        UWidget* CallFunc_GetActiveWidget_ReturnValue; // 0x8
        UUI_BP_FG_InventoryScreen_C* K2Node_DynamicCast_AsUI_BP_FG_Inventory_Screen; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_IsInspectableShown params{};
    params.IsShown = (bool)IsShown;
    params.CallFunc_GetActiveWidget_ReturnValue = (UWidget*)CallFunc_GetActiveWidget_ReturnValue;
    params.K2Node_DynamicCast_AsUI_BP_FG_Inventory_Screen = (UUI_BP_FG_InventoryScreen_C*)K2Node_DynamicCast_AsUI_BP_FG_Inventory_Screen;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    ProcessEvent(func, &params);
    IsShown = params.IsShown;
}
void UUI_BP_FieldGuide_C::TerminateLingeringTutorials(UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_ForceCompleteTutorial_ReturnValue, bool CallFunc_ForceCompleteTutorial_ReturnValue_1, bool CallFunc_ForceCompleteTutorial_ReturnValue_2, bool CallFunc_ForceCompleteTutorial_ReturnValue_3, bool CallFunc_ForceCompleteTutorial_ReturnValue_4) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.TerminateLingeringTutorials"));
    struct Params_TerminateLingeringTutorials {
        UTutorialSystem* CallFunc_Get_ReturnValue; // 0x0
        bool CallFunc_ForceCompleteTutorial_ReturnValue; // 0x8
        bool CallFunc_ForceCompleteTutorial_ReturnValue_1; // 0x9
        bool CallFunc_ForceCompleteTutorial_ReturnValue_2; // 0xa
        bool CallFunc_ForceCompleteTutorial_ReturnValue_3; // 0xb
        bool CallFunc_ForceCompleteTutorial_ReturnValue_4; // 0xc
    }; // Size: 0xd
    Params_TerminateLingeringTutorials params{};
    params.CallFunc_Get_ReturnValue = (UTutorialSystem*)CallFunc_Get_ReturnValue;
    params.CallFunc_ForceCompleteTutorial_ReturnValue = (bool)CallFunc_ForceCompleteTutorial_ReturnValue;
    params.CallFunc_ForceCompleteTutorial_ReturnValue_1 = (bool)CallFunc_ForceCompleteTutorial_ReturnValue_1;
    params.CallFunc_ForceCompleteTutorial_ReturnValue_2 = (bool)CallFunc_ForceCompleteTutorial_ReturnValue_2;
    params.CallFunc_ForceCompleteTutorial_ReturnValue_3 = (bool)CallFunc_ForceCompleteTutorial_ReturnValue_3;
    params.CallFunc_ForceCompleteTutorial_ReturnValue_4 = (bool)CallFunc_ForceCompleteTutorial_ReturnValue_4;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Compendium_K2Node_ComponentBoundEvent_19_OnClickedEventDispatcher__DelegateSignature(UUI_BP_NavBarButton_C* Me) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Compendium_K2Node_ComponentBoundEvent_19_OnClickedEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Compendium_K2Node_ComponentBoundEvent_19_OnClickedEventDispatcher__DelegateSignature {
        UUI_BP_NavBarButton_C* Me; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_btn_Compendium_K2Node_ComponentBoundEvent_19_OnClickedEventDispatcher__DelegateSignature params{};
    params.Me = (UUI_BP_NavBarButton_C*)Me;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Missions_K2Node_ComponentBoundEvent_9_OnHoveredEventDispatcher__DelegateSignature(UUI_BP_NavBarButton_C* Me) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Missions_K2Node_ComponentBoundEvent_9_OnHoveredEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Missions_K2Node_ComponentBoundEvent_9_OnHoveredEventDispatcher__DelegateSignature {
        UUI_BP_NavBarButton_C* Me; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_btn_Missions_K2Node_ComponentBoundEvent_9_OnHoveredEventDispatcher__DelegateSignature params{};
    params.Me = (UUI_BP_NavBarButton_C*)Me;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_Async_FG_Gear_K2Node_ComponentBoundEvent_0_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_Async_FG_Gear_K2Node_ComponentBoundEvent_0_AsyncWrapperClassLoadEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_Async_FG_Gear_K2Node_ComponentBoundEvent_0_AsyncWrapperClassLoadEvent__DelegateSignature {
        UAsyncLoadWrapper* SelfReference; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_Async_FG_Gear_K2Node_ComponentBoundEvent_0_AsyncWrapperClassLoadEvent__DelegateSignature params{};
    params.SelfReference = (UAsyncLoadWrapper*)SelfReference;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::DoesTutorialPreventExitingPauseMenu(bool& Prevented, UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.DoesTutorialPreventExitingPauseMenu"));
    struct Params_DoesTutorialPreventExitingPauseMenu {
        bool Prevented; // 0x0
        char pad_1[0x7];
        UTutorialSystem* CallFunc_Get_ReturnValue; // 0x8
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_DoesTutorialPreventExitingPauseMenu params{};
    params.Prevented = (bool)Prevented;
    params.CallFunc_Get_ReturnValue = (UTutorialSystem*)CallFunc_Get_ReturnValue;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue;
    ProcessEvent(func, &params);
    Prevented = params.Prevented;
}
void UUI_BP_FieldGuide_C::PageOutroFinished(UPhoenixUserWidget* PhoenixUserWidget, int32_t IntParam, bool CallFunc_EqualEqual_IntInt_ReturnValue, UTabPageWidget* K2Node_DynamicCast_AsTab_Page_Widget, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.PageOutroFinished"));
    struct Params_PageOutroFinished {
        UPhoenixUserWidget* PhoenixUserWidget; // 0x0
        int32_t IntParam; // 0x8
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0xc
        char pad_d[0x3];
        UTabPageWidget* K2Node_DynamicCast_AsTab_Page_Widget; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
    }; // Size: 0x19
    Params_PageOutroFinished params{};
    params.PhoenixUserWidget = (UPhoenixUserWidget*)PhoenixUserWidget;
    params.IntParam = (int32_t)IntParam;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.K2Node_DynamicCast_AsTab_Page_Widget = (UTabPageWidget*)K2Node_DynamicCast_AsTab_Page_Widget;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::HandleNavigateNavBarRight(bool CallFunc_ShouldSkipPage_ShouldSkip, bool K2Node_SwitchInteger_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.HandleNavigateNavBarRight"));
    struct Params_HandleNavigateNavBarRight {
        bool CallFunc_ShouldSkipPage_ShouldSkip; // 0x0
        bool K2Node_SwitchInteger_CmpSuccess; // 0x1
    }; // Size: 0x2
    Params_HandleNavigateNavBarRight params{};
    params.CallFunc_ShouldSkipPage_ShouldSkip = (bool)CallFunc_ShouldSkipPage_ShouldSkip;
    params.K2Node_SwitchInteger_CmpSuccess = (bool)K2Node_SwitchInteger_CmpSuccess;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::DoesTutorialPreventBackingOut(bool& Prevented, UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.DoesTutorialPreventBackingOut"));
    struct Params_DoesTutorialPreventBackingOut {
        bool Prevented; // 0x0
        char pad_1[0x7];
        UTutorialSystem* CallFunc_Get_ReturnValue; // 0x8
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_DoesTutorialPreventBackingOut params{};
    params.Prevented = (bool)Prevented;
    params.CallFunc_Get_ReturnValue = (UTutorialSystem*)CallFunc_Get_ReturnValue;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue;
    ProcessEvent(func, &params);
    Prevented = params.Prevented;
}
bool UUI_BP_FieldGuide_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool HandledHoldOperation, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_GetInMenuTransition_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_1, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_2, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_3, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_4, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_5, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanOR_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_7, bool CallFunc_EqualEqual_IntInt_ReturnValue_8, bool CallFunc_EqualEqual_IntInt_ReturnValue_9, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_1, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_2, bool CallFunc_DoesTutorialPreventBackingOut_Prevented, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_DoesTutorialPreventExitingPauseMenu_Prevented, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_3, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_4, bool CallFunc_GetInMenuTransition_ReturnValue_1, bool CallFunc_GetInMenuTransition_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_GetInMenuTransition_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_GetInMenuTransition_ReturnValue_4, bool CallFunc_ConditionallyHandleSettingsConfirm_Handled, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsInspectableShown_IsShown, int32_t Temp_int_Array_Index_Variable_1, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_5, EInputDeviceUsed CallFunc_GetLastUsedInputDevice_ReturnValue, bool CallFunc_IsGraphicsChangeConfirmPopupShown_IsShown, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsGraphicsChangeConfirmPopupShown_IsShown_1, bool CallFunc_IsGraphicsChangeConfirmPopupShown_IsShown_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_1, bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_2, bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_3, bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_4, bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_5, bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_6, bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_7, bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_8, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_9, bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_10, bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_11, bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_12, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_IsMapReadyCalled_ReturnValue, bool CallFunc_IsMapReadyCalled_ReturnValue_1, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, bool CallFunc_IsMapReadyCalled_ReturnValue_2, bool CallFunc_IsMapReadyCalled_ReturnValue_3, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, bool CallFunc_IsMapReadyCalled_ReturnValue_4, bool CallFunc_IsMapReadyCalled_ReturnValue_5, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_6, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_7, bool CallFunc_IsMapReadyCalled_ReturnValue_6, bool CallFunc_IsMapReadyCalled_ReturnValue_7, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_8, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_9, bool CallFunc_IsMapReadyCalled_ReturnValue_8, bool CallFunc_IsMapReadyCalled_ReturnValue_9, int32_t Temp_int_Loop_Counter_Variable_1, ULegendItem* CallFunc_GetLegendItem_ReturnValue, ULegendItem* CallFunc_GetLegendItem_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, FLegendItemData CallFunc_Array_Get_Item, FLegendItemData CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        bool HandledHoldOperation; // 0x3
        char pad_4[0x4];
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x8
        bool CallFunc_GetInMenuTransition_ReturnValue; // 0x10
        bool CallFunc_BooleanOR_ReturnValue; // 0x11
        char pad_12[0x6];
        UTutorialSystem* CallFunc_Get_ReturnValue; // 0x18
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue; // 0x20
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_1; // 0x21
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_2; // 0x22
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_3; // 0x23
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_4; // 0x24
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_5; // 0x25
        char pad_26[0x2];
        int32_t Temp_int_Loop_Counter_Variable; // 0x28
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x2c
        char pad_2d[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x30
        bool CallFunc_BooleanOR_ReturnValue_2; // 0x34
        bool CallFunc_BooleanOR_ReturnValue_3; // 0x35
        bool CallFunc_BooleanOR_ReturnValue_4; // 0x36
        bool CallFunc_BooleanOR_ReturnValue_5; // 0x37
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x38
        bool CallFunc_EqualEqual_IntInt_ReturnValue_1; // 0x39
        bool CallFunc_EqualEqual_IntInt_ReturnValue_2; // 0x3a
        char pad_3b[0x1];
        int32_t Temp_int_Array_Index_Variable; // 0x3c
        bool CallFunc_EqualEqual_IntInt_ReturnValue_3; // 0x40
        bool CallFunc_EqualEqual_IntInt_ReturnValue_4; // 0x41
        bool CallFunc_EqualEqual_IntInt_ReturnValue_5; // 0x42
        bool CallFunc_EqualEqual_IntInt_ReturnValue_6; // 0x43
        bool CallFunc_EqualEqual_IntInt_ReturnValue_7; // 0x44
        bool CallFunc_EqualEqual_IntInt_ReturnValue_8; // 0x45
        bool CallFunc_EqualEqual_IntInt_ReturnValue_9; // 0x46
        char pad_47[0x1];
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue_1; // 0x48
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue_2; // 0x50
        bool CallFunc_DoesTutorialPreventBackingOut_Prevented; // 0x58
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x59
        bool CallFunc_DoesTutorialPreventExitingPauseMenu_Prevented; // 0x5a
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x5b
        char pad_5c[0x4];
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue_3; // 0x60
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue_4; // 0x68
        bool CallFunc_GetInMenuTransition_ReturnValue_1; // 0x70
        bool CallFunc_GetInMenuTransition_ReturnValue_2; // 0x71
        bool CallFunc_BooleanOR_ReturnValue_6; // 0x72
        bool CallFunc_GetInMenuTransition_ReturnValue_3; // 0x73
        bool CallFunc_BooleanOR_ReturnValue_7; // 0x74
        bool CallFunc_GetInMenuTransition_ReturnValue_4; // 0x75
        bool CallFunc_ConditionallyHandleSettingsConfirm_Handled; // 0x76
        bool CallFunc_Not_PreBool_ReturnValue; // 0x77
        bool CallFunc_IsInspectableShown_IsShown; // 0x78
        char pad_79[0x3];
        int32_t Temp_int_Array_Index_Variable_1; // 0x7c
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue_5; // 0x80
        EInputDeviceUsed CallFunc_GetLastUsedInputDevice_ReturnValue; // 0x88
        bool CallFunc_IsGraphicsChangeConfirmPopupShown_IsShown; // 0x89
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x8a
        bool CallFunc_Not_PreBool_ReturnValue_1; // 0x8b
        bool CallFunc_IsGraphicsChangeConfirmPopupShown_IsShown_1; // 0x8c
        bool CallFunc_IsGraphicsChangeConfirmPopupShown_IsShown_2; // 0x8d
        bool CallFunc_Not_PreBool_ReturnValue_2; // 0x8e
        bool CallFunc_BooleanOR_ReturnValue_8; // 0x8f
        bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_1; // 0x90
        bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_2; // 0x91
        bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_3; // 0x92
        bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_4; // 0x93
        bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_5; // 0x94
        bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_6; // 0x95
        bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_7; // 0x96
        bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_8; // 0x97
        bool K2Node_SwitchEnum_CmpSuccess; // 0x98
        bool CallFunc_Not_PreBool_ReturnValue_3; // 0x99
        bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_9; // 0x9a
        bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_10; // 0x9b
        bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_11; // 0x9c
        bool CallFunc_ConditionallyHandleSettingsConfirm_Handled_12; // 0x9d
        char pad_9e[0x2];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0xa0
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0xa4
        char pad_a5[0x3];
        UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue; // 0xa8
        UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1; // 0xb0
        bool CallFunc_IsMapReadyCalled_ReturnValue; // 0xb8
        bool CallFunc_IsMapReadyCalled_ReturnValue_1; // 0xb9
        char pad_ba[0x6];
        UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2; // 0xc0
        UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3; // 0xc8
        bool CallFunc_IsMapReadyCalled_ReturnValue_2; // 0xd0
        bool CallFunc_IsMapReadyCalled_ReturnValue_3; // 0xd1
        char pad_d2[0x6];
        UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4; // 0xd8
        UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5; // 0xe0
        bool CallFunc_IsMapReadyCalled_ReturnValue_4; // 0xe8
        bool CallFunc_IsMapReadyCalled_ReturnValue_5; // 0xe9
        char pad_ea[0x6];
        UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_6; // 0xf0
        UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_7; // 0xf8
        bool CallFunc_IsMapReadyCalled_ReturnValue_6; // 0x100
        bool CallFunc_IsMapReadyCalled_ReturnValue_7; // 0x101
        char pad_102[0x6];
        UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_8; // 0x108
        UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_9; // 0x110
        bool CallFunc_IsMapReadyCalled_ReturnValue_8; // 0x118
        bool CallFunc_IsMapReadyCalled_ReturnValue_9; // 0x119
        char pad_11a[0x2];
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x11c
        ULegendItem* CallFunc_GetLegendItem_ReturnValue; // 0x120
        ULegendItem* CallFunc_GetLegendItem_ReturnValue_1; // 0x128
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x130
        char pad_134[0x4];
        FLegendItemData CallFunc_Array_Get_Item; // 0x138
        FLegendItemData CallFunc_Array_Get_Item_1; // 0x168
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0x198
        bool CallFunc_BooleanAND_ReturnValue; // 0x199
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_5; // 0x19a
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x19b
        int32_t CallFunc_Array_Length_ReturnValue; // 0x19c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x1a0
        char pad_1a1[0x3];
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x1a4
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x1a8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_6; // 0x1a9
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_7; // 0x1aa
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_8; // 0x1ab
    }; // Size: 0x1ac
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.HandledHoldOperation = (bool)HandledHoldOperation;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_GetInMenuTransition_ReturnValue = (bool)CallFunc_GetInMenuTransition_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UTutorialSystem*)CallFunc_Get_ReturnValue;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_1 = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_1;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_2 = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_2;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_3 = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_3;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_4 = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_4;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_5 = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_5;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_2 = (bool)CallFunc_BooleanOR_ReturnValue_2;
    params.CallFunc_BooleanOR_ReturnValue_3 = (bool)CallFunc_BooleanOR_ReturnValue_3;
    params.CallFunc_BooleanOR_ReturnValue_4 = (bool)CallFunc_BooleanOR_ReturnValue_4;
    params.CallFunc_BooleanOR_ReturnValue_5 = (bool)CallFunc_BooleanOR_ReturnValue_5;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue_1 = (bool)CallFunc_EqualEqual_IntInt_ReturnValue_1;
    params.CallFunc_EqualEqual_IntInt_ReturnValue_2 = (bool)CallFunc_EqualEqual_IntInt_ReturnValue_2;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_EqualEqual_IntInt_ReturnValue_3 = (bool)CallFunc_EqualEqual_IntInt_ReturnValue_3;
    params.CallFunc_EqualEqual_IntInt_ReturnValue_4 = (bool)CallFunc_EqualEqual_IntInt_ReturnValue_4;
    params.CallFunc_EqualEqual_IntInt_ReturnValue_5 = (bool)CallFunc_EqualEqual_IntInt_ReturnValue_5;
    params.CallFunc_EqualEqual_IntInt_ReturnValue_6 = (bool)CallFunc_EqualEqual_IntInt_ReturnValue_6;
    params.CallFunc_EqualEqual_IntInt_ReturnValue_7 = (bool)CallFunc_EqualEqual_IntInt_ReturnValue_7;
    params.CallFunc_EqualEqual_IntInt_ReturnValue_8 = (bool)CallFunc_EqualEqual_IntInt_ReturnValue_8;
    params.CallFunc_EqualEqual_IntInt_ReturnValue_9 = (bool)CallFunc_EqualEqual_IntInt_ReturnValue_9;
    params.CallFunc_GetUIManagerPure_ReturnValue_1 = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue_1;
    params.CallFunc_GetUIManagerPure_ReturnValue_2 = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue_2;
    params.CallFunc_DoesTutorialPreventBackingOut_Prevented = (bool)CallFunc_DoesTutorialPreventBackingOut_Prevented;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_DoesTutorialPreventExitingPauseMenu_Prevented = (bool)CallFunc_DoesTutorialPreventExitingPauseMenu_Prevented;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_GetUIManagerPure_ReturnValue_3 = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue_3;
    params.CallFunc_GetUIManagerPure_ReturnValue_4 = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue_4;
    params.CallFunc_GetInMenuTransition_ReturnValue_1 = (bool)CallFunc_GetInMenuTransition_ReturnValue_1;
    params.CallFunc_GetInMenuTransition_ReturnValue_2 = (bool)CallFunc_GetInMenuTransition_ReturnValue_2;
    params.CallFunc_BooleanOR_ReturnValue_6 = (bool)CallFunc_BooleanOR_ReturnValue_6;
    params.CallFunc_GetInMenuTransition_ReturnValue_3 = (bool)CallFunc_GetInMenuTransition_ReturnValue_3;
    params.CallFunc_BooleanOR_ReturnValue_7 = (bool)CallFunc_BooleanOR_ReturnValue_7;
    params.CallFunc_GetInMenuTransition_ReturnValue_4 = (bool)CallFunc_GetInMenuTransition_ReturnValue_4;
    params.CallFunc_ConditionallyHandleSettingsConfirm_Handled = (bool)CallFunc_ConditionallyHandleSettingsConfirm_Handled;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_IsInspectableShown_IsShown = (bool)CallFunc_IsInspectableShown_IsShown;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_GetUIManagerPure_ReturnValue_5 = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue_5;
    params.CallFunc_GetLastUsedInputDevice_ReturnValue = (EInputDeviceUsed)CallFunc_GetLastUsedInputDevice_ReturnValue;
    params.CallFunc_IsGraphicsChangeConfirmPopupShown_IsShown = (bool)CallFunc_IsGraphicsChangeConfirmPopupShown_IsShown;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_Not_PreBool_ReturnValue_1 = (bool)CallFunc_Not_PreBool_ReturnValue_1;
    params.CallFunc_IsGraphicsChangeConfirmPopupShown_IsShown_1 = (bool)CallFunc_IsGraphicsChangeConfirmPopupShown_IsShown_1;
    params.CallFunc_IsGraphicsChangeConfirmPopupShown_IsShown_2 = (bool)CallFunc_IsGraphicsChangeConfirmPopupShown_IsShown_2;
    params.CallFunc_Not_PreBool_ReturnValue_2 = (bool)CallFunc_Not_PreBool_ReturnValue_2;
    params.CallFunc_BooleanOR_ReturnValue_8 = (bool)CallFunc_BooleanOR_ReturnValue_8;
    params.CallFunc_ConditionallyHandleSettingsConfirm_Handled_1 = (bool)CallFunc_ConditionallyHandleSettingsConfirm_Handled_1;
    params.CallFunc_ConditionallyHandleSettingsConfirm_Handled_2 = (bool)CallFunc_ConditionallyHandleSettingsConfirm_Handled_2;
    params.CallFunc_ConditionallyHandleSettingsConfirm_Handled_3 = (bool)CallFunc_ConditionallyHandleSettingsConfirm_Handled_3;
    params.CallFunc_ConditionallyHandleSettingsConfirm_Handled_4 = (bool)CallFunc_ConditionallyHandleSettingsConfirm_Handled_4;
    params.CallFunc_ConditionallyHandleSettingsConfirm_Handled_5 = (bool)CallFunc_ConditionallyHandleSettingsConfirm_Handled_5;
    params.CallFunc_ConditionallyHandleSettingsConfirm_Handled_6 = (bool)CallFunc_ConditionallyHandleSettingsConfirm_Handled_6;
    params.CallFunc_ConditionallyHandleSettingsConfirm_Handled_7 = (bool)CallFunc_ConditionallyHandleSettingsConfirm_Handled_7;
    params.CallFunc_ConditionallyHandleSettingsConfirm_Handled_8 = (bool)CallFunc_ConditionallyHandleSettingsConfirm_Handled_8;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_Not_PreBool_ReturnValue_3 = (bool)CallFunc_Not_PreBool_ReturnValue_3;
    params.CallFunc_ConditionallyHandleSettingsConfirm_Handled_9 = (bool)CallFunc_ConditionallyHandleSettingsConfirm_Handled_9;
    params.CallFunc_ConditionallyHandleSettingsConfirm_Handled_10 = (bool)CallFunc_ConditionallyHandleSettingsConfirm_Handled_10;
    params.CallFunc_ConditionallyHandleSettingsConfirm_Handled_11 = (bool)CallFunc_ConditionallyHandleSettingsConfirm_Handled_11;
    params.CallFunc_ConditionallyHandleSettingsConfirm_Handled_12 = (bool)CallFunc_ConditionallyHandleSettingsConfirm_Handled_12;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_GetGameInstanceSubsystem_ReturnValue = (UMapSubSystem*)CallFunc_GetGameInstanceSubsystem_ReturnValue;
    params.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = (UMapSubSystem*)CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
    params.CallFunc_IsMapReadyCalled_ReturnValue = (bool)CallFunc_IsMapReadyCalled_ReturnValue;
    params.CallFunc_IsMapReadyCalled_ReturnValue_1 = (bool)CallFunc_IsMapReadyCalled_ReturnValue_1;
    params.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = (UMapSubSystem*)CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
    params.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = (UMapSubSystem*)CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
    params.CallFunc_IsMapReadyCalled_ReturnValue_2 = (bool)CallFunc_IsMapReadyCalled_ReturnValue_2;
    params.CallFunc_IsMapReadyCalled_ReturnValue_3 = (bool)CallFunc_IsMapReadyCalled_ReturnValue_3;
    params.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = (UMapSubSystem*)CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
    params.CallFunc_GetGameInstanceSubsystem_ReturnValue_5 = (UMapSubSystem*)CallFunc_GetGameInstanceSubsystem_ReturnValue_5;
    params.CallFunc_IsMapReadyCalled_ReturnValue_4 = (bool)CallFunc_IsMapReadyCalled_ReturnValue_4;
    params.CallFunc_IsMapReadyCalled_ReturnValue_5 = (bool)CallFunc_IsMapReadyCalled_ReturnValue_5;
    params.CallFunc_GetGameInstanceSubsystem_ReturnValue_6 = (UMapSubSystem*)CallFunc_GetGameInstanceSubsystem_ReturnValue_6;
    params.CallFunc_GetGameInstanceSubsystem_ReturnValue_7 = (UMapSubSystem*)CallFunc_GetGameInstanceSubsystem_ReturnValue_7;
    params.CallFunc_IsMapReadyCalled_ReturnValue_6 = (bool)CallFunc_IsMapReadyCalled_ReturnValue_6;
    params.CallFunc_IsMapReadyCalled_ReturnValue_7 = (bool)CallFunc_IsMapReadyCalled_ReturnValue_7;
    params.CallFunc_GetGameInstanceSubsystem_ReturnValue_8 = (UMapSubSystem*)CallFunc_GetGameInstanceSubsystem_ReturnValue_8;
    params.CallFunc_GetGameInstanceSubsystem_ReturnValue_9 = (UMapSubSystem*)CallFunc_GetGameInstanceSubsystem_ReturnValue_9;
    params.CallFunc_IsMapReadyCalled_ReturnValue_8 = (bool)CallFunc_IsMapReadyCalled_ReturnValue_8;
    params.CallFunc_IsMapReadyCalled_ReturnValue_9 = (bool)CallFunc_IsMapReadyCalled_ReturnValue_9;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_GetLegendItem_ReturnValue = (ULegendItem*)CallFunc_GetLegendItem_ReturnValue;
    params.CallFunc_GetLegendItem_ReturnValue_1 = (ULegendItem*)CallFunc_GetLegendItem_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Array_Get_Item = (FLegendItemData)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Get_Item_1 = (FLegendItemData)CallFunc_Array_Get_Item_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_5;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_6;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_7;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_8 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_8;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_FieldGuide_C::GetPageIndex(UWidget* PageWidget, int32_t& Index, int32_t OutIndex, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UAsyncLoadWrapper* K2Node_DynamicCast_AsAsync_Load_Wrapper, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.GetPageIndex"));
    struct Params_GetPageIndex {
        UWidget* PageWidget; // 0x0
        int32_t Index; // 0x8
        int32_t OutIndex; // 0xc
        bool CallFunc_IsValid_ReturnValue; // 0x10
        bool Temp_bool_True_if_break_was_hit_Variable; // 0x11
        bool CallFunc_Not_PreBool_ReturnValue; // 0x12
        char pad_13[0x1];
        int32_t Temp_int_Array_Index_Variable; // 0x14
        int32_t Temp_int_Loop_Counter_Variable; // 0x18
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x1c
        TArray<UWidget*> CallFunc_GetAllChildren_ReturnValue; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue; // 0x30
        char pad_34[0x4];
        UWidget* CallFunc_Array_Get_Item; // 0x38
        bool CallFunc_Less_IntInt_ReturnValue; // 0x40
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x41
        bool CallFunc_BooleanAND_ReturnValue; // 0x42
        char pad_43[0x5];
        UAsyncLoadWrapper* K2Node_DynamicCast_AsAsync_Load_Wrapper; // 0x48
        bool K2Node_DynamicCast_bSuccess; // 0x50
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1; // 0x51
    }; // Size: 0x52
    Params_GetPageIndex params{};
    params.PageWidget = (UWidget*)PageWidget;
    params.Index = (int32_t)Index;
    params.OutIndex = (int32_t)OutIndex;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.Temp_bool_True_if_break_was_hit_Variable = (bool)Temp_bool_True_if_break_was_hit_Variable;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetAllChildren_ReturnValue = (TArray<UWidget*>)CallFunc_GetAllChildren_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (UWidget*)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.K2Node_DynamicCast_AsAsync_Load_Wrapper = (UAsyncLoadWrapper*)K2Node_DynamicCast_AsAsync_Load_Wrapper;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
    ProcessEvent(func, &params);
    CallFunc_GetAllChildren_ReturnValue = params.CallFunc_GetAllChildren_ReturnValue;
    Index = params.Index;
}
void UUI_BP_FieldGuide_C::HandleNavigateNavBarLeft(bool CallFunc_ShouldSkipPage_ShouldSkip, bool K2Node_SwitchInteger_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.HandleNavigateNavBarLeft"));
    struct Params_HandleNavigateNavBarLeft {
        bool CallFunc_ShouldSkipPage_ShouldSkip; // 0x0
        bool K2Node_SwitchInteger_CmpSuccess; // 0x1
    }; // Size: 0x2
    Params_HandleNavigateNavBarLeft params{};
    params.CallFunc_ShouldSkipPage_ShouldSkip = (bool)CallFunc_ShouldSkipPage_ShouldSkip;
    params.K2Node_SwitchInteger_CmpSuccess = (bool)K2Node_SwitchInteger_CmpSuccess;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::IsGraphicsChangeConfirmPopupShown(bool& IsShown, UWidget* CallFunc_GetActiveWidget_ReturnValue, UUI_BP_FG_SettingsScreen_C* K2Node_DynamicCast_AsUI_BP_FG_Settings_Screen, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.IsGraphicsChangeConfirmPopupShown"));
    struct Params_IsGraphicsChangeConfirmPopupShown {
        bool IsShown; // 0x0
        char pad_1[0x7];
        UWidget* CallFunc_GetActiveWidget_ReturnValue; // 0x8
        UUI_BP_FG_SettingsScreen_C* K2Node_DynamicCast_AsUI_BP_FG_Settings_Screen; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_IsGraphicsChangeConfirmPopupShown params{};
    params.IsShown = (bool)IsShown;
    params.CallFunc_GetActiveWidget_ReturnValue = (UWidget*)CallFunc_GetActiveWidget_ReturnValue;
    params.K2Node_DynamicCast_AsUI_BP_FG_Settings_Screen = (UUI_BP_FG_SettingsScreen_C*)K2Node_DynamicCast_AsUI_BP_FG_Settings_Screen;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    ProcessEvent(func, &params);
    IsShown = params.IsShown;
}
void UUI_BP_FieldGuide_C::ExitMenuRequestedDelegate(UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_CanExit_CanExit, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_1, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_2, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_3, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_4, bool CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.ExitMenuRequestedDelegate"));
    struct Params_ExitMenuRequestedDelegate {
        UTutorialSystem* CallFunc_Get_ReturnValue; // 0x0
        bool CallFunc_CanExit_CanExit; // 0x8
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue; // 0x9
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_1; // 0xa
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_2; // 0xb
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_3; // 0xc
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_4; // 0xd
        bool CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue; // 0xe
        char pad_f[0x1];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x10
    }; // Size: 0x14
    Params_ExitMenuRequestedDelegate params{};
    params.CallFunc_Get_ReturnValue = (UTutorialSystem*)CallFunc_Get_ReturnValue;
    params.CallFunc_CanExit_CanExit = (bool)CallFunc_CanExit_CanExit;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_1 = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_1;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_2 = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_2;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_3 = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_3;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_4 = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_4;
    params.CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue = (bool)CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::HandleHotkeyPressedForNavButton(UUI_BP_NavBarButton_C* NavBarButton, bool CallFunc_HandleNavBarClicked_Handled, UUI_BP_AsyncLoadWrapper_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, EPauseMenuPage CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ShouldSkipPage_ShouldSkip) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.HandleHotkeyPressedForNavButton"));
    struct Params_HandleHotkeyPressedForNavButton {
        UUI_BP_NavBarButton_C* NavBarButton; // 0x0
        bool CallFunc_HandleNavBarClicked_Handled; // 0x8
        char pad_9[0x7];
        UUI_BP_AsyncLoadWrapper_C* CallFunc_Map_Find_Value; // 0x10
        bool CallFunc_Map_Find_ReturnValue; // 0x18
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x19
        EPauseMenuPage CallFunc_Map_Find_Value_1; // 0x1a
        bool CallFunc_Map_Find_ReturnValue_1; // 0x1b
        bool K2Node_SwitchEnum_CmpSuccess; // 0x1c
        bool CallFunc_ShouldSkipPage_ShouldSkip; // 0x1d
    }; // Size: 0x1e
    Params_HandleHotkeyPressedForNavButton params{};
    params.NavBarButton = (UUI_BP_NavBarButton_C*)NavBarButton;
    params.CallFunc_HandleNavBarClicked_Handled = (bool)CallFunc_HandleNavBarClicked_Handled;
    params.CallFunc_Map_Find_Value = (UUI_BP_AsyncLoadWrapper_C*)CallFunc_Map_Find_Value;
    params.CallFunc_Map_Find_ReturnValue = (bool)CallFunc_Map_Find_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_Map_Find_Value_1 = (EPauseMenuPage)CallFunc_Map_Find_Value_1;
    params.CallFunc_Map_Find_ReturnValue_1 = (bool)CallFunc_Map_Find_ReturnValue_1;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_ShouldSkipPage_ShouldSkip = (bool)CallFunc_ShouldSkipPage_ShouldSkip;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::SetLockedToPage(bool Locked, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.SetLockedToPage"));
    struct Params_SetLockedToPage {
        bool Locked; // 0x0
        bool Temp_bool_Variable; // 0x1
        ESlateVisibility Temp_byte_Variable; // 0x2
        ESlateVisibility Temp_byte_Variable_1; // 0x3
        ESlateVisibility K2Node_Select_Default; // 0x4
    }; // Size: 0x5
    Params_SetLockedToPage params{};
    params.Locked = (bool)Locked;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::ConditionallyHandleSettingsConfirm(EUMGInputAction InputAction, EInputEvent InputEvent, bool& Handled, USystemMenuWidget* K2Node_DynamicCast_AsSystem_Menu_Widget, bool K2Node_DynamicCast_bSuccess, FString CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle, FString CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc, bool CallFunc_SettingsNeedExitConfirmed_ReturnValue, UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.ConditionallyHandleSettingsConfirm"));
    struct Params_ConditionallyHandleSettingsConfirm {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool Handled; // 0x2
        char pad_3[0x5];
        USystemMenuWidget* K2Node_DynamicCast_AsSystem_Menu_Widget; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
        char pad_11[0x7];
        FString CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle; // 0x18
        FString CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc; // 0x28
        bool CallFunc_SettingsNeedExitConfirmed_ReturnValue; // 0x38
        char pad_39[0x7];
        UWidget* CallFunc_GetActiveWidget_ReturnValue; // 0x40
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x48
    }; // Size: 0x49
    Params_ConditionallyHandleSettingsConfirm params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.Handled = (bool)Handled;
    params.K2Node_DynamicCast_AsSystem_Menu_Widget = (USystemMenuWidget*)K2Node_DynamicCast_AsSystem_Menu_Widget;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle = (FString)CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle;
    params.CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc = (FString)CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc;
    params.CallFunc_SettingsNeedExitConfirmed_ReturnValue = (bool)CallFunc_SettingsNeedExitConfirmed_ReturnValue;
    params.CallFunc_GetActiveWidget_ReturnValue = (UWidget*)CallFunc_GetActiveWidget_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    ProcessEvent(func, &params);
    Handled = params.Handled;
}
void UUI_BP_FieldGuide_C::HandleDisabledTabs(TArray<EPauseMenuPage> TempDisabledTabs, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, EPauseMenuPage Temp_byte_Variable, EPauseMenuPage Temp_byte_Variable_1, EPauseMenuPage CallFunc_Array_Get_Item, int32_t CallFunc_Array_AddUnique_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue, bool CallFunc_IsDungeon_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, UUI_BP_NavBarButton_C* K2Node_Select_Default, TArray<EPauseMenuPage>& CallFunc_GetHiddenMenuTabs_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.HandleDisabledTabs"));
    struct Params_HandleDisabledTabs {
        TArray<EPauseMenuPage> TempDisabledTabs; // 0x0
        int32_t Temp_int_Array_Index_Variable; // 0x10
        int32_t Temp_int_Loop_Counter_Variable; // 0x14
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x18
        EPauseMenuPage Temp_byte_Variable; // 0x1c
        EPauseMenuPage Temp_byte_Variable_1; // 0x1d
        EPauseMenuPage CallFunc_Array_Get_Item; // 0x1e
        char pad_1f[0x1];
        int32_t CallFunc_Array_AddUnique_ReturnValue; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue; // 0x24
        UUIManager* CallFunc_Get_ReturnValue; // 0x28
        bool CallFunc_Less_IntInt_ReturnValue; // 0x30
        char pad_31[0x7];
        UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue; // 0x38
        bool CallFunc_IsDungeon_ReturnValue; // 0x40
        char pad_41[0x7];
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x48
        UUI_BP_NavBarButton_C* K2Node_Select_Default; // 0x50
        TArray<EPauseMenuPage> CallFunc_GetHiddenMenuTabs_ReturnValue; // 0x58
    }; // Size: 0x68
    Params_HandleDisabledTabs params{};
    params.TempDisabledTabs = (TArray<EPauseMenuPage>)TempDisabledTabs;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_byte_Variable = (EPauseMenuPage)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (EPauseMenuPage)Temp_byte_Variable_1;
    params.CallFunc_Array_Get_Item = (EPauseMenuPage)CallFunc_Array_Get_Item;
    params.CallFunc_Array_AddUnique_ReturnValue = (int32_t)CallFunc_Array_AddUnique_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_GetMapSubSystem_ReturnValue = (UMapSubSystem*)CallFunc_GetMapSubSystem_ReturnValue;
    params.CallFunc_IsDungeon_ReturnValue = (bool)CallFunc_IsDungeon_ReturnValue;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.K2Node_Select_Default = (UUI_BP_NavBarButton_C*)K2Node_Select_Default;
    params.CallFunc_GetHiddenMenuTabs_ReturnValue = (TArray<EPauseMenuPage>)CallFunc_GetHiddenMenuTabs_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetHiddenMenuTabs_ReturnValue = params.CallFunc_GetHiddenMenuTabs_ReturnValue;
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Map_K2Node_ComponentBoundEvent_13_OnClickedEventDispatcher__DelegateSignature(UUI_BP_NavBarButton_C* Me) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Map_K2Node_ComponentBoundEvent_13_OnClickedEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Map_K2Node_ComponentBoundEvent_13_OnClickedEventDispatcher__DelegateSignature {
        UUI_BP_NavBarButton_C* Me; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_btn_Map_K2Node_ComponentBoundEvent_13_OnClickedEventDispatcher__DelegateSignature params{};
    params.Me = (UUI_BP_NavBarButton_C*)Me;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::HandleNewTabRequested(EPauseMenuPage NewPage, TArray<FString>& DestPath, EPauseMenuPage Temp_byte_Variable, UUI_BP_NavBarButton_C* K2Node_Select_Default, bool CallFunc_HandleNavBarClicked_Handled, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.HandleNewTabRequested"));
    struct Params_HandleNewTabRequested {
        EPauseMenuPage NewPage; // 0x0
        char pad_1[0x7];
        TArray<FString> DestPath; // 0x8
        EPauseMenuPage Temp_byte_Variable; // 0x18
        char pad_19[0x7];
        UUI_BP_NavBarButton_C* K2Node_Select_Default; // 0x20
        bool CallFunc_HandleNavBarClicked_Handled; // 0x28
        bool CallFunc_IsValid_ReturnValue; // 0x29
    }; // Size: 0x2a
    Params_HandleNewTabRequested params{};
    params.NewPage = (EPauseMenuPage)NewPage;
    params.DestPath = (TArray<FString>)DestPath;
    params.Temp_byte_Variable = (EPauseMenuPage)Temp_byte_Variable;
    params.K2Node_Select_Default = (UUI_BP_NavBarButton_C*)K2Node_Select_Default;
    params.CallFunc_HandleNavBarClicked_Handled = (bool)CallFunc_HandleNavBarClicked_Handled;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
    DestPath = params.DestPath;
}
void UUI_BP_FieldGuide_C::HideBackgroundScrim(UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.HideBackgroundScrim"));
    struct Params_HideBackgroundScrim {
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_HideBackgroundScrim params{};
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::ShowBackgroundScrim(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.ShowBackgroundScrim"));
    struct Params_ShowBackgroundScrim {
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_ShowBackgroundScrim params{};
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::HandleBackup(UUIManager* CallFunc_GetUIManagerPure_ReturnValue, int32_t CallFunc_SelectInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_1, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_2, UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_GetToMapFromBackButton_ReturnValue, bool CallFunc_ForceCompleteTutorial_ReturnValue, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue, bool CallFunc_ForceCompleteTutorial_ReturnValue_1, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_1) {}
void UUI_BP_FieldGuide_C::Close_Field_Guide_Requested(UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_ForceCompleteTutorial_ReturnValue, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue, bool CallFunc_CanExit_CanExit, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.Close Field Guide Requested"));
    struct Params_Close_Field_Guide_Requested {
        UTutorialSystem* CallFunc_Get_ReturnValue; // 0x0
        bool CallFunc_ForceCompleteTutorial_ReturnValue; // 0x8
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue; // 0x9
        bool CallFunc_CanExit_CanExit; // 0xa
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0xb
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0xc
    }; // Size: 0x10
    Params_Close_Field_Guide_Requested params{};
    params.CallFunc_Get_ReturnValue = (UTutorialSystem*)CallFunc_Get_ReturnValue;
    params.CallFunc_ForceCompleteTutorial_ReturnValue = (bool)CallFunc_ForceCompleteTutorial_ReturnValue;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue;
    params.CallFunc_CanExit_CanExit = (bool)CallFunc_CanExit_CanExit;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::StartNewPage(FLegendItemData K2Node_MakeStruct_LegendItemData, TArray<FLegendItemData>& K2Node_MakeArray_Array, UUI_BP_NavBarButton_C* CallFunc_FindNavButtonFromMenu_Button, FString CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.StartNewPage"));
    struct Params_StartNewPage {
        FLegendItemData K2Node_MakeStruct_LegendItemData; // 0x0
        TArray<FLegendItemData> K2Node_MakeArray_Array; // 0x30
        UUI_BP_NavBarButton_C* CallFunc_FindNavButtonFromMenu_Button; // 0x40
        FString CallFunc_Map_Find_Value; // 0x48
        bool CallFunc_Map_Find_ReturnValue; // 0x58
        bool CallFunc_IsValid_ReturnValue; // 0x59
    }; // Size: 0x5a
    Params_StartNewPage params{};
    params.K2Node_MakeStruct_LegendItemData = (FLegendItemData)K2Node_MakeStruct_LegendItemData;
    params.K2Node_MakeArray_Array = (TArray<FLegendItemData>)K2Node_MakeArray_Array;
    params.CallFunc_FindNavButtonFromMenu_Button = (UUI_BP_NavBarButton_C*)CallFunc_FindNavButtonFromMenu_Button;
    params.CallFunc_Map_Find_Value = (FString)CallFunc_Map_Find_Value;
    params.CallFunc_Map_Find_ReturnValue = (bool)CallFunc_Map_Find_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
void UUI_BP_FieldGuide_C::OutroFinishedWhenLockedToPage(UPhoenixUserWidget* PhoenixUserWidget, int32_t IntParam, UTabPageWidget* K2Node_DynamicCast_AsTab_Page_Widget, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.OutroFinishedWhenLockedToPage"));
    struct Params_OutroFinishedWhenLockedToPage {
        UPhoenixUserWidget* PhoenixUserWidget; // 0x0
        int32_t IntParam; // 0x8
        char pad_c[0x4];
        UTabPageWidget* K2Node_DynamicCast_AsTab_Page_Widget; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
    }; // Size: 0x19
    Params_OutroFinishedWhenLockedToPage params{};
    params.PhoenixUserWidget = (UPhoenixUserWidget*)PhoenixUserWidget;
    params.IntParam = (int32_t)IntParam;
    params.K2Node_DynamicCast_AsTab_Page_Widget = (UTabPageWidget*)K2Node_DynamicCast_AsTab_Page_Widget;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::CanExit(bool& CanExit, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_GetContextOnActor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.CanExit"));
    struct Params_CanExit {
        bool CanExit; // 0x0
        char pad_1[0x7];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x8
        bool CallFunc_GetContextOnActor_ReturnValue; // 0x10
        bool CallFunc_Not_PreBool_ReturnValue; // 0x11
    }; // Size: 0x12
    Params_CanExit params{};
    params.CanExit = (bool)CanExit;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetContextOnActor_ReturnValue = (bool)CallFunc_GetContextOnActor_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
    CanExit = params.CanExit;
}
void UUI_BP_FieldGuide_C::ExitPauseMenu(bool SkipFade, EFieldGuideExitReasons ExitReason, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, UTutorialSystem* CallFunc_Get_ReturnValue, UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_ForceCompleteTutorial_ReturnValue, UUI_BP_AsyncLoadWrapper_C* K2Node_DynamicCast_AsUI_BP_Async_Load_Wrapper, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue, UTabPageWidget* K2Node_DynamicCast_AsTab_Page_Widget, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue_1, bool CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue_2, bool CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue_3, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_1, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_2, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_3, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_4, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_5, bool CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue_4, bool CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue_5, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_6, bool CallFunc_AutoSaveGameData_ReturnValue, UUIManager* CallFunc_Get_ReturnValue_1, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.ExitPauseMenu"));
    struct Params_ExitPauseMenu {
        bool SkipFade; // 0x0
        EFieldGuideExitReasons ExitReason; // 0x1
        char pad_2[0x6];
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x8
        UTutorialSystem* CallFunc_Get_ReturnValue; // 0x10
        UWidget* CallFunc_GetActiveWidget_ReturnValue; // 0x18
        bool CallFunc_ForceCompleteTutorial_ReturnValue; // 0x20
        char pad_21[0x7];
        UUI_BP_AsyncLoadWrapper_C* K2Node_DynamicCast_AsUI_BP_Async_Load_Wrapper; // 0x28
        bool K2Node_DynamicCast_bSuccess; // 0x30
        bool CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue; // 0x31
        char pad_32[0x6];
        UTabPageWidget* K2Node_DynamicCast_AsTab_Page_Widget; // 0x38
        bool K2Node_DynamicCast_bSuccess_1; // 0x40
        bool CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue_1; // 0x41
        bool CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue_2; // 0x42
        bool CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue_3; // 0x43
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue; // 0x44
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_1; // 0x45
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_2; // 0x46
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_3; // 0x47
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_4; // 0x48
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_5; // 0x49
        bool CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue_4; // 0x4a
        bool CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue_5; // 0x4b
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_6; // 0x4c
        bool CallFunc_AutoSaveGameData_ReturnValue; // 0x4d
        char pad_4e[0x2];
        UUIManager* CallFunc_Get_ReturnValue_1; // 0x50
        UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue; // 0x58
    }; // Size: 0x60
    Params_ExitPauseMenu params{};
    params.SkipFade = (bool)SkipFade;
    params.ExitReason = (EFieldGuideExitReasons)ExitReason;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UTutorialSystem*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetActiveWidget_ReturnValue = (UWidget*)CallFunc_GetActiveWidget_ReturnValue;
    params.CallFunc_ForceCompleteTutorial_ReturnValue = (bool)CallFunc_ForceCompleteTutorial_ReturnValue;
    params.K2Node_DynamicCast_AsUI_BP_Async_Load_Wrapper = (UUI_BP_AsyncLoadWrapper_C*)K2Node_DynamicCast_AsUI_BP_Async_Load_Wrapper;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue = (bool)CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue;
    params.K2Node_DynamicCast_AsTab_Page_Widget = (UTabPageWidget*)K2Node_DynamicCast_AsTab_Page_Widget;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue_1 = (bool)CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue_1;
    params.CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue_2 = (bool)CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue_2;
    params.CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue_3 = (bool)CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue_3;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_1 = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_1;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_2 = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_2;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_3 = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_3;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_4 = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_4;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_5 = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_5;
    params.CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue_4 = (bool)CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue_4;
    params.CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue_5 = (bool)CallFunc_IsTutorialStepActiveOrAboutToBe_ReturnValue_5;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_6 = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_6;
    params.CallFunc_AutoSaveGameData_ReturnValue = (bool)CallFunc_AutoSaveGameData_ReturnValue;
    params.CallFunc_Get_ReturnValue_1 = (UUIManager*)CallFunc_Get_ReturnValue_1;
    params.CallFunc_GetMapSubSystem_ReturnValue = (UMapSubSystem*)CallFunc_GetMapSubSystem_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::GenerateNavLookupMaps(EPauseMenuPage Temp_byte_Variable, EPauseMenuPage Temp_byte_Variable_1, EPauseMenuPage Temp_byte_Variable_2, EPauseMenuPage Temp_byte_Variable_3, EPauseMenuPage Temp_byte_Variable_4, FString Temp_string_Variable, FString Temp_string_Variable_1, FString Temp_string_Variable_2, FString Temp_string_Variable_3, FString Temp_string_Variable_4, FString Temp_string_Variable_5, FString Temp_string_Variable_6, FString Temp_string_Variable_7, FString Temp_string_Variable_8, FString Temp_string_Variable_9, FString Temp_string_Variable_10, FString Temp_string_Variable_11, FString Temp_string_Variable_12, FString Temp_string_Variable_13, FString Temp_string_Variable_14, FString Temp_string_Variable_15, FString Temp_string_Variable_16, FString Temp_string_Variable_17, EPauseMenuPage Temp_byte_Variable_5, EPauseMenuPage Temp_byte_Variable_6, EPauseMenuPage Temp_byte_Variable_7, EPauseMenuPage Temp_byte_Variable_8) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.GenerateNavLookupMaps"));
    struct Params_GenerateNavLookupMaps {
        EPauseMenuPage Temp_byte_Variable; // 0x0
        EPauseMenuPage Temp_byte_Variable_1; // 0x1
        EPauseMenuPage Temp_byte_Variable_2; // 0x2
        EPauseMenuPage Temp_byte_Variable_3; // 0x3
        EPauseMenuPage Temp_byte_Variable_4; // 0x4
        char pad_5[0x3];
        FString Temp_string_Variable; // 0x8
        FString Temp_string_Variable_1; // 0x18
        FString Temp_string_Variable_2; // 0x28
        FString Temp_string_Variable_3; // 0x38
        FString Temp_string_Variable_4; // 0x48
        FString Temp_string_Variable_5; // 0x58
        FString Temp_string_Variable_6; // 0x68
        FString Temp_string_Variable_7; // 0x78
        FString Temp_string_Variable_8; // 0x88
        FString Temp_string_Variable_9; // 0x98
        FString Temp_string_Variable_10; // 0xa8
        FString Temp_string_Variable_11; // 0xb8
        FString Temp_string_Variable_12; // 0xc8
        FString Temp_string_Variable_13; // 0xd8
        FString Temp_string_Variable_14; // 0xe8
        FString Temp_string_Variable_15; // 0xf8
        FString Temp_string_Variable_16; // 0x108
        FString Temp_string_Variable_17; // 0x118
        EPauseMenuPage Temp_byte_Variable_5; // 0x128
        EPauseMenuPage Temp_byte_Variable_6; // 0x129
        EPauseMenuPage Temp_byte_Variable_7; // 0x12a
        EPauseMenuPage Temp_byte_Variable_8; // 0x12b
    }; // Size: 0x12c
    Params_GenerateNavLookupMaps params{};
    params.Temp_byte_Variable = (EPauseMenuPage)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (EPauseMenuPage)Temp_byte_Variable_1;
    params.Temp_byte_Variable_2 = (EPauseMenuPage)Temp_byte_Variable_2;
    params.Temp_byte_Variable_3 = (EPauseMenuPage)Temp_byte_Variable_3;
    params.Temp_byte_Variable_4 = (EPauseMenuPage)Temp_byte_Variable_4;
    params.Temp_string_Variable = (FString)Temp_string_Variable;
    params.Temp_string_Variable_1 = (FString)Temp_string_Variable_1;
    params.Temp_string_Variable_2 = (FString)Temp_string_Variable_2;
    params.Temp_string_Variable_3 = (FString)Temp_string_Variable_3;
    params.Temp_string_Variable_4 = (FString)Temp_string_Variable_4;
    params.Temp_string_Variable_5 = (FString)Temp_string_Variable_5;
    params.Temp_string_Variable_6 = (FString)Temp_string_Variable_6;
    params.Temp_string_Variable_7 = (FString)Temp_string_Variable_7;
    params.Temp_string_Variable_8 = (FString)Temp_string_Variable_8;
    params.Temp_string_Variable_9 = (FString)Temp_string_Variable_9;
    params.Temp_string_Variable_10 = (FString)Temp_string_Variable_10;
    params.Temp_string_Variable_11 = (FString)Temp_string_Variable_11;
    params.Temp_string_Variable_12 = (FString)Temp_string_Variable_12;
    params.Temp_string_Variable_13 = (FString)Temp_string_Variable_13;
    params.Temp_string_Variable_14 = (FString)Temp_string_Variable_14;
    params.Temp_string_Variable_15 = (FString)Temp_string_Variable_15;
    params.Temp_string_Variable_16 = (FString)Temp_string_Variable_16;
    params.Temp_string_Variable_17 = (FString)Temp_string_Variable_17;
    params.Temp_byte_Variable_5 = (EPauseMenuPage)Temp_byte_Variable_5;
    params.Temp_byte_Variable_6 = (EPauseMenuPage)Temp_byte_Variable_6;
    params.Temp_byte_Variable_7 = (EPauseMenuPage)Temp_byte_Variable_7;
    params.Temp_byte_Variable_8 = (EPauseMenuPage)Temp_byte_Variable_8;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Map_K2Node_ComponentBoundEvent_14_OnUnhoveredEventDispatcher__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Map_K2Node_ComponentBoundEvent_14_OnUnhoveredEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Map_K2Node_ComponentBoundEvent_14_OnUnhoveredEventDispatcher__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FieldGuide_btn_Map_K2Node_ComponentBoundEvent_14_OnUnhoveredEventDispatcher__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Inventory_K2Node_ComponentBoundEvent_1_OnClickedEventDispatcher__DelegateSignature(UUI_BP_NavBarButton_C* Me) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Inventory_K2Node_ComponentBoundEvent_1_OnClickedEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Inventory_K2Node_ComponentBoundEvent_1_OnClickedEventDispatcher__DelegateSignature {
        UUI_BP_NavBarButton_C* Me; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_btn_Inventory_K2Node_ComponentBoundEvent_1_OnClickedEventDispatcher__DelegateSignature params{};
    params.Me = (UUI_BP_NavBarButton_C*)Me;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::FieldGuide_StartOnPage(FString PageName, bool StartingOnIndex, FString CurrentPage, FString PagePath, FString PageRoot, ESlateVisibility Temp_byte_Variable, FString CallFunc_Split_LeftS, FString CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, TArray<FString>& CallFunc_ParseIntoArray_ReturnValue, bool Temp_bool_Variable, FString Temp_string_Variable, FString Temp_string_Variable_1, bool Temp_bool_Variable_1, FString Temp_string_Variable_2, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool Temp_bool_Variable_2, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, FString K2Node_Select_Default_1, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, FString K2Node_Select_Default_2, UUI_BP_AsyncLoadWrapper_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, EPauseMenuPage CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsMenuTabHidden_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.FieldGuide_StartOnPage"));
    struct Params_FieldGuide_StartOnPage {
        FString PageName; // 0x0
        bool StartingOnIndex; // 0x10
        char pad_11[0x7];
        FString CurrentPage; // 0x18
        FString PagePath; // 0x28
        FString PageRoot; // 0x38
        ESlateVisibility Temp_byte_Variable; // 0x48
        char pad_49[0x7];
        FString CallFunc_Split_LeftS; // 0x50
        FString CallFunc_Split_RightS; // 0x60
        bool CallFunc_Split_ReturnValue; // 0x70
        char pad_71[0x7];
        TArray<FString> CallFunc_ParseIntoArray_ReturnValue; // 0x78
        bool Temp_bool_Variable; // 0x88
        char pad_89[0x7];
        FString Temp_string_Variable; // 0x90
        FString Temp_string_Variable_1; // 0xa0
        bool Temp_bool_Variable_1; // 0xb0
        char pad_b1[0x7];
        FString Temp_string_Variable_2; // 0xb8
        ESlateVisibility Temp_byte_Variable_1; // 0xc8
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0xc9
        bool Temp_bool_Variable_2; // 0xca
        char pad_cb[0x5];
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0xd0
        ESlateVisibility K2Node_Select_Default; // 0xd8
        bool CallFunc_EqualEqual_StrStr_ReturnValue_1; // 0xd9
        char pad_da[0x6];
        FString K2Node_Select_Default_1; // 0xe0
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue_1; // 0xf0
        bool CallFunc_EqualEqual_StrStr_ReturnValue_2; // 0xf8
        char pad_f9[0x7];
        FString K2Node_Select_Default_2; // 0x100
        UUI_BP_AsyncLoadWrapper_C* CallFunc_Map_Find_Value; // 0x110
        bool CallFunc_Map_Find_ReturnValue; // 0x118
        EPauseMenuPage CallFunc_Map_Find_Value_1; // 0x119
        bool CallFunc_Map_Find_ReturnValue_1; // 0x11a
        bool CallFunc_IsMenuTabHidden_ReturnValue; // 0x11b
        bool CallFunc_Not_PreBool_ReturnValue; // 0x11c
    }; // Size: 0x11d
    Params_FieldGuide_StartOnPage params{};
    params.PageName = (FString)PageName;
    params.StartingOnIndex = (bool)StartingOnIndex;
    params.CurrentPage = (FString)CurrentPage;
    params.PagePath = (FString)PagePath;
    params.PageRoot = (FString)PageRoot;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.CallFunc_Split_LeftS = (FString)CallFunc_Split_LeftS;
    params.CallFunc_Split_RightS = (FString)CallFunc_Split_RightS;
    params.CallFunc_Split_ReturnValue = (bool)CallFunc_Split_ReturnValue;
    params.CallFunc_ParseIntoArray_ReturnValue = (TArray<FString>)CallFunc_ParseIntoArray_ReturnValue;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_string_Variable = (FString)Temp_string_Variable;
    params.Temp_string_Variable_1 = (FString)Temp_string_Variable_1;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.Temp_string_Variable_2 = (FString)Temp_string_Variable_2;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.Temp_bool_Variable_2 = (bool)Temp_bool_Variable_2;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_1 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_1;
    params.K2Node_Select_Default_1 = (FString)K2Node_Select_Default_1;
    params.CallFunc_GetUIManagerPure_ReturnValue_1 = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue_1;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_2 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_2;
    params.K2Node_Select_Default_2 = (FString)K2Node_Select_Default_2;
    params.CallFunc_Map_Find_Value = (UUI_BP_AsyncLoadWrapper_C*)CallFunc_Map_Find_Value;
    params.CallFunc_Map_Find_ReturnValue = (bool)CallFunc_Map_Find_ReturnValue;
    params.CallFunc_Map_Find_Value_1 = (EPauseMenuPage)CallFunc_Map_Find_Value_1;
    params.CallFunc_Map_Find_ReturnValue_1 = (bool)CallFunc_Map_Find_ReturnValue_1;
    params.CallFunc_IsMenuTabHidden_ReturnValue = (bool)CallFunc_IsMenuTabHidden_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_ParseIntoArray_ReturnValue = params.CallFunc_ParseIntoArray_ReturnValue;
}
void UUI_BP_FieldGuide_C::FindNavButtonFromMenu(UAsyncLoadWrapper* Menu, UUI_BP_NavBarButton_C*& Button, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<UUI_BP_NavBarButton_C*>& CallFunc_Map_Keys_Keys, int32_t CallFunc_Array_Length_ReturnValue, UUI_BP_NavBarButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UUI_BP_AsyncLoadWrapper_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.FindNavButtonFromMenu"));
    struct Params_FindNavButtonFromMenu {
        UAsyncLoadWrapper* Menu; // 0x0
        UUI_BP_NavBarButton_C* Button; // 0x8
        int32_t Temp_int_Array_Index_Variable; // 0x10
        int32_t Temp_int_Loop_Counter_Variable; // 0x14
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x18
        char pad_1c[0x4];
        TArray<UUI_BP_NavBarButton_C*> CallFunc_Map_Keys_Keys; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue; // 0x30
        char pad_34[0x4];
        UUI_BP_NavBarButton_C* CallFunc_Array_Get_Item; // 0x38
        bool CallFunc_Less_IntInt_ReturnValue; // 0x40
        char pad_41[0x7];
        UUI_BP_AsyncLoadWrapper_C* CallFunc_Map_Find_Value; // 0x48
        bool CallFunc_Map_Find_ReturnValue; // 0x50
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x51
    }; // Size: 0x52
    Params_FindNavButtonFromMenu params{};
    params.Menu = (UAsyncLoadWrapper*)Menu;
    params.Button = (UUI_BP_NavBarButton_C*)Button;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Map_Keys_Keys = (TArray<UUI_BP_NavBarButton_C*>)CallFunc_Map_Keys_Keys;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (UUI_BP_NavBarButton_C*)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Map_Find_Value = (UUI_BP_AsyncLoadWrapper_C*)CallFunc_Map_Find_Value;
    params.CallFunc_Map_Find_ReturnValue = (bool)CallFunc_Map_Find_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    ProcessEvent(func, &params);
    Button = params.Button;
    CallFunc_Map_Keys_Keys = params.CallFunc_Map_Keys_Keys;
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_Async_FG_Map_K2Node_ComponentBoundEvent_9_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_Async_FG_Map_K2Node_ComponentBoundEvent_9_AsyncWrapperClassLoadEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_Async_FG_Map_K2Node_ComponentBoundEvent_9_AsyncWrapperClassLoadEvent__DelegateSignature {
        UAsyncLoadWrapper* SelfReference; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_Async_FG_Map_K2Node_ComponentBoundEvent_9_AsyncWrapperClassLoadEvent__DelegateSignature params{};
    params.SelfReference = (UAsyncLoadWrapper*)SelfReference;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::UpdateNavBar(UUI_BP_NavBarButton_C* Button, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.UpdateNavBar"));
    struct Params_UpdateNavBar {
        UUI_BP_NavBarButton_C* Button; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x8
        bool CallFunc_NotEqual_ObjectObject_ReturnValue; // 0x9
    }; // Size: 0xa
    Params_UpdateNavBar params{};
    params.Button = (UUI_BP_NavBarButton_C*)Button;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_NotEqual_ObjectObject_ReturnValue = (bool)CallFunc_NotEqual_ObjectObject_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Character_K2Node_ComponentBoundEvent_4_OnClickedEventDispatcher__DelegateSignature(UUI_BP_NavBarButton_C* Me) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Character_K2Node_ComponentBoundEvent_4_OnClickedEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Character_K2Node_ComponentBoundEvent_4_OnClickedEventDispatcher__DelegateSignature {
        UUI_BP_NavBarButton_C* Me; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_btn_Character_K2Node_ComponentBoundEvent_4_OnClickedEventDispatcher__DelegateSignature params{};
    params.Me = (UUI_BP_NavBarButton_C*)Me;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::NextPage(int32_t CurrentIndex, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_GetNumWidgets_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32_t CallFunc_SelectInt_ReturnValue, UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, UUI_BP_AsyncLoadWrapper_C* K2Node_DynamicCast_AsUI_BP_Async_Load_Wrapper, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ShouldSkipPage_ShouldSkip) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.NextPage"));
    struct Params_NextPage {
        int32_t CurrentIndex; // 0x0
        char pad_4[0x4];
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x8
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x10
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x14
        int32_t CallFunc_GetNumWidgets_ReturnValue; // 0x18
        bool CallFunc_GreaterEqual_IntInt_ReturnValue; // 0x1c
        char pad_1d[0x3];
        int32_t CallFunc_SelectInt_ReturnValue; // 0x20
        char pad_24[0x4];
        UWidget* CallFunc_GetWidgetAtIndex_ReturnValue; // 0x28
        UUI_BP_AsyncLoadWrapper_C* K2Node_DynamicCast_AsUI_BP_Async_Load_Wrapper; // 0x30
        bool K2Node_DynamicCast_bSuccess; // 0x38
        bool CallFunc_ShouldSkipPage_ShouldSkip; // 0x39
    }; // Size: 0x3a
    Params_NextPage params{};
    params.CurrentIndex = (int32_t)CurrentIndex;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetNumWidgets_ReturnValue = (int32_t)CallFunc_GetNumWidgets_ReturnValue;
    params.CallFunc_GreaterEqual_IntInt_ReturnValue = (bool)CallFunc_GreaterEqual_IntInt_ReturnValue;
    params.CallFunc_SelectInt_ReturnValue = (int32_t)CallFunc_SelectInt_ReturnValue;
    params.CallFunc_GetWidgetAtIndex_ReturnValue = (UWidget*)CallFunc_GetWidgetAtIndex_ReturnValue;
    params.K2Node_DynamicCast_AsUI_BP_Async_Load_Wrapper = (UUI_BP_AsyncLoadWrapper_C*)K2Node_DynamicCast_AsUI_BP_Async_Load_Wrapper;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_ShouldSkipPage_ShouldSkip = (bool)CallFunc_ShouldSkipPage_ShouldSkip;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::PrevPage(int32_t CurrentIndex, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_GetNumWidgets_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, int32_t CallFunc_SelectInt_ReturnValue, UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, UUI_BP_AsyncLoadWrapper_C* K2Node_DynamicCast_AsUI_BP_Async_Load_Wrapper, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ShouldSkipPage_ShouldSkip) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.PrevPage"));
    struct Params_PrevPage {
        int32_t CurrentIndex; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x8
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x10
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x14
        char pad_15[0x3];
        int32_t CallFunc_GetNumWidgets_ReturnValue; // 0x18
        int32_t CallFunc_Subtract_IntInt_ReturnValue_1; // 0x1c
        int32_t CallFunc_SelectInt_ReturnValue; // 0x20
        char pad_24[0x4];
        UWidget* CallFunc_GetWidgetAtIndex_ReturnValue; // 0x28
        UUI_BP_AsyncLoadWrapper_C* K2Node_DynamicCast_AsUI_BP_Async_Load_Wrapper; // 0x30
        bool K2Node_DynamicCast_bSuccess; // 0x38
        bool CallFunc_ShouldSkipPage_ShouldSkip; // 0x39
    }; // Size: 0x3a
    Params_PrevPage params{};
    params.CurrentIndex = (int32_t)CurrentIndex;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_GetNumWidgets_ReturnValue = (int32_t)CallFunc_GetNumWidgets_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue_1 = (int32_t)CallFunc_Subtract_IntInt_ReturnValue_1;
    params.CallFunc_SelectInt_ReturnValue = (int32_t)CallFunc_SelectInt_ReturnValue;
    params.CallFunc_GetWidgetAtIndex_ReturnValue = (UWidget*)CallFunc_GetWidgetAtIndex_ReturnValue;
    params.K2Node_DynamicCast_AsUI_BP_Async_Load_Wrapper = (UUI_BP_AsyncLoadWrapper_C*)K2Node_DynamicCast_AsUI_BP_Async_Load_Wrapper;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_ShouldSkipPage_ShouldSkip = (bool)CallFunc_ShouldSkipPage_ShouldSkip;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::HandleNavBarClicked(UUI_BP_NavBarButton_C* NavBarButton, bool& Handled, UUI_BP_AsyncLoadWrapper_C* NewMenu, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_1, bool CallFunc_GetInMenuTransition_ReturnValue, UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, UWidget* CallFunc_GetActiveWidget_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, int32_t CallFunc_GetChildIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_SelectInt_ReturnValue, FString CallFunc_SelectString_ReturnValue, UUI_BP_AsyncLoadWrapper_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, int32_t CallFunc_SelectInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.HandleNavBarClicked"));
    struct Params_HandleNavBarClicked {
        UUI_BP_NavBarButton_C* NavBarButton; // 0x0
        bool Handled; // 0x8
        char pad_9[0x7];
        UUI_BP_AsyncLoadWrapper_C* NewMenu; // 0x10
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x18
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue_1; // 0x20
        bool CallFunc_GetInMenuTransition_ReturnValue; // 0x28
        char pad_29[0x7];
        UWidget* CallFunc_GetActiveWidget_ReturnValue; // 0x30
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x38
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1; // 0x39
        char pad_3a[0x6];
        UWidget* CallFunc_GetActiveWidget_ReturnValue_1; // 0x40
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2; // 0x48
        char pad_49[0x3];
        int32_t CallFunc_GetChildIndex_ReturnValue; // 0x4c
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x50
        char pad_51[0x3];
        int32_t CallFunc_SelectInt_ReturnValue; // 0x54
        FString CallFunc_SelectString_ReturnValue; // 0x58
        UUI_BP_AsyncLoadWrapper_C* CallFunc_Map_Find_Value; // 0x68
        bool CallFunc_Map_Find_ReturnValue; // 0x70
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3; // 0x71
        char pad_72[0x2];
        int32_t CallFunc_SelectInt_ReturnValue_1; // 0x74
    }; // Size: 0x78
    Params_HandleNavBarClicked params{};
    params.NavBarButton = (UUI_BP_NavBarButton_C*)NavBarButton;
    params.Handled = (bool)Handled;
    params.NewMenu = (UUI_BP_AsyncLoadWrapper_C*)NewMenu;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_GetUIManagerPure_ReturnValue_1 = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue_1;
    params.CallFunc_GetInMenuTransition_ReturnValue = (bool)CallFunc_GetInMenuTransition_ReturnValue;
    params.CallFunc_GetActiveWidget_ReturnValue = (UWidget*)CallFunc_GetActiveWidget_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
    params.CallFunc_GetActiveWidget_ReturnValue_1 = (UWidget*)CallFunc_GetActiveWidget_ReturnValue_1;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
    params.CallFunc_GetChildIndex_ReturnValue = (int32_t)CallFunc_GetChildIndex_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_SelectInt_ReturnValue = (int32_t)CallFunc_SelectInt_ReturnValue;
    params.CallFunc_SelectString_ReturnValue = (FString)CallFunc_SelectString_ReturnValue;
    params.CallFunc_Map_Find_Value = (UUI_BP_AsyncLoadWrapper_C*)CallFunc_Map_Find_Value;
    params.CallFunc_Map_Find_ReturnValue = (bool)CallFunc_Map_Find_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue_3 = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue_3;
    params.CallFunc_SelectInt_ReturnValue_1 = (int32_t)CallFunc_SelectInt_ReturnValue_1;
    ProcessEvent(func, &params);
    Handled = params.Handled;
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Character_K2Node_ComponentBoundEvent_5_OnUnhoveredEventDispatcher__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Character_K2Node_ComponentBoundEvent_5_OnUnhoveredEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Character_K2Node_ComponentBoundEvent_5_OnUnhoveredEventDispatcher__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FieldGuide_btn_Character_K2Node_ComponentBoundEvent_5_OnUnhoveredEventDispatcher__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Inventory_K2Node_ComponentBoundEvent_2_OnUnhoveredEventDispatcher__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Inventory_K2Node_ComponentBoundEvent_2_OnUnhoveredEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Inventory_K2Node_ComponentBoundEvent_2_OnUnhoveredEventDispatcher__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FieldGuide_btn_Inventory_K2Node_ComponentBoundEvent_2_OnUnhoveredEventDispatcher__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::ChangeActivePage(UUI_BP_AsyncLoadWrapper_C* NewPage, int32_t PrevTabIndex, UUI_BP_AsyncLoadWrapper_C* ActiveWidget, UTabPageWidget* K2Node_DynamicCast_AsTab_Page_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCurrentTransitionAnIntro_ReturnValue, bool CallFunc_IsTransitionInProgress_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32_t CallFunc_GetPageIndex_Index, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, UUI_BP_NavBarButton_C* CallFunc_FindNavButtonFromMenu_Button, FString CallFunc_GetDisplayName_ReturnValue) {}
void UUI_BP_FieldGuide_C::StartStopLegendFill(int32_t LegendIndex, bool ShouldStart, ULegendItem* CallFunc_GetLegendItem_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.StartStopLegendFill"));
    struct Params_StartStopLegendFill {
        int32_t LegendIndex; // 0x0
        bool ShouldStart; // 0x4
        char pad_5[0x3];
        ULegendItem* CallFunc_GetLegendItem_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_StartStopLegendFill params{};
    params.LegendIndex = (int32_t)LegendIndex;
    params.ShouldStart = (bool)ShouldStart;
    params.CallFunc_GetLegendItem_ReturnValue = (ULegendItem*)CallFunc_GetLegendItem_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::OnNewLegendRequested(TArray<FLegendItemData>& NewLegend) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.OnNewLegendRequested"));
    struct Params_OnNewLegendRequested {
        TArray<FLegendItemData> NewLegend; // 0x0
    }; // Size: 0x10
    Params_OnNewLegendRequested params{};
    params.NewLegend = (TArray<FLegendItemData>)NewLegend;
    ProcessEvent(func, &params);
    NewLegend = params.NewLegend;
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Settings_K2Node_ComponentBoundEvent_21_OnHoveredEventDispatcher__DelegateSignature(UUI_BP_NavBarButton_C* Me) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Settings_K2Node_ComponentBoundEvent_21_OnHoveredEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Settings_K2Node_ComponentBoundEvent_21_OnHoveredEventDispatcher__DelegateSignature {
        UUI_BP_NavBarButton_C* Me; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_btn_Settings_K2Node_ComponentBoundEvent_21_OnHoveredEventDispatcher__DelegateSignature params{};
    params.Me = (UUI_BP_NavBarButton_C*)Me;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BindTabPageWidgetDelegates(UAsyncLoadWrapper* AsyncWrapper) {}
void UUI_BP_FieldGuide_C::SetLegend(TArray<FLegendItemData>& NewLegendData, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, FLegendItemData CallFunc_Array_Get_Item, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue) {}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Character_K2Node_ComponentBoundEvent_3_OnHoveredEventDispatcher__DelegateSignature(UUI_BP_NavBarButton_C* Me) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Character_K2Node_ComponentBoundEvent_3_OnHoveredEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Character_K2Node_ComponentBoundEvent_3_OnHoveredEventDispatcher__DelegateSignature {
        UUI_BP_NavBarButton_C* Me; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_btn_Character_K2Node_ComponentBoundEvent_3_OnHoveredEventDispatcher__DelegateSignature params{};
    params.Me = (UUI_BP_NavBarButton_C*)Me;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Settings_K2Node_ComponentBoundEvent_22_OnClickedEventDispatcher__DelegateSignature(UUI_BP_NavBarButton_C* Me) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Settings_K2Node_ComponentBoundEvent_22_OnClickedEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Settings_K2Node_ComponentBoundEvent_22_OnClickedEventDispatcher__DelegateSignature {
        UUI_BP_NavBarButton_C* Me; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_btn_Settings_K2Node_ComponentBoundEvent_22_OnClickedEventDispatcher__DelegateSignature params{};
    params.Me = (UUI_BP_NavBarButton_C*)Me;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Talents_K2Node_ComponentBoundEvent_6_OnHoveredEventDispatcher__DelegateSignature(UUI_BP_NavBarButton_C* Me) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Talents_K2Node_ComponentBoundEvent_6_OnHoveredEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Talents_K2Node_ComponentBoundEvent_6_OnHoveredEventDispatcher__DelegateSignature {
        UUI_BP_NavBarButton_C* Me; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_btn_Talents_K2Node_ComponentBoundEvent_6_OnHoveredEventDispatcher__DelegateSignature params{};
    params.Me = (UUI_BP_NavBarButton_C*)Me;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_18_ActionsScreenSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_18_ActionsScreenSelected__DelegateSignature"));
    struct Params_BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_18_ActionsScreenSelected__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_18_ActionsScreenSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Talents_K2Node_ComponentBoundEvent_7_OnClickedEventDispatcher__DelegateSignature(UUI_BP_NavBarButton_C* Me) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Talents_K2Node_ComponentBoundEvent_7_OnClickedEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Talents_K2Node_ComponentBoundEvent_7_OnClickedEventDispatcher__DelegateSignature {
        UUI_BP_NavBarButton_C* Me; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_btn_Talents_K2Node_ComponentBoundEvent_7_OnClickedEventDispatcher__DelegateSignature params{};
    params.Me = (UUI_BP_NavBarButton_C*)Me;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Talents_K2Node_ComponentBoundEvent_8_OnUnhoveredEventDispatcher__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Talents_K2Node_ComponentBoundEvent_8_OnUnhoveredEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Talents_K2Node_ComponentBoundEvent_8_OnUnhoveredEventDispatcher__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FieldGuide_btn_Talents_K2Node_ComponentBoundEvent_8_OnUnhoveredEventDispatcher__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Missions_K2Node_ComponentBoundEvent_10_OnClickedEventDispatcher__DelegateSignature(UUI_BP_NavBarButton_C* Me) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Missions_K2Node_ComponentBoundEvent_10_OnClickedEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Missions_K2Node_ComponentBoundEvent_10_OnClickedEventDispatcher__DelegateSignature {
        UUI_BP_NavBarButton_C* Me; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_btn_Missions_K2Node_ComponentBoundEvent_10_OnClickedEventDispatcher__DelegateSignature params{};
    params.Me = (UUI_BP_NavBarButton_C*)Me;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Missions_K2Node_ComponentBoundEvent_11_OnUnhoveredEventDispatcher__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Missions_K2Node_ComponentBoundEvent_11_OnUnhoveredEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Missions_K2Node_ComponentBoundEvent_11_OnUnhoveredEventDispatcher__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FieldGuide_btn_Missions_K2Node_ComponentBoundEvent_11_OnUnhoveredEventDispatcher__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_FG_IndexPage_K2Node_ComponentBoundEvent_23_NewButtonLegendRequested__DelegateSignature(TArray<FLegendItemData>& NewLegend) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_FG_IndexPage_K2Node_ComponentBoundEvent_23_NewButtonLegendRequested__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_FG_IndexPage_K2Node_ComponentBoundEvent_23_NewButtonLegendRequested__DelegateSignature {
        TArray<FLegendItemData> NewLegend; // 0x0
    }; // Size: 0x10
    Params_BndEvt__UI_BP_FieldGuide_FG_IndexPage_K2Node_ComponentBoundEvent_23_NewButtonLegendRequested__DelegateSignature params{};
    params.NewLegend = (TArray<FLegendItemData>)NewLegend;
    ProcessEvent(func, &params);
    NewLegend = params.NewLegend;
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Map_K2Node_ComponentBoundEvent_12_OnHoveredEventDispatcher__DelegateSignature(UUI_BP_NavBarButton_C* Me) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Map_K2Node_ComponentBoundEvent_12_OnHoveredEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Map_K2Node_ComponentBoundEvent_12_OnHoveredEventDispatcher__DelegateSignature {
        UUI_BP_NavBarButton_C* Me; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_btn_Map_K2Node_ComponentBoundEvent_12_OnHoveredEventDispatcher__DelegateSignature params{};
    params.Me = (UUI_BP_NavBarButton_C*)Me;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Mail_K2Node_ComponentBoundEvent_15_OnHoveredEventDispatcher__DelegateSignature(UUI_BP_NavBarButton_C* Me) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Mail_K2Node_ComponentBoundEvent_15_OnHoveredEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Mail_K2Node_ComponentBoundEvent_15_OnHoveredEventDispatcher__DelegateSignature {
        UUI_BP_NavBarButton_C* Me; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_btn_Mail_K2Node_ComponentBoundEvent_15_OnHoveredEventDispatcher__DelegateSignature params{};
    params.Me = (UUI_BP_NavBarButton_C*)Me;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::ExecuteUbergraph_UI_BP_FieldGuide(int32_t EntryPoint) {}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Mail_K2Node_ComponentBoundEvent_16_OnClickedEventDispatcher__DelegateSignature(UUI_BP_NavBarButton_C* Me) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Mail_K2Node_ComponentBoundEvent_16_OnClickedEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Mail_K2Node_ComponentBoundEvent_16_OnClickedEventDispatcher__DelegateSignature {
        UUI_BP_NavBarButton_C* Me; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_btn_Mail_K2Node_ComponentBoundEvent_16_OnClickedEventDispatcher__DelegateSignature params{};
    params.Me = (UUI_BP_NavBarButton_C*)Me;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Actions_K2Node_ComponentBoundEvent_24_OnHoveredEventDispatcher__DelegateSignature(UUI_BP_NavBarButton_C* Me) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Actions_K2Node_ComponentBoundEvent_24_OnHoveredEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Actions_K2Node_ComponentBoundEvent_24_OnHoveredEventDispatcher__DelegateSignature {
        UUI_BP_NavBarButton_C* Me; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_btn_Actions_K2Node_ComponentBoundEvent_24_OnHoveredEventDispatcher__DelegateSignature params{};
    params.Me = (UUI_BP_NavBarButton_C*)Me;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Mail_K2Node_ComponentBoundEvent_17_OnUnhoveredEventDispatcher__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Mail_K2Node_ComponentBoundEvent_17_OnUnhoveredEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Mail_K2Node_ComponentBoundEvent_17_OnUnhoveredEventDispatcher__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FieldGuide_btn_Mail_K2Node_ComponentBoundEvent_17_OnUnhoveredEventDispatcher__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_NavBarLeftButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_NavBarLeftButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_NavBarLeftButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FieldGuide_NavBarLeftButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Compendium_K2Node_ComponentBoundEvent_18_OnHoveredEventDispatcher__DelegateSignature(UUI_BP_NavBarButton_C* Me) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Compendium_K2Node_ComponentBoundEvent_18_OnHoveredEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Compendium_K2Node_ComponentBoundEvent_18_OnHoveredEventDispatcher__DelegateSignature {
        UUI_BP_NavBarButton_C* Me; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_btn_Compendium_K2Node_ComponentBoundEvent_18_OnHoveredEventDispatcher__DelegateSignature params{};
    params.Me = (UUI_BP_NavBarButton_C*)Me;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Compendium_K2Node_ComponentBoundEvent_20_OnUnhoveredEventDispatcher__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Compendium_K2Node_ComponentBoundEvent_20_OnUnhoveredEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Compendium_K2Node_ComponentBoundEvent_20_OnUnhoveredEventDispatcher__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FieldGuide_btn_Compendium_K2Node_ComponentBoundEvent_20_OnUnhoveredEventDispatcher__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::DelayLeavingFieldGuide(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.DelayLeavingFieldGuide"));
    struct Params_DelayLeavingFieldGuide {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_DelayLeavingFieldGuide params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Settings_K2Node_ComponentBoundEvent_23_OnUnhoveredEventDispatcher__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Settings_K2Node_ComponentBoundEvent_23_OnUnhoveredEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Settings_K2Node_ComponentBoundEvent_23_OnUnhoveredEventDispatcher__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FieldGuide_btn_Settings_K2Node_ComponentBoundEvent_23_OnUnhoveredEventDispatcher__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Actions_K2Node_ComponentBoundEvent_25_OnClickedEventDispatcher__DelegateSignature(UUI_BP_NavBarButton_C* Me) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Actions_K2Node_ComponentBoundEvent_25_OnClickedEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Actions_K2Node_ComponentBoundEvent_25_OnClickedEventDispatcher__DelegateSignature {
        UUI_BP_NavBarButton_C* Me; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_btn_Actions_K2Node_ComponentBoundEvent_25_OnClickedEventDispatcher__DelegateSignature params{};
    params.Me = (UUI_BP_NavBarButton_C*)Me;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_btn_Actions_K2Node_ComponentBoundEvent_26_OnUnhoveredEventDispatcher__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_btn_Actions_K2Node_ComponentBoundEvent_26_OnUnhoveredEventDispatcher__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_btn_Actions_K2Node_ComponentBoundEvent_26_OnUnhoveredEventDispatcher__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FieldGuide_btn_Actions_K2Node_ComponentBoundEvent_26_OnUnhoveredEventDispatcher__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_HiddenButtonForHoverEvents_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_HiddenButtonForHoverEvents_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_HiddenButtonForHoverEvents_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FieldGuide_HiddenButtonForHoverEvents_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_10_GearScreenSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_10_GearScreenSelected__DelegateSignature"));
    struct Params_BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_10_GearScreenSelected__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_10_GearScreenSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_11_InventoryScreenSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_11_InventoryScreenSelected__DelegateSignature"));
    struct Params_BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_11_InventoryScreenSelected__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_11_InventoryScreenSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_12_TalentsScreenSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_12_TalentsScreenSelected__DelegateSignature"));
    struct Params_BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_12_TalentsScreenSelected__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_12_TalentsScreenSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_13_SettingsScreenSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_13_SettingsScreenSelected__DelegateSignature"));
    struct Params_BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_13_SettingsScreenSelected__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_13_SettingsScreenSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_14_MapScreenSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_14_MapScreenSelected__DelegateSignature"));
    struct Params_BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_14_MapScreenSelected__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_14_MapScreenSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_15_CollectionsScreenSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_15_CollectionsScreenSelected__DelegateSignature"));
    struct Params_BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_15_CollectionsScreenSelected__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_15_CollectionsScreenSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_16_OwlMailScreenSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_16_OwlMailScreenSelected__DelegateSignature"));
    struct Params_BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_16_OwlMailScreenSelected__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_16_OwlMailScreenSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_17_QuestsScreenSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_17_QuestsScreenSelected__DelegateSignature"));
    struct Params_BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_17_QuestsScreenSelected__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Async_FG_Index_K2Node_ComponentBoundEvent_17_QuestsScreenSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_Async_FG_Inventory_K2Node_ComponentBoundEvent_1_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_Async_FG_Inventory_K2Node_ComponentBoundEvent_1_AsyncWrapperClassLoadEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_Async_FG_Inventory_K2Node_ComponentBoundEvent_1_AsyncWrapperClassLoadEvent__DelegateSignature {
        UAsyncLoadWrapper* SelfReference; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_Async_FG_Inventory_K2Node_ComponentBoundEvent_1_AsyncWrapperClassLoadEvent__DelegateSignature params{};
    params.SelfReference = (UAsyncLoadWrapper*)SelfReference;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_MenuWidgetSwitcher_K2Node_ComponentBoundEvent_2_WidgetActiveEvent__DelegateSignature(UUserWidget* ActiveWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_MenuWidgetSwitcher_K2Node_ComponentBoundEvent_2_WidgetActiveEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_MenuWidgetSwitcher_K2Node_ComponentBoundEvent_2_WidgetActiveEvent__DelegateSignature {
        UUserWidget* ActiveWidget; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_MenuWidgetSwitcher_K2Node_ComponentBoundEvent_2_WidgetActiveEvent__DelegateSignature params{};
    params.ActiveWidget = (UUserWidget*)ActiveWidget;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_HiddenButtonForHoverEvents_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_HiddenButtonForHoverEvents_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_HiddenButtonForHoverEvents_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FieldGuide_HiddenButtonForHoverEvents_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::DelayShowingIndex(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.DelayShowingIndex"));
    struct Params_DelayShowingIndex {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_DelayShowingIndex params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::DelayLeavingMapDir(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.DelayLeavingMapDir"));
    struct Params_DelayLeavingMapDir {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_DelayLeavingMapDir params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::ClosePauseMenu(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.ClosePauseMenu"));
    struct Params_ClosePauseMenu {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_ClosePauseMenu params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_Async_FG_Quests_K2Node_ComponentBoundEvent_5_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_Async_FG_Quests_K2Node_ComponentBoundEvent_5_AsyncWrapperClassLoadEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_Async_FG_Quests_K2Node_ComponentBoundEvent_5_AsyncWrapperClassLoadEvent__DelegateSignature {
        UAsyncLoadWrapper* SelfReference; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_Async_FG_Quests_K2Node_ComponentBoundEvent_5_AsyncWrapperClassLoadEvent__DelegateSignature params{};
    params.SelfReference = (UAsyncLoadWrapper*)SelfReference;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_Async_FG_Talents_K2Node_ComponentBoundEvent_8_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_Async_FG_Talents_K2Node_ComponentBoundEvent_8_AsyncWrapperClassLoadEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_Async_FG_Talents_K2Node_ComponentBoundEvent_8_AsyncWrapperClassLoadEvent__DelegateSignature {
        UAsyncLoadWrapper* SelfReference; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_Async_FG_Talents_K2Node_ComponentBoundEvent_8_AsyncWrapperClassLoadEvent__DelegateSignature params{};
    params.SelfReference = (UAsyncLoadWrapper*)SelfReference;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::UpdateMenuLegend0(TArray<FLegendItemData>& NewData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.UpdateMenuLegend"));
    struct Params_UpdateMenuLegend {
        TArray<FLegendItemData> NewData; // 0x0
    }; // Size: 0x10
    Params_UpdateMenuLegend params{};
    params.NewData = (TArray<FLegendItemData>)NewData;
    ProcessEvent(func, &params);
    NewData = params.NewData;
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_Async_FG_Actions_K2Node_ComponentBoundEvent_5_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_Async_FG_Actions_K2Node_ComponentBoundEvent_5_AsyncWrapperClassLoadEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_Async_FG_Actions_K2Node_ComponentBoundEvent_5_AsyncWrapperClassLoadEvent__DelegateSignature {
        UAsyncLoadWrapper* SelfReference; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_Async_FG_Actions_K2Node_ComponentBoundEvent_5_AsyncWrapperClassLoadEvent__DelegateSignature params{};
    params.SelfReference = (UAsyncLoadWrapper*)SelfReference;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_Async_FG_OwlMail_K2Node_ComponentBoundEvent_19_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_Async_FG_OwlMail_K2Node_ComponentBoundEvent_19_AsyncWrapperClassLoadEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_Async_FG_OwlMail_K2Node_ComponentBoundEvent_19_AsyncWrapperClassLoadEvent__DelegateSignature {
        UAsyncLoadWrapper* SelfReference; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_Async_FG_OwlMail_K2Node_ComponentBoundEvent_19_AsyncWrapperClassLoadEvent__DelegateSignature params{};
    params.SelfReference = (UAsyncLoadWrapper*)SelfReference;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_Async_FG_Settings_K2Node_ComponentBoundEvent_20_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_Async_FG_Settings_K2Node_ComponentBoundEvent_20_AsyncWrapperClassLoadEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_Async_FG_Settings_K2Node_ComponentBoundEvent_20_AsyncWrapperClassLoadEvent__DelegateSignature {
        UAsyncLoadWrapper* SelfReference; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FieldGuide_Async_FG_Settings_K2Node_ComponentBoundEvent_20_AsyncWrapperClassLoadEvent__DelegateSignature params{};
    params.SelfReference = (UAsyncLoadWrapper*)SelfReference;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_NavBarRightButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_NavBarRightButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_NavBarRightButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FieldGuide_NavBarRightButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::ShowHDRActor(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.ShowHDRActor"));
    struct Params_ShowHDRActor {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ShowHDRActor params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::HideHDRActor(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.HideHDRActor"));
    struct Params_HideHDRActor {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_HideHDRActor params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::BndEvt__UI_BP_FieldGuide_FG_IndexPage_K2Node_ComponentBoundEvent_24_MenuReadLegendRequested__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.BndEvt__UI_BP_FieldGuide_FG_IndexPage_K2Node_ComponentBoundEvent_24_MenuReadLegendRequested__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FieldGuide_FG_IndexPage_K2Node_ComponentBoundEvent_24_MenuReadLegendRequested__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FieldGuide_FG_IndexPage_K2Node_ComponentBoundEvent_24_MenuReadLegendRequested__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::MenuReadLegend0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.MenuReadLegend"));
    struct Params_MenuReadLegend {
    }; // Size: 0x0
    Params_MenuReadLegend params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::ChangeMenuPage0(EUMGInputAction MenuPage) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.ChangeMenuPage"));
    struct Params_ChangeMenuPage {
        EUMGInputAction MenuPage; // 0x0
    }; // Size: 0x1
    Params_ChangeMenuPage params{};
    params.MenuPage = (EUMGInputAction)MenuPage;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::ShowFieldGuideBackground(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.ShowFieldGuideBackground"));
    struct Params_ShowFieldGuideBackground {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ShowFieldGuideBackground params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuide_C::MapReady(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FieldGuide.UI_BP_FieldGuide_C.MapReady"));
    struct Params_MapReady {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_MapReady params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
