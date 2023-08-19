#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UOverlay.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UUI_BP_HUDHint_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_HUDHint_C* UUI_BP_HUDHint_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Hint/UI_BP_HUDHint.UI_BP_HUDHint_C");
    return (UUI_BP_HUDHint_C*)res;
}
void UUI_BP_HUDHint_C::ClearHint(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Hint/UI_BP_HUDHint.UI_BP_HUDHint_C.ClearHint"));
    struct Params_ClearHint {
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_ClearHint params{};
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_HUDHint_C::WidgetAnimationEvt_Hint_Outro_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Hint/UI_BP_HUDHint.UI_BP_HUDHint_C.WidgetAnimationEvt_Hint_Outro_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_Hint_Outro_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_Hint_Outro_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HUDHint_C::SetAndShowHint(FString HintKey, float MaxDuration, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Hint/UI_BP_HUDHint.UI_BP_HUDHint_C.SetAndShowHint"));
    struct Params_SetAndShowHint {
        FString HintKey; // 0x0
        float MaxDuration; // 0x10
        char pad_14[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_SetAndShowHint params{};
    params.HintKey = (FString)HintKey;
    params.MaxDuration = (float)MaxDuration;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_HUDHint_C::ResetAutoHideTimer(float MaxDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Hint/UI_BP_HUDHint.UI_BP_HUDHint_C.ResetAutoHideTimer"));
    struct Params_ResetAutoHideTimer {
        float MaxDuration; // 0x0
    }; // Size: 0x4
    Params_ResetAutoHideTimer params{};
    params.MaxDuration = (float)MaxDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_HUDHint_C::ExecuteUbergraph_UI_BP_HUDHint(int32_t EntryPoint, float K2Node_CustomEvent_MaxDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Hint/UI_BP_HUDHint.UI_BP_HUDHint_C.ExecuteUbergraph_UI_BP_HUDHint"));
    struct Params_ExecuteUbergraph_UI_BP_HUDHint {
        int32_t EntryPoint; // 0x0
        float K2Node_CustomEvent_MaxDuration; // 0x4
    }; // Size: 0x8
    Params_ExecuteUbergraph_UI_BP_HUDHint params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_CustomEvent_MaxDuration = (float)K2Node_CustomEvent_MaxDuration;
    ProcessEvent(func, &params);
}
