#include "FPointerToUberGraphFrame.hpp"
#include "FSlateFontInfo.hpp"
#include "UFunction.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_InputHeader_Row_C.hpp"
void UUI_BP_InputHeader_Row_C::ExecuteUbergraph_UI_BP_InputHeader_Row(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputHeader_Row.UI_BP_InputHeader_Row_C.ExecuteUbergraph_UI_BP_InputHeader_Row"));
    struct Params_ExecuteUbergraph_UI_BP_InputHeader_Row {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
        char pad_5[0x3];
        FSlateFontInfo K2Node_MakeStruct_SlateFontInfo; // 0x8
    }; // Size: 0x60
    Params_ExecuteUbergraph_UI_BP_InputHeader_Row params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.K2Node_MakeStruct_SlateFontInfo = (FSlateFontInfo)K2Node_MakeStruct_SlateFontInfo;
    ProcessEvent(func, &params);
}
UUI_BP_InputHeader_Row_C* UUI_BP_InputHeader_Row_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/OptionsMenu/UI_BP_InputHeader_Row.UI_BP_InputHeader_Row_C");
    return (UUI_BP_InputHeader_Row_C*)res;
}
TArray<FString> UUI_BP_InputHeader_Row_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_InputHeader_Row_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputHeader_Row.UI_BP_InputHeader_Row_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
