#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "ULegend.hpp"
#include "ULegendItem.hpp"
#include "UObject.hpp"
#include "UOverlay.hpp"
#include "UOverlaySlot.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_Legend_Horizontal_Screen_C::AddLegendItem(ULegendItem* NewLegendItem) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_Legend_Horizontal_Screen.UI_BP_Legend_Horizontal_Screen_C.AddLegendItem"));
    struct Params_AddLegendItem {
        ULegendItem* NewLegendItem; // 0x0
    }; // Size: 0x8
    Params_AddLegendItem params{};
    params.NewLegendItem = (ULegendItem*)NewLegendItem;
    ProcessEvent(func, &params);
}
UUI_BP_Legend_Horizontal_Screen_C* UUI_BP_Legend_Horizontal_Screen_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/Legend/UI_BP_Legend_Horizontal_Screen.UI_BP_Legend_Horizontal_Screen_C");
    return (UUI_BP_Legend_Horizontal_Screen_C*)res;
}
void UUI_BP_Legend_Horizontal_Screen_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_Legend_Horizontal_Screen.UI_BP_Legend_Horizontal_Screen_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_Legend_Horizontal_Screen_C::AdjustForViewportWidth(float IdealWidth, float CurrentRatio, float CurrentWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, float CallFunc_Subtract_FloatFloat_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin_1, float K2Node_MathExpression_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_Legend_Horizontal_Screen.UI_BP_Legend_Horizontal_Screen_C.AdjustForViewportWidth"));
    struct Params_AdjustForViewportWidth {
        float IdealWidth; // 0x0
        float CurrentRatio; // 0x4
        float CurrentWidth; // 0x8
        float IdealRatio; // 0xc
        FMargin K2Node_MakeStruct_Margin; // 0x10
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x20
        char pad_24[0x4];
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue; // 0x28
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x30
        FMargin K2Node_MakeStruct_Margin_1; // 0x34
        float K2Node_MathExpression_ReturnValue; // 0x44
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x48
        char pad_49[0x3];
        FVector2D CallFunc_GetViewportSize_ReturnValue; // 0x4c
        float CallFunc_BreakVector2D_X; // 0x54
        float CallFunc_BreakVector2D_Y; // 0x58
        float CallFunc_Divide_FloatFloat_ReturnValue_1; // 0x5c
    }; // Size: 0x60
    Params_AdjustForViewportWidth params{};
    params.IdealWidth = (float)IdealWidth;
    params.CurrentRatio = (float)CurrentRatio;
    params.CurrentWidth = (float)CurrentWidth;
    params.IdealRatio = (float)IdealRatio;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.K2Node_MakeStruct_Margin_1 = (FMargin)K2Node_MakeStruct_Margin_1;
    params.K2Node_MathExpression_ReturnValue = (float)K2Node_MathExpression_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_GetViewportSize_ReturnValue = (FVector2D)CallFunc_GetViewportSize_ReturnValue;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_Divide_FloatFloat_ReturnValue_1 = (float)CallFunc_Divide_FloatFloat_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_Legend_Horizontal_Screen_C::RemoveAllLegendItems(int32_t StartFromIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_Legend_Horizontal_Screen.UI_BP_Legend_Horizontal_Screen_C.RemoveAllLegendItems"));
    struct Params_RemoveAllLegendItems {
        int32_t StartFromIndex; // 0x0
    }; // Size: 0x4
    Params_RemoveAllLegendItems params{};
    params.StartFromIndex = (int32_t)StartFromIndex;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_Legend_Horizontal_Screen_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, ULegendItem* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_Legend_Horizontal_Screen.UI_BP_Legend_Horizontal_Screen_C.GatherMenuReaderStrings"));
    struct Params_GatherMenuReaderStrings {
        int32_t DepthLevel; // 0x0
        char pad_4[0x4];
        TArray<FString> ReturnValue; // 0x8
        TArray<FString> TempGatheredStrings; // 0x18
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue; // 0x28
        int32_t Temp_int_Array_Index_Variable; // 0x38
        int32_t Temp_int_Loop_Counter_Variable; // 0x3c
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x40
        char pad_44[0x4];
        ULegendItem* CallFunc_Array_Get_Item; // 0x48
        int32_t CallFunc_Array_Length_ReturnValue; // 0x50
        char pad_54[0x4];
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue_1; // 0x58
        bool CallFunc_Less_IntInt_ReturnValue; // 0x68
    }; // Size: 0x69
    Params_GatherMenuReaderStrings params{};
    params.DepthLevel = (int32_t)DepthLevel;
    params.TempGatheredStrings = (TArray<FString>)TempGatheredStrings;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (ULegendItem*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue_1 = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GatherMenuReaderStrings_ReturnValue = params.CallFunc_GatherMenuReaderStrings_ReturnValue;
    CallFunc_GatherMenuReaderStrings_ReturnValue_1 = params.CallFunc_GatherMenuReaderStrings_ReturnValue_1;
    return (TArray<FString>)params.ReturnValue;
}
void UUI_BP_Legend_Horizontal_Screen_C::FadeLegendOut(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_Legend_Horizontal_Screen.UI_BP_Legend_Horizontal_Screen_C.FadeLegendOut"));
    struct Params_FadeLegendOut {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_FadeLegendOut params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_Legend_Horizontal_Screen_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_Legend_Horizontal_Screen.UI_BP_Legend_Horizontal_Screen_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Legend_Horizontal_Screen_C::FadeLegendIn(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_Legend_Horizontal_Screen.UI_BP_Legend_Horizontal_Screen_C.FadeLegendIn"));
    struct Params_FadeLegendIn {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_FadeLegendIn params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_Legend_Horizontal_Screen_C::ResolutionSettingsApplied(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_Legend_Horizontal_Screen.UI_BP_Legend_Horizontal_Screen_C.ResolutionSettingsApplied"));
    struct Params_ResolutionSettingsApplied {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ResolutionSettingsApplied params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_Legend_Horizontal_Screen_C::ExecuteUbergraph_UI_BP_Legend_Horizontal_Screen(int32_t EntryPoint) {}
