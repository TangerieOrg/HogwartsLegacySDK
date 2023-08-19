#include "ESlateVisibility.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "USizeBox.hpp"
#include "UUI_BP_MoneyBar_C.hpp"
void UUI_BP_MoneyBar_C::ResetFields(FSlateColor K2Node_MakeStruct_SlateColor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Economy/UI_BP_MoneyBar.UI_BP_MoneyBar_C.ResetFields"));
    struct Params_ResetFields {
        FSlateColor K2Node_MakeStruct_SlateColor; // 0x0
    }; // Size: 0x28
    Params_ResetFields params{};
    params.K2Node_MakeStruct_SlateColor = (FSlateColor)K2Node_MakeStruct_SlateColor;
    ProcessEvent(func, &params);
}
UUI_BP_MoneyBar_C* UUI_BP_MoneyBar_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Economy/UI_BP_MoneyBar.UI_BP_MoneyBar_C");
    return (UUI_BP_MoneyBar_C*)res;
}
TArray<FString> UUI_BP_MoneyBar_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, FString Temp_string_Variable, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue) {}
void UUI_BP_MoneyBar_C::DisplayTotalWorth(FName Character, int32_t CallFunc_GetInventorySellPriceBP_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Economy/UI_BP_MoneyBar.UI_BP_MoneyBar_C.DisplayTotalWorth"));
    struct Params_DisplayTotalWorth {
        FName Character; // 0x0
        int32_t CallFunc_GetInventorySellPriceBP_ReturnValue; // 0x8
    }; // Size: 0xc
    Params_DisplayTotalWorth params{};
    params.Character = (FName)Character;
    params.CallFunc_GetInventorySellPriceBP_ReturnValue = (int32_t)CallFunc_GetInventorySellPriceBP_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_MoneyBar_C::GetContainerVisibility(int32_t CoinAmount, ESlateVisibility& Visibility, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanOR_ReturnValue, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Economy/UI_BP_MoneyBar.UI_BP_MoneyBar_C.GetContainerVisibility"));
    struct Params_GetContainerVisibility {
        int32_t CoinAmount; // 0x0
        ESlateVisibility Visibility; // 0x4
        bool Temp_bool_Variable; // 0x5
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x6
        ESlateVisibility Temp_byte_Variable; // 0x7
        ESlateVisibility Temp_byte_Variable_1; // 0x8
        bool CallFunc_BooleanOR_ReturnValue; // 0x9
        ESlateVisibility K2Node_Select_Default; // 0xa
    }; // Size: 0xb
    Params_GetContainerVisibility params{};
    params.CoinAmount = (int32_t)CoinAmount;
    params.Visibility = (ESlateVisibility)Visibility;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
    Visibility = params.Visibility;
}
void UUI_BP_MoneyBar_C::DisplayCost(int32_t newCost) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Economy/UI_BP_MoneyBar.UI_BP_MoneyBar_C.DisplayCost"));
    struct Params_DisplayCost {
        int32_t newCost; // 0x0
    }; // Size: 0x4
    Params_DisplayCost params{};
    params.newCost = (int32_t)newCost;
    ProcessEvent(func, &params);
}
void UUI_BP_MoneyBar_C::DisplayCostColor(bool canAffordItem, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Economy/UI_BP_MoneyBar.UI_BP_MoneyBar_C.DisplayCostColor"));
    struct Params_DisplayCostColor {
        bool canAffordItem; // 0x0
        char pad_1[0x7];
        FSlateColor K2Node_MakeStruct_SlateColor; // 0x8
        FSlateColor K2Node_MakeStruct_SlateColor_1; // 0x30
    }; // Size: 0x58
    Params_DisplayCostColor params{};
    params.canAffordItem = (bool)canAffordItem;
    params.K2Node_MakeStruct_SlateColor = (FSlateColor)K2Node_MakeStruct_SlateColor;
    params.K2Node_MakeStruct_SlateColor_1 = (FSlateColor)K2Node_MakeStruct_SlateColor_1;
    ProcessEvent(func, &params);
}
void UUI_BP_MoneyBar_C::DisplayMoney(FName Character, int32_t CallFunc_GetMoney_Money) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Economy/UI_BP_MoneyBar.UI_BP_MoneyBar_C.DisplayMoney"));
    struct Params_DisplayMoney {
        FName Character; // 0x0
        int32_t CallFunc_GetMoney_Money; // 0x8
    }; // Size: 0xc
    Params_DisplayMoney params{};
    params.Character = (FName)Character;
    params.CallFunc_GetMoney_Money = (int32_t)CallFunc_GetMoney_Money;
    ProcessEvent(func, &params);
}
void UUI_BP_MoneyBar_C::AnimateToNewAmount(int32_t Amount, bool CallFunc_Less_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Economy/UI_BP_MoneyBar.UI_BP_MoneyBar_C.AnimateToNewAmount"));
    struct Params_AnimateToNewAmount {
        int32_t Amount; // 0x0
        bool CallFunc_Less_FloatFloat_ReturnValue; // 0x4
    }; // Size: 0x5
    Params_AnimateToNewAmount params{};
    params.Amount = (int32_t)Amount;
    params.CallFunc_Less_FloatFloat_ReturnValue = (bool)CallFunc_Less_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_MoneyBar_C::SetCurrentAmount(int32_t Amount) {}
void UUI_BP_MoneyBar_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Economy/UI_BP_MoneyBar.UI_BP_MoneyBar_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_MoneyBar_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Economy/UI_BP_MoneyBar.UI_BP_MoneyBar_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_MoneyBar_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Economy/UI_BP_MoneyBar.UI_BP_MoneyBar_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MoneyBar_C::ExecuteUbergraph_UI_BP_MoneyBar(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Lerp_ReturnValue, int32_t CallFunc_FFloor_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Economy/UI_BP_MoneyBar.UI_BP_MoneyBar_C.ExecuteUbergraph_UI_BP_MoneyBar"));
    struct Params_ExecuteUbergraph_UI_BP_MoneyBar {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
        bool CallFunc_Less_FloatFloat_ReturnValue; // 0x5
        char pad_6[0x2];
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x8
        float CallFunc_Conv_IntToFloat_ReturnValue; // 0xc
        float CallFunc_Conv_IntToFloat_ReturnValue_1; // 0x10
        float CallFunc_Lerp_ReturnValue; // 0x14
        int32_t CallFunc_FFloor_ReturnValue; // 0x18
        FGeometry K2Node_Event_MyGeometry; // 0x1c
        float K2Node_Event_InDeltaTime; // 0x54
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0x58
        char pad_59[0x3];
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x5c
    }; // Size: 0x60
    Params_ExecuteUbergraph_UI_BP_MoneyBar params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.CallFunc_Less_FloatFloat_ReturnValue = (bool)CallFunc_Less_FloatFloat_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_Conv_IntToFloat_ReturnValue = (float)CallFunc_Conv_IntToFloat_ReturnValue;
    params.CallFunc_Conv_IntToFloat_ReturnValue_1 = (float)CallFunc_Conv_IntToFloat_ReturnValue_1;
    params.CallFunc_Lerp_ReturnValue = (float)CallFunc_Lerp_ReturnValue;
    params.CallFunc_FFloor_ReturnValue = (int32_t)CallFunc_FFloor_ReturnValue;
    params.K2Node_Event_MyGeometry = (FGeometry)K2Node_Event_MyGeometry;
    params.K2Node_Event_InDeltaTime = (float)K2Node_Event_InDeltaTime;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
