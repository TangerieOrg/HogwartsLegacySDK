#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UMenuReaderTestScreen.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UUI_BP_MenuReaderTester_C.hpp"
void UUI_BP_MenuReaderTester_C::ExecuteUbergraph_UI_BP_MenuReaderTester(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/DevTools/MenuReaderTester/UI_BP_MenuReaderTester.UI_BP_MenuReaderTester_C.ExecuteUbergraph_UI_BP_MenuReaderTester"));
    struct Params_ExecuteUbergraph_UI_BP_MenuReaderTester {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_UI_BP_MenuReaderTester params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_MenuReaderTester_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
UUI_BP_MenuReaderTester_C* UUI_BP_MenuReaderTester_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/DevTools/MenuReaderTester/UI_BP_MenuReaderTester.UI_BP_MenuReaderTester_C");
    return (UUI_BP_MenuReaderTester_C*)res;
}
void UUI_BP_MenuReaderTester_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/DevTools/MenuReaderTester/UI_BP_MenuReaderTester.UI_BP_MenuReaderTester_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MenuReaderTester_C::RefreshDisplay(FString TempButtonString, FString CallFunc_Concat_StrStr_ReturnValue, int32_t CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_4) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/DevTools/MenuReaderTester/UI_BP_MenuReaderTester.UI_BP_MenuReaderTester_C.RefreshDisplay"));
    struct Params_RefreshDisplay {
        FString TempButtonString; // 0x0
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x10
        int32_t CallFunc_Len_ReturnValue; // 0x20
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x24
        char pad_25[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x28
        char pad_2c[0x4];
        FString CallFunc_Conv_IntToString_ReturnValue; // 0x30
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x40
        int32_t CallFunc_Array_Length_ReturnValue; // 0x50
        char pad_54[0x4];
        FString CallFunc_Conv_IntToString_ReturnValue_1; // 0x58
        FString CallFunc_Concat_StrStr_ReturnValue_2; // 0x68
        FString CallFunc_Concat_StrStr_ReturnValue_3; // 0x78
        FString CallFunc_Concat_StrStr_ReturnValue_4; // 0x88
    }; // Size: 0x98
    Params_RefreshDisplay params{};
    params.TempButtonString = (FString)TempButtonString;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_Len_ReturnValue = (int32_t)CallFunc_Len_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Conv_IntToString_ReturnValue = (FString)CallFunc_Conv_IntToString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Conv_IntToString_ReturnValue_1 = (FString)CallFunc_Conv_IntToString_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue_2 = (FString)CallFunc_Concat_StrStr_ReturnValue_2;
    params.CallFunc_Concat_StrStr_ReturnValue_3 = (FString)CallFunc_Concat_StrStr_ReturnValue_3;
    params.CallFunc_Concat_StrStr_ReturnValue_4 = (FString)CallFunc_Concat_StrStr_ReturnValue_4;
    ProcessEvent(func, &params);
}
void UUI_BP_MenuReaderTester_C::RefreshLegend(TArray<FLegendItemData> TempLegendItems, FLegendItemData K2Node_MakeStruct_LegendItemData, int32_t CallFunc_Array_Add_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData_1, FLegendItemData K2Node_MakeStruct_LegendItemData_2, int32_t CallFunc_Array_Add_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_2, FLegendItemData K2Node_MakeStruct_LegendItemData_3, FLegendItemData K2Node_MakeStruct_LegendItemData_4, int32_t CallFunc_Array_Add_ReturnValue_3, int32_t CallFunc_Array_Add_ReturnValue_4) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/DevTools/MenuReaderTester/UI_BP_MenuReaderTester.UI_BP_MenuReaderTester_C.RefreshLegend"));
    struct Params_RefreshLegend {
        TArray<FLegendItemData> TempLegendItems; // 0x0
        FLegendItemData K2Node_MakeStruct_LegendItemData; // 0x10
        int32_t CallFunc_Array_Add_ReturnValue; // 0x40
        char pad_44[0x4];
        FLegendItemData K2Node_MakeStruct_LegendItemData_1; // 0x48
        FLegendItemData K2Node_MakeStruct_LegendItemData_2; // 0x78
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0xa8
        int32_t CallFunc_Array_Add_ReturnValue_2; // 0xac
        FLegendItemData K2Node_MakeStruct_LegendItemData_3; // 0xb0
        FLegendItemData K2Node_MakeStruct_LegendItemData_4; // 0xe0
        int32_t CallFunc_Array_Add_ReturnValue_3; // 0x110
        int32_t CallFunc_Array_Add_ReturnValue_4; // 0x114
    }; // Size: 0x118
    Params_RefreshLegend params{};
    params.TempLegendItems = (TArray<FLegendItemData>)TempLegendItems;
    params.K2Node_MakeStruct_LegendItemData = (FLegendItemData)K2Node_MakeStruct_LegendItemData;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.K2Node_MakeStruct_LegendItemData_1 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_1;
    params.K2Node_MakeStruct_LegendItemData_2 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_2;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    params.CallFunc_Array_Add_ReturnValue_2 = (int32_t)CallFunc_Array_Add_ReturnValue_2;
    params.K2Node_MakeStruct_LegendItemData_3 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_3;
    params.K2Node_MakeStruct_LegendItemData_4 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_4;
    params.CallFunc_Array_Add_ReturnValue_3 = (int32_t)CallFunc_Array_Add_ReturnValue_3;
    params.CallFunc_Array_Add_ReturnValue_4 = (int32_t)CallFunc_Array_Add_ReturnValue_4;
    ProcessEvent(func, &params);
}
bool UUI_BP_MenuReaderTester_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/DevTools/MenuReaderTester/UI_BP_MenuReaderTester.UI_BP_MenuReaderTester_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x3
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x4
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x5
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0x6
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0x7
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_5; // 0x8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_6; // 0x9
    }; // Size: 0xa
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_5;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_6;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_MenuReaderTester_C::ChangeCurrentString(int32_t Delta, int32_t TempNumStrings, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Percent_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/DevTools/MenuReaderTester/UI_BP_MenuReaderTester.UI_BP_MenuReaderTester_C.ChangeCurrentString"));
    struct Params_ChangeCurrentString {
        int32_t Delta; // 0x0
        int32_t TempNumStrings; // 0x4
        int32_t CallFunc_Array_Length_ReturnValue; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xc
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x10
        int32_t CallFunc_Percent_IntInt_ReturnValue; // 0x14
    }; // Size: 0x18
    Params_ChangeCurrentString params{};
    params.Delta = (int32_t)Delta;
    params.TempNumStrings = (int32_t)TempNumStrings;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Percent_IntInt_ReturnValue = (int32_t)CallFunc_Percent_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
