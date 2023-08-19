#include "FAnchors.hpp"
#include "FCreditEntry.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UPhoenixCreditEntryWidget.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_CreditEntry_Header3_C.hpp"
void UUI_BP_CreditEntry_Header3_C::SetCreditEntryInfo0(FCreditEntry CreditEntry) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_CreditEntry_Header3.UI_BP_CreditEntry_Header3_C.SetCreditEntryInfo"));
    struct Params_SetCreditEntryInfo {
        FCreditEntry CreditEntry; // 0x0
    }; // Size: 0x28
    Params_SetCreditEntryInfo params{};
    params.CreditEntry = (FCreditEntry)CreditEntry;
    ProcessEvent(func, &params);
}
UUI_BP_CreditEntry_Header3_C* UUI_BP_CreditEntry_Header3_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Credits/UI_BP_CreditEntry_Header3.UI_BP_CreditEntry_Header3_C");
    return (UUI_BP_CreditEntry_Header3_C*)res;
}
void UUI_BP_CreditEntry_Header3_C::SetCreditEntryAnimProgress0(float Progress) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_CreditEntry_Header3.UI_BP_CreditEntry_Header3_C.SetCreditEntryAnimProgress"));
    struct Params_SetCreditEntryAnimProgress {
        float Progress; // 0x0
    }; // Size: 0x4
    Params_SetCreditEntryAnimProgress params{};
    params.Progress = (float)Progress;
    ProcessEvent(func, &params);
}
void UUI_BP_CreditEntry_Header3_C::ExecuteUbergraph_UI_BP_CreditEntry_Header3(int32_t EntryPoint, float K2Node_Event_Progress, float CallFunc_Multiply_FloatFloat_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, FMargin K2Node_MakeStruct_Margin, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, FCreditEntry K2Node_Event_CreditEntry, FAnchors K2Node_MakeStruct_Anchors) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_CreditEntry_Header3.UI_BP_CreditEntry_Header3_C.ExecuteUbergraph_UI_BP_CreditEntry_Header3"));
    struct Params_ExecuteUbergraph_UI_BP_CreditEntry_Header3 {
        int32_t EntryPoint; // 0x0
        float K2Node_Event_Progress; // 0x4
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x8
        char pad_c[0x4];
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue; // 0x10
        FMargin K2Node_MakeStruct_Margin; // 0x18
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x28
        FVector2D CallFunc_MakeVector2D_ReturnValue; // 0x2c
        FVector2D CallFunc_MakeVector2D_ReturnValue_1; // 0x34
        char pad_3c[0x4];
        FCreditEntry K2Node_Event_CreditEntry; // 0x40
        FAnchors K2Node_MakeStruct_Anchors; // 0x68
    }; // Size: 0x78
    Params_ExecuteUbergraph_UI_BP_CreditEntry_Header3 params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Progress = (float)K2Node_Event_Progress;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_MakeVector2D_ReturnValue = (FVector2D)CallFunc_MakeVector2D_ReturnValue;
    params.CallFunc_MakeVector2D_ReturnValue_1 = (FVector2D)CallFunc_MakeVector2D_ReturnValue_1;
    params.K2Node_Event_CreditEntry = (FCreditEntry)K2Node_Event_CreditEntry;
    params.K2Node_MakeStruct_Anchors = (FAnchors)K2Node_MakeStruct_Anchors;
    ProcessEvent(func, &params);
}
