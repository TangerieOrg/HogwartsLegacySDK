#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UOverlaySlot.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UTabPageWidget.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_Settings_GamepadControls_C.hpp"
#include "UVerticalBox.hpp"
#include "UWidgetSwitcher.hpp"
void UUI_BP_Settings_GamepadControls_C::SetBroomLayout(bool IsSouthpaw, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, FMargin K2Node_MakeStruct_Margin_2, FMargin K2Node_MakeStruct_Margin_3, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_GamepadControls.UI_BP_Settings_GamepadControls_C.SetBroomLayout"));
    struct Params_SetBroomLayout {
        bool IsSouthpaw; // 0x0
        char pad_1[0x3];
        FMargin K2Node_MakeStruct_Margin; // 0x4
        FMargin K2Node_MakeStruct_Margin_1; // 0x14
        FMargin K2Node_MakeStruct_Margin_2; // 0x24
        FMargin K2Node_MakeStruct_Margin_3; // 0x34
        char pad_44[0x4];
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue; // 0x48
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1; // 0x50
    }; // Size: 0x58
    Params_SetBroomLayout params{};
    params.IsSouthpaw = (bool)IsSouthpaw;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.K2Node_MakeStruct_Margin_1 = (FMargin)K2Node_MakeStruct_Margin_1;
    params.K2Node_MakeStruct_Margin_2 = (FMargin)K2Node_MakeStruct_Margin_2;
    params.K2Node_MakeStruct_Margin_3 = (FMargin)K2Node_MakeStruct_Margin_3;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue_1 = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue_1;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_Settings_GamepadControls_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
UUI_BP_Settings_GamepadControls_C* UUI_BP_Settings_GamepadControls_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/Settings/UI_BP_Settings_GamepadControls.UI_BP_Settings_GamepadControls_C");
    return (UUI_BP_Settings_GamepadControls_C*)res;
}
void UUI_BP_Settings_GamepadControls_C::RefreshLayout(bool CallFunc_GetGamepadSouthpaw_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_GamepadControls.UI_BP_Settings_GamepadControls_C.RefreshLayout"));
    struct Params_RefreshLayout {
        bool CallFunc_GetGamepadSouthpaw_ReturnValue; // 0x0
    }; // Size: 0x1
    Params_RefreshLayout params{};
    params.CallFunc_GetGamepadSouthpaw_ReturnValue = (bool)CallFunc_GetGamepadSouthpaw_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_GamepadControls_C::SetMountFlyingLayout(bool IsSouthpaw, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, FMargin K2Node_MakeStruct_Margin_2, FMargin K2Node_MakeStruct_Margin_3, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_GamepadControls.UI_BP_Settings_GamepadControls_C.SetMountFlyingLayout"));
    struct Params_SetMountFlyingLayout {
        bool IsSouthpaw; // 0x0
        char pad_1[0x3];
        FMargin K2Node_MakeStruct_Margin; // 0x4
        FMargin K2Node_MakeStruct_Margin_1; // 0x14
        FMargin K2Node_MakeStruct_Margin_2; // 0x24
        FMargin K2Node_MakeStruct_Margin_3; // 0x34
        char pad_44[0x4];
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue; // 0x48
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1; // 0x50
    }; // Size: 0x58
    Params_SetMountFlyingLayout params{};
    params.IsSouthpaw = (bool)IsSouthpaw;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.K2Node_MakeStruct_Margin_1 = (FMargin)K2Node_MakeStruct_Margin_1;
    params.K2Node_MakeStruct_Margin_2 = (FMargin)K2Node_MakeStruct_Margin_2;
    params.K2Node_MakeStruct_Margin_3 = (FMargin)K2Node_MakeStruct_Margin_3;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue_1 = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_GamepadControls_C::SetMountGroundLayout(bool IsSouthpaw, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, FMargin K2Node_MakeStruct_Margin_2, FMargin K2Node_MakeStruct_Margin_3, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_GamepadControls.UI_BP_Settings_GamepadControls_C.SetMountGroundLayout"));
    struct Params_SetMountGroundLayout {
        bool IsSouthpaw; // 0x0
        char pad_1[0x3];
        FMargin K2Node_MakeStruct_Margin; // 0x4
        FMargin K2Node_MakeStruct_Margin_1; // 0x14
        FMargin K2Node_MakeStruct_Margin_2; // 0x24
        FMargin K2Node_MakeStruct_Margin_3; // 0x34
        char pad_44[0x4];
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue; // 0x48
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1; // 0x50
    }; // Size: 0x58
    Params_SetMountGroundLayout params{};
    params.IsSouthpaw = (bool)IsSouthpaw;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.K2Node_MakeStruct_Margin_1 = (FMargin)K2Node_MakeStruct_Margin_1;
    params.K2Node_MakeStruct_Margin_2 = (FMargin)K2Node_MakeStruct_Margin_2;
    params.K2Node_MakeStruct_Margin_3 = (FMargin)K2Node_MakeStruct_Margin_3;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue_1 = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_GamepadControls_C::SetGameplayLayout(bool IsSouthpaw, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, FMargin K2Node_MakeStruct_Margin_2, FMargin K2Node_MakeStruct_Margin_3, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_GamepadControls.UI_BP_Settings_GamepadControls_C.SetGameplayLayout"));
    struct Params_SetGameplayLayout {
        bool IsSouthpaw; // 0x0
        char pad_1[0x3];
        FMargin K2Node_MakeStruct_Margin; // 0x4
        FMargin K2Node_MakeStruct_Margin_1; // 0x14
        FMargin K2Node_MakeStruct_Margin_2; // 0x24
        FMargin K2Node_MakeStruct_Margin_3; // 0x34
        char pad_44[0x4];
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue; // 0x48
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1; // 0x50
    }; // Size: 0x58
    Params_SetGameplayLayout params{};
    params.IsSouthpaw = (bool)IsSouthpaw;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.K2Node_MakeStruct_Margin_1 = (FMargin)K2Node_MakeStruct_Margin_1;
    params.K2Node_MakeStruct_Margin_2 = (FMargin)K2Node_MakeStruct_Margin_2;
    params.K2Node_MakeStruct_Margin_3 = (FMargin)K2Node_MakeStruct_Margin_3;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue_1 = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_GamepadControls_C::UpdateGamepadImage(bool CallFunc_IsGamepadTypeConnected_ReturnValue, bool CallFunc_IsGamepadTypeConnected_ReturnValue_1, bool CallFunc_IsGamepadTypeConnected_ReturnValue_2, FString CallFunc_GetPlatformName_ReturnValue, bool K2Node_SwitchString_CmpSuccess, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_IsGamepadTypeConnected_ReturnValue_3, bool CallFunc_IsSteamRunningOnSteamDeck_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_2, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_3, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_4, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_5, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_6) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_GamepadControls.UI_BP_Settings_GamepadControls_C.UpdateGamepadImage"));
    struct Params_UpdateGamepadImage {
        bool CallFunc_IsGamepadTypeConnected_ReturnValue; // 0x0
        bool CallFunc_IsGamepadTypeConnected_ReturnValue_1; // 0x1
        bool CallFunc_IsGamepadTypeConnected_ReturnValue_2; // 0x2
        char pad_3[0x5];
        FString CallFunc_GetPlatformName_ReturnValue; // 0x8
        bool K2Node_SwitchString_CmpSuccess; // 0x18
        char pad_19[0x7];
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x20
        bool CallFunc_IsGamepadTypeConnected_ReturnValue_3; // 0x28
        bool CallFunc_IsSteamRunningOnSteamDeck_ReturnValue; // 0x29
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x2a
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1; // 0x2b
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue_2; // 0x2c
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue_3; // 0x2d
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue_4; // 0x2e
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue_5; // 0x2f
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue_6; // 0x30
    }; // Size: 0x31
    Params_UpdateGamepadImage params{};
    params.CallFunc_IsGamepadTypeConnected_ReturnValue = (bool)CallFunc_IsGamepadTypeConnected_ReturnValue;
    params.CallFunc_IsGamepadTypeConnected_ReturnValue_1 = (bool)CallFunc_IsGamepadTypeConnected_ReturnValue_1;
    params.CallFunc_IsGamepadTypeConnected_ReturnValue_2 = (bool)CallFunc_IsGamepadTypeConnected_ReturnValue_2;
    params.CallFunc_GetPlatformName_ReturnValue = (FString)CallFunc_GetPlatformName_ReturnValue;
    params.K2Node_SwitchString_CmpSuccess = (bool)K2Node_SwitchString_CmpSuccess;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_IsGamepadTypeConnected_ReturnValue_3 = (bool)CallFunc_IsGamepadTypeConnected_ReturnValue_3;
    params.CallFunc_IsSteamRunningOnSteamDeck_ReturnValue = (bool)CallFunc_IsSteamRunningOnSteamDeck_ReturnValue;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue_1 = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue_1;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue_2 = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue_2;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue_3 = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue_3;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue_4 = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue_4;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue_5 = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue_5;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue_6 = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue_6;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_GamepadControls_C::SwitchCategories(int32_t Direction, int32_t Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue, FString CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_GamepadControls.UI_BP_Settings_GamepadControls_C.SwitchCategories"));
    struct Params_SwitchCategories {
        int32_t Direction; // 0x0
        int32_t Temp_int_Variable; // 0x4
        bool K2Node_SwitchInteger_CmpSuccess; // 0x8
        char pad_9[0x3];
        int32_t Temp_int_Variable_1; // 0xc
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x10
        char pad_14[0x4];
        FString CallFunc_Array_Get_Item; // 0x18
        bool CallFunc_Less_IntInt_ReturnValue; // 0x28
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x29
        char pad_2a[0x2];
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x2c
    }; // Size: 0x30
    Params_SwitchCategories params{};
    params.Direction = (int32_t)Direction;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.K2Node_SwitchInteger_CmpSuccess = (bool)K2Node_SwitchInteger_CmpSuccess;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (FString)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_GamepadControls_C::InitControlCategories(FString CallFunc_Array_Get_Item) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_GamepadControls.UI_BP_Settings_GamepadControls_C.InitControlCategories"));
    struct Params_InitControlCategories {
        FString CallFunc_Array_Get_Item; // 0x0
    }; // Size: 0x10
    Params_InitControlCategories params{};
    params.CallFunc_Array_Get_Item = (FString)CallFunc_Array_Get_Item;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_GamepadControls_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_GamepadControls.UI_BP_Settings_GamepadControls_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_GamepadControls_C::OnInitialized() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_GamepadControls.UI_BP_Settings_GamepadControls_C.OnInitialized"));
    struct Params_OnInitialized {
    }; // Size: 0x0
    Params_OnInitialized params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_GamepadControls_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_GamepadControls.UI_BP_Settings_GamepadControls_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_GamepadControls_C::RefreshButtonCallouts(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_GamepadControls.UI_BP_Settings_GamepadControls_C.RefreshButtonCallouts"));
    struct Params_RefreshButtonCallouts {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_RefreshButtonCallouts params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_GamepadControls_C::ExecuteUbergraph_UI_BP_Settings_GamepadControls(int32_t EntryPoint) {}
