#include "ESlateVisibility.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UAvaUserWidget.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UImage.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "USizeBox.hpp"
#include "UUI_BP_MissionBannerCheckbox_C.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_MissionBannerCheckbox_C::WidgetAnimationEvt_ShowStepComplete_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Labels/UI_BP_MissionBannerCheckbox.UI_BP_MissionBannerCheckbox_C.WidgetAnimationEvt_ShowStepComplete_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_ShowStepComplete_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_ShowStepComplete_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
UUI_BP_MissionBannerCheckbox_C* UUI_BP_MissionBannerCheckbox_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/Labels/UI_BP_MissionBannerCheckbox.UI_BP_MissionBannerCheckbox_C");
    return (UUI_BP_MissionBannerCheckbox_C*)res;
}
void UUI_BP_MissionBannerCheckbox_C::UpdateIconColor(FLinearColor NewColor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Labels/UI_BP_MissionBannerCheckbox.UI_BP_MissionBannerCheckbox_C.UpdateIconColor"));
    struct Params_UpdateIconColor {
        FLinearColor NewColor; // 0x0
    }; // Size: 0x10
    Params_UpdateIconColor params{};
    params.NewColor = (FLinearColor)NewColor;
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBannerCheckbox_C::ShowPaper(bool ShowPaper, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Labels/UI_BP_MissionBannerCheckbox.UI_BP_MissionBannerCheckbox_C.ShowPaper"));
    struct Params_ShowPaper {
        bool ShowPaper; // 0x0
        bool Temp_bool_Variable; // 0x1
        ESlateVisibility Temp_byte_Variable; // 0x2
        ESlateVisibility Temp_byte_Variable_1; // 0x3
        ESlateVisibility K2Node_Select_Default; // 0x4
    }; // Size: 0x5
    Params_ShowPaper params{};
    params.ShowPaper = (bool)ShowPaper;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBannerCheckbox_C::SetCheckmarkData() {}
void UUI_BP_MissionBannerCheckbox_C::SetDynamicSizeBoxHeight() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Labels/UI_BP_MissionBannerCheckbox.UI_BP_MissionBannerCheckbox_C.SetDynamicSizeBoxHeight"));
    struct Params_SetDynamicSizeBoxHeight {
    }; // Size: 0x0
    Params_SetDynamicSizeBoxHeight params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBannerCheckbox_C::ExecuteUbergraph_UI_BP_MissionBannerCheckbox(int32_t EntryPoint, FVector2D CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Labels/UI_BP_MissionBannerCheckbox.UI_BP_MissionBannerCheckbox_C.ExecuteUbergraph_UI_BP_MissionBannerCheckbox"));
    struct Params_ExecuteUbergraph_UI_BP_MissionBannerCheckbox {
        int32_t EntryPoint; // 0x0
        FVector2D CallFunc_GetDesiredSize_ReturnValue; // 0x4
        float CallFunc_BreakVector2D_X; // 0xc
        float CallFunc_BreakVector2D_Y; // 0x10
    }; // Size: 0x14
    Params_ExecuteUbergraph_UI_BP_MissionBannerCheckbox params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetDesiredSize_ReturnValue = (FVector2D)CallFunc_GetDesiredSize_ReturnValue;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    ProcessEvent(func, &params);
}
