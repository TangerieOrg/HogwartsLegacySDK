#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UScreenFadeWidget.hpp"
#include "UUI_BP_ScreenFade_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_ScreenFade_C* UUI_BP_ScreenFade_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/MenuBase/UI_BP_ScreenFade.UI_BP_ScreenFade_C");
    return (UUI_BP_ScreenFade_C*)res;
}
float UUI_BP_ScreenFade_C::UI_GetCurrentFade0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuBase/UI_BP_ScreenFade.UI_BP_ScreenFade_C.UI_GetCurrentFade"));
    struct Params_UI_GetCurrentFade {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_UI_GetCurrentFade params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UUI_BP_ScreenFade_C::CheckFadeFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuBase/UI_BP_ScreenFade.UI_BP_ScreenFade_C.CheckFadeFinished"));
    struct Params_CheckFadeFinished {
    }; // Size: 0x0
    Params_CheckFadeFinished params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ScreenFade_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuBase/UI_BP_ScreenFade.UI_BP_ScreenFade_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ScreenFade_C::FadeOut(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuBase/UI_BP_ScreenFade.UI_BP_ScreenFade_C.FadeOut"));
    struct Params_FadeOut {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_FadeOut params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_ScreenFade_C::FadeIn(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuBase/UI_BP_ScreenFade.UI_BP_ScreenFade_C.FadeIn"));
    struct Params_FadeIn {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_FadeIn params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_ScreenFade_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuBase/UI_BP_ScreenFade.UI_BP_ScreenFade_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ScreenFade_C::UI_FadeOut0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuBase/UI_BP_ScreenFade.UI_BP_ScreenFade_C.UI_FadeOut"));
    struct Params_UI_FadeOut {
    }; // Size: 0x0
    Params_UI_FadeOut params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ScreenFade_C::UI_FadeIn0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuBase/UI_BP_ScreenFade.UI_BP_ScreenFade_C.UI_FadeIn"));
    struct Params_UI_FadeIn {
    }; // Size: 0x0
    Params_UI_FadeIn params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ScreenFade_C::WidgetAnimationEvt_FadeAnim_K2Node_WidgetAnimationEvent_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuBase/UI_BP_ScreenFade.UI_BP_ScreenFade_C.WidgetAnimationEvt_FadeAnim_K2Node_WidgetAnimationEvent_1"));
    struct Params_WidgetAnimationEvt_FadeAnim_K2Node_WidgetAnimationEvent_1 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_FadeAnim_K2Node_WidgetAnimationEvent_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ScreenFade_C::UI_SetManualFade0(float Opacity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuBase/UI_BP_ScreenFade.UI_BP_ScreenFade_C.UI_SetManualFade"));
    struct Params_UI_SetManualFade {
        float Opacity; // 0x0
    }; // Size: 0x4
    Params_UI_SetManualFade params{};
    params.Opacity = (float)Opacity;
    ProcessEvent(func, &params);
}
void UUI_BP_ScreenFade_C::SetFadeColor0(FLinearColor TargetColor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuBase/UI_BP_ScreenFade.UI_BP_ScreenFade_C.SetFadeColor"));
    struct Params_SetFadeColor {
        FLinearColor TargetColor; // 0x0
    }; // Size: 0x10
    Params_SetFadeColor params{};
    params.TargetColor = (FLinearColor)TargetColor;
    ProcessEvent(func, &params);
}
void UUI_BP_ScreenFade_C::ExecuteUbergraph_UI_BP_ScreenFade(int32_t EntryPoint, float K2Node_Event_Opacity, FLinearColor K2Node_Event_TargetColor, FLinearColor K2Node_MakeStruct_LinearColor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuBase/UI_BP_ScreenFade.UI_BP_ScreenFade_C.ExecuteUbergraph_UI_BP_ScreenFade"));
    struct Params_ExecuteUbergraph_UI_BP_ScreenFade {
        int32_t EntryPoint; // 0x0
        float K2Node_Event_Opacity; // 0x4
        FLinearColor K2Node_Event_TargetColor; // 0x8
        FLinearColor K2Node_MakeStruct_LinearColor; // 0x18
    }; // Size: 0x28
    Params_ExecuteUbergraph_UI_BP_ScreenFade params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Opacity = (float)K2Node_Event_Opacity;
    params.K2Node_Event_TargetColor = (FLinearColor)K2Node_Event_TargetColor;
    params.K2Node_MakeStruct_LinearColor = (FLinearColor)K2Node_MakeStruct_LinearColor;
    ProcessEvent(func, &params);
}
