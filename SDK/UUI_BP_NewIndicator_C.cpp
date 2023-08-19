#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UUI_BP_NewIndicator_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_NewIndicator_C::HideAnimationFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_NewIndicator.UI_BP_NewIndicator_C.HideAnimationFinished"));
    struct Params_HideAnimationFinished {
    }; // Size: 0x0
    Params_HideAnimationFinished params{};
    ProcessEvent(func, &params);
}
UUI_BP_NewIndicator_C* UUI_BP_NewIndicator_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/UI_BP_NewIndicator.UI_BP_NewIndicator_C");
    return (UUI_BP_NewIndicator_C*)res;
}
void UUI_BP_NewIndicator_C::ShowNewItem() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_NewIndicator.UI_BP_NewIndicator_C.ShowNewItem"));
    struct Params_ShowNewItem {
    }; // Size: 0x0
    Params_ShowNewItem params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NewIndicator_C::StopPulse() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_NewIndicator.UI_BP_NewIndicator_C.StopPulse"));
    struct Params_StopPulse {
    }; // Size: 0x0
    Params_StopPulse params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NewIndicator_C::HideNewItem() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_NewIndicator.UI_BP_NewIndicator_C.HideNewItem"));
    struct Params_HideNewItem {
    }; // Size: 0x0
    Params_HideNewItem params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NewIndicator_C::PulseNewIcon(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_NewIndicator.UI_BP_NewIndicator_C.PulseNewIcon"));
    struct Params_PulseNewIcon {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_PulseNewIcon params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
