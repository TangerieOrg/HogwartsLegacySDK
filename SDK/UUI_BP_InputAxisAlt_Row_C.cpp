#include "ESlateVisibility.hpp"
#include "FDataTableRowHandle.hpp"
#include "FInputAxisKeyMapping.hpp"
#include "FKey.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UFunction.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_InputAxisAlt_Row_C.hpp"
#include "UUI_BP_InputAxis_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_InputAxisAlt_Row_C::HandleHovered(bool IsPrimary, UUI_BP_InputAxis_C* InputAxis) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.HandleHovered"));
    struct Params_HandleHovered {
        bool IsPrimary; // 0x0
        char pad_1[0x7];
        UUI_BP_InputAxis_C* InputAxis; // 0x8
    }; // Size: 0x10
    Params_HandleHovered params{};
    params.IsPrimary = (bool)IsPrimary;
    params.InputAxis = (UUI_BP_InputAxis_C*)InputAxis;
    ProcessEvent(func, &params);
}
void UUI_BP_InputAxisAlt_Row_C::UpdateTelemetry(bool IsPrimary, FString CallFunc_KeyToString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_KeyToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.UpdateTelemetry"));
    struct Params_UpdateTelemetry {
        bool IsPrimary; // 0x0
        char pad_1[0x7];
        FString CallFunc_KeyToString_ReturnValue; // 0x8
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x18
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x28
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x38
        FString CallFunc_KeyToString_ReturnValue_1; // 0x48
        FString CallFunc_Concat_StrStr_ReturnValue_2; // 0x58
        FString CallFunc_Concat_StrStr_ReturnValue_3; // 0x68
    }; // Size: 0x78
    Params_UpdateTelemetry params{};
    params.IsPrimary = (bool)IsPrimary;
    params.CallFunc_KeyToString_ReturnValue = (FString)CallFunc_KeyToString_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_KeyToString_ReturnValue_1 = (FString)CallFunc_KeyToString_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue_2 = (FString)CallFunc_Concat_StrStr_ReturnValue_2;
    params.CallFunc_Concat_StrStr_ReturnValue_3 = (FString)CallFunc_Concat_StrStr_ReturnValue_3;
    ProcessEvent(func, &params);
}
UUI_BP_InputAxisAlt_Row_C* UUI_BP_InputAxisAlt_Row_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/OptionsMenu/UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C");
    return (UUI_BP_InputAxisAlt_Row_C*)res;
}
TArray<FString> UUI_BP_InputAxisAlt_Row_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_2) {}
void UUI_BP_InputAxisAlt_Row_C::UpdateConflictState(bool Temp_bool_Variable, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1, bool CallFunc_Key_IsValid_ReturnValue, bool CallFunc_Key_IsValid_ReturnValue_1, bool CallFunc_Key_IsValid_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, ESlateVisibility K2Node_Select_Default, FDataTableRowHandle K2Node_Select_Default_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.UpdateConflictState"));
    struct Params_UpdateConflictState {
        bool Temp_bool_Variable; // 0x0
        bool Temp_bool_Variable_1; // 0x1
        ESlateVisibility Temp_byte_Variable; // 0x2
        ESlateVisibility Temp_byte_Variable_1; // 0x3
        char pad_4[0x4];
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle; // 0x8
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1; // 0x18
        bool CallFunc_Key_IsValid_ReturnValue; // 0x28
        bool CallFunc_Key_IsValid_ReturnValue_1; // 0x29
        bool CallFunc_Key_IsValid_ReturnValue_2; // 0x2a
        bool CallFunc_BooleanOR_ReturnValue; // 0x2b
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x2c
        ESlateVisibility K2Node_Select_Default; // 0x2d
        char pad_2e[0x2];
        FDataTableRowHandle K2Node_Select_Default_1; // 0x30
    }; // Size: 0x40
    Params_UpdateConflictState params{};
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_MakeStruct_DataTableRowHandle = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle;
    params.K2Node_MakeStruct_DataTableRowHandle_1 = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle_1;
    params.CallFunc_Key_IsValid_ReturnValue = (bool)CallFunc_Key_IsValid_ReturnValue;
    params.CallFunc_Key_IsValid_ReturnValue_1 = (bool)CallFunc_Key_IsValid_ReturnValue_1;
    params.CallFunc_Key_IsValid_ReturnValue_2 = (bool)CallFunc_Key_IsValid_ReturnValue_2;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (FDataTableRowHandle)K2Node_Select_Default_1;
    ProcessEvent(func, &params);
}
void UUI_BP_InputAxisAlt_Row_C::HandleClicked(bool IsPrimary, UUI_BP_InputAxis_C* InputAxis) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.HandleClicked"));
    struct Params_HandleClicked {
        bool IsPrimary; // 0x0
        char pad_1[0x7];
        UUI_BP_InputAxis_C* InputAxis; // 0x8
    }; // Size: 0x10
    Params_HandleClicked params{};
    params.IsPrimary = (bool)IsPrimary;
    params.InputAxis = (UUI_BP_InputAxis_C*)InputAxis;
    ProcessEvent(func, &params);
}
void UUI_BP_InputAxisAlt_Row_C::Rebuild_Row() {}
void UUI_BP_InputAxisAlt_Row_C::HandleUnhovered(bool IsPrimary, UUI_BP_InputAxis_C* InputAxis) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.HandleUnhovered"));
    struct Params_HandleUnhovered {
        bool IsPrimary; // 0x0
        char pad_1[0x7];
        UUI_BP_InputAxis_C* InputAxis; // 0x8
    }; // Size: 0x10
    Params_HandleUnhovered params{};
    params.IsPrimary = (bool)IsPrimary;
    params.InputAxis = (UUI_BP_InputAxis_C*)InputAxis;
    ProcessEvent(func, &params);
}
void UUI_BP_InputAxisAlt_Row_C::SetRebindingFlair(bool IsRebinding, FLinearColor HighlightColor, FLinearColor DefaultColor, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.SetRebindingFlair"));
    struct Params_SetRebindingFlair {
        bool IsRebinding; // 0x0
        char pad_1[0x3];
        FLinearColor HighlightColor; // 0x4
        FLinearColor DefaultColor; // 0x14
        char pad_24[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x28
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x30
    }; // Size: 0x38
    Params_SetRebindingFlair params{};
    params.IsRebinding = (bool)IsRebinding;
    params.HighlightColor = (FLinearColor)HighlightColor;
    params.DefaultColor = (FLinearColor)DefaultColor;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_InputAxisAlt_Row_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InputAxisAlt_Row_C::ExecuteUbergraph_UI_BP_InputAxisAlt_Row(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.ExecuteUbergraph_UI_BP_InputAxisAlt_Row"));
    struct Params_ExecuteUbergraph_UI_BP_InputAxisAlt_Row {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_UI_BP_InputAxisAlt_Row params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
void UUI_BP_InputAxisAlt_Row_C::InputUnhovered__DelegateSignature(UUI_BP_InputAxisAlt_Row_C* Row, bool IsPrimary) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.InputUnhovered__DelegateSignature"));
    struct Params_InputUnhovered__DelegateSignature {
        UUI_BP_InputAxisAlt_Row_C* Row; // 0x0
        bool IsPrimary; // 0x8
    }; // Size: 0x9
    Params_InputUnhovered__DelegateSignature params{};
    params.Row = (UUI_BP_InputAxisAlt_Row_C*)Row;
    params.IsPrimary = (bool)IsPrimary;
    ProcessEvent(func, &params);
}
void UUI_BP_InputAxisAlt_Row_C::InputHovered__DelegateSignature(UUI_BP_InputAxisAlt_Row_C* Row, bool IsPrimary) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.InputHovered__DelegateSignature"));
    struct Params_InputHovered__DelegateSignature {
        UUI_BP_InputAxisAlt_Row_C* Row; // 0x0
        bool IsPrimary; // 0x8
    }; // Size: 0x9
    Params_InputHovered__DelegateSignature params{};
    params.Row = (UUI_BP_InputAxisAlt_Row_C*)Row;
    params.IsPrimary = (bool)IsPrimary;
    ProcessEvent(func, &params);
}
void UUI_BP_InputAxisAlt_Row_C::InputClicked__DelegateSignature(UUI_BP_InputAxisAlt_Row_C* Row, bool IsPrimary) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAxisAlt_Row.UI_BP_InputAxisAlt_Row_C.InputClicked__DelegateSignature"));
    struct Params_InputClicked__DelegateSignature {
        UUI_BP_InputAxisAlt_Row_C* Row; // 0x0
        bool IsPrimary; // 0x8
    }; // Size: 0x9
    Params_InputClicked__DelegateSignature params{};
    params.Row = (UUI_BP_InputAxisAlt_Row_C*)Row;
    params.IsPrimary = (bool)IsPrimary;
    ProcessEvent(func, &params);
}
