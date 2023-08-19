#include "FSlateColor.hpp"
#include "UFunction.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_LevelRequirement_TooltipContent_C.hpp"
#include "UUserWidget.hpp"
UUI_BP_LevelRequirement_TooltipContent_C* UUI_BP_LevelRequirement_TooltipContent_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/ToolTipContent/UI_BP_LevelRequirement_TooltipContent.UI_BP_LevelRequirement_TooltipContent_C");
    return (UUI_BP_LevelRequirement_TooltipContent_C*)res;
}
void UUI_BP_LevelRequirement_TooltipContent_C::SetLevel(int32_t Level, bool Usable, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, FSlateColor K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/ToolTipContent/UI_BP_LevelRequirement_TooltipContent.UI_BP_LevelRequirement_TooltipContent_C.SetLevel"));
    struct Params_SetLevel {
        int32_t Level; // 0x0
        bool Usable; // 0x4
        bool Temp_bool_Variable; // 0x5
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x6
        char pad_7[0x1];
        FString CallFunc_Conv_IntToString_ReturnValue; // 0x8
        FSlateColor K2Node_MakeStruct_SlateColor; // 0x18
        FSlateColor K2Node_MakeStruct_SlateColor_1; // 0x40
        FSlateColor K2Node_Select_Default; // 0x68
    }; // Size: 0x90
    Params_SetLevel params{};
    params.Level = (int32_t)Level;
    params.Usable = (bool)Usable;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Conv_IntToString_ReturnValue = (FString)CallFunc_Conv_IntToString_ReturnValue;
    params.K2Node_MakeStruct_SlateColor = (FSlateColor)K2Node_MakeStruct_SlateColor;
    params.K2Node_MakeStruct_SlateColor_1 = (FSlateColor)K2Node_MakeStruct_SlateColor_1;
    params.K2Node_Select_Default = (FSlateColor)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
