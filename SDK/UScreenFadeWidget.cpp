#include "FLinearColor.hpp"
#include "UFunction.hpp"
#include "UScreenFadeWidget.hpp"
#include "UUserWidget.hpp"
UScreenFadeWidget* UScreenFadeWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ScreenFadeWidget");
    return (UScreenFadeWidget*)res;
}
void UScreenFadeWidget::UI_FadeOutDone() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScreenFadeWidget.UI_FadeOutDone"));
    struct Params_UI_FadeOutDone {
    }; // Size: 0x0
    Params_UI_FadeOutDone params{};
    ProcessEvent(func, &params);
}
void UScreenFadeWidget::UI_SetManualFade(float Opacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScreenFadeWidget.UI_SetManualFade"));
    struct Params_UI_SetManualFade {
        float Opacity; // 0x0
    }; // Size: 0x4
    Params_UI_SetManualFade params{};
    params.Opacity = (float)Opacity;
    ProcessEvent(func, &params);
}
bool UScreenFadeWidget::UI_IsFading() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScreenFadeWidget.UI_IsFading"));
    struct Params_UI_IsFading {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_UI_IsFading params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UScreenFadeWidget::UI_GetCurrentFade() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScreenFadeWidget.UI_GetCurrentFade"));
    struct Params_UI_GetCurrentFade {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_UI_GetCurrentFade params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UScreenFadeWidget::UI_FadeOut() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScreenFadeWidget.UI_FadeOut"));
    struct Params_UI_FadeOut {
    }; // Size: 0x0
    Params_UI_FadeOut params{};
    ProcessEvent(func, &params);
}
void UScreenFadeWidget::UI_FadeIn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScreenFadeWidget.UI_FadeIn"));
    struct Params_UI_FadeIn {
    }; // Size: 0x0
    Params_UI_FadeIn params{};
    ProcessEvent(func, &params);
}
void UScreenFadeWidget::UI_FadeInDone() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScreenFadeWidget.UI_FadeInDone"));
    struct Params_UI_FadeInDone {
    }; // Size: 0x0
    Params_UI_FadeInDone params{};
    ProcessEvent(func, &params);
}
void UScreenFadeWidget::SetFadeColor(FLinearColor TargetColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScreenFadeWidget.SetFadeColor"));
    struct Params_SetFadeColor {
        FLinearColor TargetColor; // 0x0
    }; // Size: 0x10
    Params_SetFadeColor params{};
    params.TargetColor = (FLinearColor)TargetColor;
    ProcessEvent(func, &params);
}
void UScreenFadeWidget::OnCurtainLowered() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScreenFadeWidget.OnCurtainLowered"));
    struct Params_OnCurtainLowered {
    }; // Size: 0x0
    Params_OnCurtainLowered params{};
    ProcessEvent(func, &params);
}
