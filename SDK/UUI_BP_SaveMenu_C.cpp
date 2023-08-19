#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSaveGameInfo.hpp"
#include "UFieldGuideMenu.hpp"
#include "UFunction.hpp"
#include "ULegend.hpp"
#include "UPhoenixTextBlock.hpp"
#include "USaveGameWidget.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_SaveMenu_C.hpp"
#include "UUI_BP_SavedGameButton_C.hpp"
#include "UVerticalBox.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_SaveMenu_C::RefreshButtons(TArray<FSaveGameInfo>& SaveInfo, UUI_BP_SavedGameButton_C* CurrentButton, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FSaveGameInfo CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, UUI_BP_SavedGameButton_C* CallFunc_Array_Get_Item_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SaveMenu.UI_BP_SaveMenu_C.RefreshButtons"));
    struct Params_RefreshButtons {
        TArray<FSaveGameInfo> SaveInfo; // 0x0
        UUI_BP_SavedGameButton_C* CurrentButton; // 0x10
        int32_t CallFunc_Array_Length_ReturnValue; // 0x18
        int32_t Temp_int_Array_Index_Variable; // 0x1c
        int32_t Temp_int_Loop_Counter_Variable; // 0x20
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x24
        FSaveGameInfo CallFunc_Array_Get_Item; // 0x28
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0xa0
        bool CallFunc_Less_IntInt_ReturnValue; // 0xa4
        char pad_a5[0x3];
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0xa8
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0xac
        char pad_ad[0x3];
        UUI_BP_SavedGameButton_C* CallFunc_Array_Get_Item_1; // 0xb0
    }; // Size: 0xb8
    Params_RefreshButtons params{};
    params.SaveInfo = (TArray<FSaveGameInfo>)SaveInfo;
    params.CurrentButton = (UUI_BP_SavedGameButton_C*)CurrentButton;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (FSaveGameInfo)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item_1 = (UUI_BP_SavedGameButton_C*)CallFunc_Array_Get_Item_1;
    ProcessEvent(func, &params);
    SaveInfo = params.SaveInfo;
}
void UUI_BP_SaveMenu_C::MenuButtonPressed(UUI_BP_SavedGameButton_C* Button, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SaveMenu.UI_BP_SaveMenu_C.MenuButtonPressed"));
    struct Params_MenuButtonPressed {
        UUI_BP_SavedGameButton_C* Button; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x8
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0xc
    }; // Size: 0x10
    Params_MenuButtonPressed params{};
    params.Button = (UUI_BP_SavedGameButton_C*)Button;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_SaveMenu_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue) {}
UUI_BP_SaveMenu_C* UUI_BP_SaveMenu_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/UI_BP_SaveMenu.UI_BP_SaveMenu_C");
    return (UUI_BP_SaveMenu_C*)res;
}
void UUI_BP_SaveMenu_C::InitSlotButtons(int32_t Temp_int_Array_Index_Variable, TArray<FSaveGameInfo>& CallFunc_GetUserSavesBySlot_SaveData) {}
bool UUI_BP_SaveMenu_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SaveMenu.UI_BP_SaveMenu_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        char pad_3[0x1];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x8
        char pad_9[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0xc
        int32_t CallFunc_PostEventAtLocation_ReturnValue_2; // 0x10
        bool CallFunc_IsValid_ReturnValue; // 0x14
        bool K2Node_SwitchEnum_CmpSuccess; // 0x15
    }; // Size: 0x16
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_PostEventAtLocation_ReturnValue_2 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_2;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_SaveMenu_C::OnSaveFailed__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SaveMenu.UI_BP_SaveMenu_C.OnSaveFailed__DelegateSignature"));
    struct Params_OnSaveFailed__DelegateSignature {
    }; // Size: 0x0
    Params_OnSaveFailed__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SaveMenu_C::SaveToSlot(UUI_BP_SavedGameButton_C* SaveButton, int32_t CallFunc_PostEventAtLocation_ReturnValue, FString CallFunc_GetFileName_FileName, int32_t CallFunc_ParseSlotNumFromName_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_SaveGameInSlot_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SaveMenu.UI_BP_SaveMenu_C.SaveToSlot"));
    struct Params_SaveToSlot {
        UUI_BP_SavedGameButton_C* SaveButton; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x8
        char pad_c[0x4];
        FString CallFunc_GetFileName_FileName; // 0x10
        int32_t CallFunc_ParseSlotNumFromName_ReturnValue; // 0x20
        char pad_24[0x4];
        FString CallFunc_Conv_IntToString_ReturnValue; // 0x28
        bool CallFunc_SaveGameInSlot_ReturnValue; // 0x38
        char pad_39[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x40
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x50
    }; // Size: 0x60
    Params_SaveToSlot params{};
    params.SaveButton = (UUI_BP_SavedGameButton_C*)SaveButton;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_GetFileName_FileName = (FString)CallFunc_GetFileName_FileName;
    params.CallFunc_ParseSlotNumFromName_ReturnValue = (int32_t)CallFunc_ParseSlotNumFromName_ReturnValue;
    params.CallFunc_Conv_IntToString_ReturnValue = (FString)CallFunc_Conv_IntToString_ReturnValue;
    params.CallFunc_SaveGameInSlot_ReturnValue = (bool)CallFunc_SaveGameInSlot_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_SaveMenu_C::StartStopOverwrite__DelegateSignature(bool Start, int32_t LegendIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SaveMenu.UI_BP_SaveMenu_C.StartStopOverwrite__DelegateSignature"));
    struct Params_StartStopOverwrite__DelegateSignature {
        bool Start; // 0x0
        char pad_1[0x3];
        int32_t LegendIndex; // 0x4
    }; // Size: 0x8
    Params_StartStopOverwrite__DelegateSignature params{};
    params.Start = (bool)Start;
    params.LegendIndex = (int32_t)LegendIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_SaveMenu_C::OverwriteHoveredSave(int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SaveMenu.UI_BP_SaveMenu_C.OverwriteHoveredSave"));
    struct Params_OverwriteHoveredSave {
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x4
    }; // Size: 0x5
    Params_OverwriteHoveredSave params{};
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_SaveMenu_C::DeleteHoveredSave(int32_t CallFunc_PostEventAtLocation_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData, UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue, TArray<FLegendItemData>& K2Node_MakeArray_Array, TArray<FSaveGameInfo>& CallFunc_GetUserSavesBySlot_SaveData, FString CallFunc_GetFileName_FileName, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_ParseSlotNumFromName_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_DeleteGameFromSlot_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SaveMenu.UI_BP_SaveMenu_C.DeleteHoveredSave"));
    struct Params_DeleteHoveredSave {
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x0
        char pad_4[0x4];
        UUIManager* CallFunc_Get_ReturnValue; // 0x8
        FLegendItemData K2Node_MakeStruct_LegendItemData; // 0x10
        UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue; // 0x40
        TArray<FLegendItemData> K2Node_MakeArray_Array; // 0x48
        TArray<FSaveGameInfo> CallFunc_GetUserSavesBySlot_SaveData; // 0x58
        FString CallFunc_GetFileName_FileName; // 0x68
        bool CallFunc_IsValid_ReturnValue; // 0x78
        char pad_79[0x3];
        int32_t CallFunc_ParseSlotNumFromName_ReturnValue; // 0x7c
        FString CallFunc_Conv_IntToString_ReturnValue; // 0x80
        bool CallFunc_DeleteGameFromSlot_ReturnValue; // 0x90
        char pad_91[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x98
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0xa8
    }; // Size: 0xac
    Params_DeleteHoveredSave params{};
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.K2Node_MakeStruct_LegendItemData = (FLegendItemData)K2Node_MakeStruct_LegendItemData;
    params.CallFunc_GetFieldGuideWidget_ReturnValue = (UFieldGuideMenu*)CallFunc_GetFieldGuideWidget_ReturnValue;
    params.K2Node_MakeArray_Array = (TArray<FLegendItemData>)K2Node_MakeArray_Array;
    params.CallFunc_GetUserSavesBySlot_SaveData = (TArray<FSaveGameInfo>)CallFunc_GetUserSavesBySlot_SaveData;
    params.CallFunc_GetFileName_FileName = (FString)CallFunc_GetFileName_FileName;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_ParseSlotNumFromName_ReturnValue = (int32_t)CallFunc_ParseSlotNumFromName_ReturnValue;
    params.CallFunc_Conv_IntToString_ReturnValue = (FString)CallFunc_Conv_IntToString_ReturnValue;
    params.CallFunc_DeleteGameFromSlot_ReturnValue = (bool)CallFunc_DeleteGameFromSlot_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
    CallFunc_GetUserSavesBySlot_SaveData = params.CallFunc_GetUserSavesBySlot_SaveData;
}
void UUI_BP_SaveMenu_C::MenuButtonClicked(UUI_BP_SavedGameButton_C* Button, bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SaveMenu.UI_BP_SaveMenu_C.MenuButtonClicked"));
    struct Params_MenuButtonClicked {
        UUI_BP_SavedGameButton_C* Button; // 0x0
        bool CallFunc_Not_PreBool_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_MenuButtonClicked params{};
    params.Button = (UUI_BP_SavedGameButton_C*)Button;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_SaveMenu_C::MenuButtonUnhovered(UUI_BP_SavedGameButton_C* Button, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData, TArray<FLegendItemData>& K2Node_MakeArray_Array) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SaveMenu.UI_BP_SaveMenu_C.MenuButtonUnhovered"));
    struct Params_MenuButtonUnhovered {
        UUI_BP_SavedGameButton_C* Button; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x8
        char pad_c[0x4];
        UUIManager* CallFunc_Get_ReturnValue; // 0x10
        UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue; // 0x18
        FLegendItemData K2Node_MakeStruct_LegendItemData; // 0x20
        TArray<FLegendItemData> K2Node_MakeArray_Array; // 0x50
    }; // Size: 0x60
    Params_MenuButtonUnhovered params{};
    params.Button = (UUI_BP_SavedGameButton_C*)Button;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetFieldGuideWidget_ReturnValue = (UFieldGuideMenu*)CallFunc_GetFieldGuideWidget_ReturnValue;
    params.K2Node_MakeStruct_LegendItemData = (FLegendItemData)K2Node_MakeStruct_LegendItemData;
    params.K2Node_MakeArray_Array = (TArray<FLegendItemData>)K2Node_MakeArray_Array;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
void UUI_BP_SaveMenu_C::MenuButtonHovered(UUI_BP_SavedGameButton_C* Button, FLegendItemData TempLegendData) {}
void UUI_BP_SaveMenu_C::MenuButtonReleased(UUI_BP_SavedGameButton_C* Button, int32_t CallFunc_PostEventAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SaveMenu.UI_BP_SaveMenu_C.MenuButtonReleased"));
    struct Params_MenuButtonReleased {
        UUI_BP_SavedGameButton_C* Button; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x8
    }; // Size: 0xc
    Params_MenuButtonReleased params{};
    params.Button = (UUI_BP_SavedGameButton_C*)Button;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_SaveMenu_C::StartStopDelete__DelegateSignature(bool Start, int32_t LegendIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SaveMenu.UI_BP_SaveMenu_C.StartStopDelete__DelegateSignature"));
    struct Params_StartStopDelete__DelegateSignature {
        bool Start; // 0x0
        char pad_1[0x3];
        int32_t LegendIndex; // 0x4
    }; // Size: 0x8
    Params_StartStopDelete__DelegateSignature params{};
    params.Start = (bool)Start;
    params.LegendIndex = (int32_t)LegendIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_SaveMenu_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SaveMenu.UI_BP_SaveMenu_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SaveMenu_C::RefreshListAfterSave0(TArray<FSaveGameInfo>& SaveData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SaveMenu.UI_BP_SaveMenu_C.RefreshListAfterSave"));
    struct Params_RefreshListAfterSave {
        TArray<FSaveGameInfo> SaveData; // 0x0
    }; // Size: 0x10
    Params_RefreshListAfterSave params{};
    params.SaveData = (TArray<FSaveGameInfo>)SaveData;
    ProcessEvent(func, &params);
    SaveData = params.SaveData;
}
void UUI_BP_SaveMenu_C::BlueprintFocusAcquired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SaveMenu.UI_BP_SaveMenu_C.BlueprintFocusAcquired"));
    struct Params_BlueprintFocusAcquired {
    }; // Size: 0x0
    Params_BlueprintFocusAcquired params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SaveMenu_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SaveMenu.UI_BP_SaveMenu_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SaveMenu_C::RefreshListAfterSaveFailed0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SaveMenu.UI_BP_SaveMenu_C.RefreshListAfterSaveFailed"));
    struct Params_RefreshListAfterSaveFailed {
    }; // Size: 0x0
    Params_RefreshListAfterSaveFailed params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SaveMenu_C::ExecuteUbergraph_UI_BP_SaveMenu(int32_t EntryPoint, TArray<FSaveGameInfo>& K2Node_Event_SaveData, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SaveMenu.UI_BP_SaveMenu_C.ExecuteUbergraph_UI_BP_SaveMenu"));
    struct Params_ExecuteUbergraph_UI_BP_SaveMenu {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        TArray<FSaveGameInfo> K2Node_Event_SaveData; // 0x8
        bool CallFunc_IsValid_ReturnValue; // 0x18
        bool CallFunc_IsValid_ReturnValue_1; // 0x19
        char pad_1a[0x2];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x1c
    }; // Size: 0x20
    Params_ExecuteUbergraph_UI_BP_SaveMenu params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_SaveData = (TArray<FSaveGameInfo>)K2Node_Event_SaveData;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    ProcessEvent(func, &params);
    K2Node_Event_SaveData = params.K2Node_Event_SaveData;
}
void UUI_BP_SaveMenu_C::OnSaveStarted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SaveMenu.UI_BP_SaveMenu_C.OnSaveStarted__DelegateSignature"));
    struct Params_OnSaveStarted__DelegateSignature {
    }; // Size: 0x0
    Params_OnSaveStarted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SaveMenu_C::OnLegendRequested__DelegateSignature(TArray<FLegendItemData>& LegendData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SaveMenu.UI_BP_SaveMenu_C.OnLegendRequested__DelegateSignature"));
    struct Params_OnLegendRequested__DelegateSignature {
        TArray<FLegendItemData> LegendData; // 0x0
    }; // Size: 0x10
    Params_OnLegendRequested__DelegateSignature params{};
    params.LegendData = (TArray<FLegendItemData>)LegendData;
    ProcessEvent(func, &params);
    LegendData = params.LegendData;
}
void UUI_BP_SaveMenu_C::OnGameSaved__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SaveMenu.UI_BP_SaveMenu_C.OnGameSaved__DelegateSignature"));
    struct Params_OnGameSaved__DelegateSignature {
    }; // Size: 0x0
    Params_OnGameSaved__DelegateSignature params{};
    ProcessEvent(func, &params);
}
