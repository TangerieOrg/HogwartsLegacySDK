#include "ESlateVisibility.hpp"
#include "FMissionLogData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAvaUserWidget.hpp"
#include "UFunction.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_LegendItem_C.hpp"
#include "UUI_BP_StorePopup_C.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_StorePopup_C::SetMessageInfo(FString EmptyMessage, bool ShowCallout, FString TempIcon, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_StorePopup.UI_BP_StorePopup_C.SetMessageInfo"));
    struct Params_SetMessageInfo {
        FString EmptyMessage; // 0x0
        bool ShowCallout; // 0x10
        char pad_11[0x7];
        FString TempIcon; // 0x18
        bool Temp_bool_Variable; // 0x28
        ESlateVisibility Temp_byte_Variable; // 0x29
        ESlateVisibility Temp_byte_Variable_1; // 0x2a
        ESlateVisibility K2Node_Select_Default; // 0x2b
    }; // Size: 0x2c
    Params_SetMessageInfo params{};
    params.EmptyMessage = (FString)EmptyMessage;
    params.ShowCallout = (bool)ShowCallout;
    params.TempIcon = (FString)TempIcon;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
UUI_BP_StorePopup_C* UUI_BP_StorePopup_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/Store/UI_BP_StorePopup.UI_BP_StorePopup_C");
    return (UUI_BP_StorePopup_C*)res;
}
TArray<FString> UUI_BP_StorePopup_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1) {}
void UUI_BP_StorePopup_C::I_GetMissionData(FMissionLogData& MissionData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_StorePopup.UI_BP_StorePopup_C.I_GetMissionData"));
    struct Params_I_GetMissionData {
        FMissionLogData MissionData; // 0x0
    }; // Size: 0xa8
    Params_I_GetMissionData params{};
    params.MissionData = (FMissionLogData)MissionData;
    ProcessEvent(func, &params);
    MissionData = params.MissionData;
}
void UUI_BP_StorePopup_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_StorePopup.UI_BP_StorePopup_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_StorePopup_C::I_SetMissionFocus(bool IsFocus) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_StorePopup.UI_BP_StorePopup_C.I_SetMissionFocus"));
    struct Params_I_SetMissionFocus {
        bool IsFocus; // 0x0
    }; // Size: 0x1
    Params_I_SetMissionFocus params{};
    params.IsFocus = (bool)IsFocus;
    ProcessEvent(func, &params);
}
void UUI_BP_StorePopup_C::I_SetOwner(UUserWidget* Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_StorePopup.UI_BP_StorePopup_C.I_SetOwner"));
    struct Params_I_SetOwner {
        UUserWidget* Owner; // 0x0
    }; // Size: 0x8
    Params_I_SetOwner params{};
    params.Owner = (UUserWidget*)Owner;
    ProcessEvent(func, &params);
}
void UUI_BP_StorePopup_C::I_SetMissionData(FMissionLogData MissionData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_StorePopup.UI_BP_StorePopup_C.I_SetMissionData"));
    struct Params_I_SetMissionData {
        FMissionLogData MissionData; // 0x0
    }; // Size: 0xa8
    Params_I_SetMissionData params{};
    params.MissionData = (FMissionLogData)MissionData;
    ProcessEvent(func, &params);
}
void UUI_BP_StorePopup_C::ExecuteUbergraph_UI_BP_StorePopup(int32_t EntryPoint, bool K2Node_Event_IsFocus, UUserWidget* K2Node_Event_Owner, FMissionLogData K2Node_Event_MissionData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_StorePopup.UI_BP_StorePopup_C.ExecuteUbergraph_UI_BP_StorePopup"));
    struct Params_ExecuteUbergraph_UI_BP_StorePopup {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsFocus; // 0x4
        char pad_5[0x3];
        UUserWidget* K2Node_Event_Owner; // 0x8
        FMissionLogData K2Node_Event_MissionData; // 0x10
    }; // Size: 0xb8
    Params_ExecuteUbergraph_UI_BP_StorePopup params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsFocus = (bool)K2Node_Event_IsFocus;
    params.K2Node_Event_Owner = (UUserWidget*)K2Node_Event_Owner;
    params.K2Node_Event_MissionData = (FMissionLogData)K2Node_Event_MissionData;
    ProcessEvent(func, &params);
}
