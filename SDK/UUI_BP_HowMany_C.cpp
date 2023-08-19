#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UScreen.hpp"
#include "UUI_BP_HowMany_C.hpp"
#include "UUI_BP_LegendBox_C.hpp"
#include "UUserWidget.hpp"
UUI_BP_HowMany_C* UUI_BP_HowMany_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/Inventory/UI_BP_HowMany.UI_BP_HowMany_C");
    return (UUI_BP_HowMany_C*)res;
}
void UUI_BP_HowMany_C::SetCurrentAmount(int32_t CurrentIntAmount) {}
bool UUI_BP_HowMany_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_Less_IntInt_ReturnValue, int32_t K2Node_MathExpression_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32_t K2Node_MathExpression_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_HowMany.UI_BP_HowMany_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        bool CallFunc_Less_IntInt_ReturnValue; // 0x3
        int32_t K2Node_MathExpression_ReturnValue; // 0x4
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x9
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0xa
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0xb
        bool CallFunc_BooleanOR_ReturnValue; // 0xc
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0xd
        bool CallFunc_BooleanOR_ReturnValue_1; // 0xe
        char pad_f[0x1];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x10
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x14
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x18
        char pad_19[0x3];
        int32_t K2Node_MathExpression_ReturnValue_1; // 0x1c
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_5; // 0x20
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_6; // 0x21
        char pad_22[0x2];
        int32_t CallFunc_PostEventAtLocation_ReturnValue_2; // 0x24
        bool CallFunc_BooleanOR_ReturnValue_2; // 0x28
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_7; // 0x29
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_8; // 0x2a
        bool CallFunc_BooleanOR_ReturnValue_3; // 0x2b
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_9; // 0x2c
    }; // Size: 0x2d
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.K2Node_MathExpression_ReturnValue = (int32_t)K2Node_MathExpression_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.K2Node_MathExpression_ReturnValue_1 = (int32_t)K2Node_MathExpression_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_5;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_6;
    params.CallFunc_PostEventAtLocation_ReturnValue_2 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_2;
    params.CallFunc_BooleanOR_ReturnValue_2 = (bool)CallFunc_BooleanOR_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_7;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_8 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_8;
    params.CallFunc_BooleanOR_ReturnValue_3 = (bool)CallFunc_BooleanOR_ReturnValue_3;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_9 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_9;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_HowMany_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_HowMany.UI_BP_HowMany_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HowMany_C::SetColors(FLinearColor Color) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_HowMany.UI_BP_HowMany_C.SetColors"));
    struct Params_SetColors {
        FLinearColor Color; // 0x0
    }; // Size: 0x10
    Params_SetColors params{};
    params.Color = (FLinearColor)Color;
    ProcessEvent(func, &params);
}
void UUI_BP_HowMany_C::ExecuteUbergraph_UI_BP_HowMany(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_HowMany.UI_BP_HowMany_C.ExecuteUbergraph_UI_BP_HowMany"));
    struct Params_ExecuteUbergraph_UI_BP_HowMany {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_UI_BP_HowMany params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
void UUI_BP_HowMany_C::SetName(FName ItemName, bool Transfer_Drop) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_HowMany.UI_BP_HowMany_C.SetName"));
    struct Params_SetName {
        FName ItemName; // 0x0
        bool Transfer_Drop; // 0x8
    }; // Size: 0x9
    Params_SetName params{};
    params.ItemName = (FName)ItemName;
    params.Transfer_Drop = (bool)Transfer_Drop;
    ProcessEvent(func, &params);
}
void UUI_BP_HowMany_C::InitAmounts(int32_t Min, int32_t Max) {}
void UUI_BP_HowMany_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_HowMany.UI_BP_HowMany_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
