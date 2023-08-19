#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "ULegend.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UPopupScreen.hpp"
#include "UUIManager.hpp"
#include "UUIOnlineManager.hpp"
#include "UUI_BP_LoadMenu_C.hpp"
#include "UUI_BP_LoadSaveDetails_C.hpp"
#include "UUI_BP_SavedGameButton_C.hpp"
#include "UUI_BP_SimpleScrollBox_C.hpp"
#include "UVerticalBox.hpp"
#include "UVerticalBoxSlot.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_LoadMenu_C* UUI_BP_LoadMenu_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/UI_BP_LoadMenu.UI_BP_LoadMenu_C");
    return (UUI_BP_LoadMenu_C*)res;
}
TArray<FString> UUI_BP_LoadMenu_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1) {}
void UUI_BP_LoadMenu_C::OnLoadConfirmPopupClosed(UPopupScreen* PopupScreen, int32_t CompletionActionIndex, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, FString CallFunc_GetFileName_FileName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_LoadMenu.UI_BP_LoadMenu_C.OnLoadConfirmPopupClosed"));
    struct Params_OnLoadConfirmPopupClosed {
        UPopupScreen* PopupScreen; // 0x0
        int32_t CompletionActionIndex; // 0x8
        char pad_c[0x4];
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x10
        bool K2Node_SwitchInteger_CmpSuccess; // 0x18
        char pad_19[0x7];
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue_1; // 0x20
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x28
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x2c
        FString CallFunc_GetFileName_FileName; // 0x30
    }; // Size: 0x40
    Params_OnLoadConfirmPopupClosed params{};
    params.PopupScreen = (UPopupScreen*)PopupScreen;
    params.CompletionActionIndex = (int32_t)CompletionActionIndex;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.K2Node_SwitchInteger_CmpSuccess = (bool)K2Node_SwitchInteger_CmpSuccess;
    params.CallFunc_GetUIManagerPure_ReturnValue_1 = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue_1;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_GetFileName_FileName = (FString)CallFunc_GetFileName_FileName;
    ProcessEvent(func, &params);
}
void UUI_BP_LoadMenu_C::SetLoadSaveData(int32_t CharacterID, int32_t NumSaves, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable) {}
void UUI_BP_LoadMenu_C::MenuButtonUnhovered(UUI_BP_SavedGameButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_LoadMenu.UI_BP_LoadMenu_C.MenuButtonUnhovered"));
    struct Params_MenuButtonUnhovered {
        UUI_BP_SavedGameButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_MenuButtonUnhovered params{};
    params.Button = (UUI_BP_SavedGameButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_LoadMenu_C::MenuButtonHovered(UUI_BP_SavedGameButton_C* Button, FLegendItemData TempLegendData) {}
void UUI_BP_LoadMenu_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_LoadMenu.UI_BP_LoadMenu_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_LoadMenu_C::MenuButtonSelected(UUI_BP_SavedGameButton_C* Button, UUIOnlineManager* CallFunc_GetUIOnlineManagerPure_ReturnValue, bool CallFunc_IsIntroSave_bIsIntroSave, bool CallFunc_IsFullGameInstalled_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_IsInFrontendLevel_ReturnValue, FString CallFunc_GetFileName_FileName, FString CallFunc_GetSaveWarningString_SaveWarning) {}
void UUI_BP_LoadMenu_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_LoadMenu.UI_BP_LoadMenu_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_LoadMenu_C::ExecuteUbergraph_UI_BP_LoadMenu(int32_t EntryPoint, UUI_BP_SavedGameButton_C* CallFunc_Create_ReturnValue, int32_t Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, FMargin K2Node_MakeStruct_Margin, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_LoadMenu.UI_BP_LoadMenu_C.ExecuteUbergraph_UI_BP_LoadMenu"));
    struct Params_ExecuteUbergraph_UI_BP_LoadMenu {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UUI_BP_SavedGameButton_C* CallFunc_Create_ReturnValue; // 0x8
        int32_t Temp_int_Variable; // 0x10
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x14
        char pad_15[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x18
        bool K2Node_Event_IsDesignTime; // 0x1c
        char pad_1d[0x3];
        FMargin K2Node_MakeStruct_Margin; // 0x20
        UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue; // 0x30
    }; // Size: 0x38
    Params_ExecuteUbergraph_UI_BP_LoadMenu params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_Create_ReturnValue = (UUI_BP_SavedGameButton_C*)CallFunc_Create_ReturnValue;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.CallFunc_AddChildToVerticalBox_ReturnValue = (UVerticalBoxSlot*)CallFunc_AddChildToVerticalBox_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_LoadMenu_C::OnLoadSave__DelegateSignature(FString Filename, int32_t CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_LoadMenu.UI_BP_LoadMenu_C.OnLoadSave__DelegateSignature"));
    struct Params_OnLoadSave__DelegateSignature {
        FString Filename; // 0x0
        int32_t CharacterID; // 0x10
    }; // Size: 0x14
    Params_OnLoadSave__DelegateSignature params{};
    params.Filename = (FString)Filename;
    params.CharacterID = (int32_t)CharacterID;
    ProcessEvent(func, &params);
}
