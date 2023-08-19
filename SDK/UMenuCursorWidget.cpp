#include "UFunction.hpp"
#include "UMenuCursorWidget.hpp"
#include "UUserWidget.hpp"
UMenuCursorWidget* UMenuCursorWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MenuCursorWidget");
    return (UMenuCursorWidget*)res;
}
void UMenuCursorWidget::SetTooltipExpandState(bool IsExpanded, bool ShouldAnimate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MenuCursorWidget.SetTooltipExpandState"));
    struct Params_SetTooltipExpandState {
        bool IsExpanded; // 0x0
        bool ShouldAnimate; // 0x1
    }; // Size: 0x2
    Params_SetTooltipExpandState params{};
    params.IsExpanded = (bool)IsExpanded;
    params.ShouldAnimate = (bool)ShouldAnimate;
    ProcessEvent(func, &params);
}
void UMenuCursorWidget::OnScaleCursor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MenuCursorWidget.OnScaleCursor"));
    struct Params_OnScaleCursor {
    }; // Size: 0x0
    Params_OnScaleCursor params{};
    ProcessEvent(func, &params);
}
void UMenuCursorWidget::ScaleCursor(bool IsHover) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MenuCursorWidget.ScaleCursor"));
    struct Params_ScaleCursor {
        bool IsHover; // 0x0
    }; // Size: 0x1
    Params_ScaleCursor params{};
    params.IsHover = (bool)IsHover;
    ProcessEvent(func, &params);
}
void UMenuCursorWidget::Cursor_FadeOut() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MenuCursorWidget.Cursor_FadeOut"));
    struct Params_Cursor_FadeOut {
    }; // Size: 0x0
    Params_Cursor_FadeOut params{};
    ProcessEvent(func, &params);
}
void UMenuCursorWidget::ResetTooltipState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MenuCursorWidget.ResetTooltipState"));
    struct Params_ResetTooltipState {
    }; // Size: 0x0
    Params_ResetTooltipState params{};
    ProcessEvent(func, &params);
}
void UMenuCursorWidget::Cursor_FadeOutDone() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MenuCursorWidget.Cursor_FadeOutDone"));
    struct Params_Cursor_FadeOutDone {
    }; // Size: 0x0
    Params_Cursor_FadeOutDone params{};
    ProcessEvent(func, &params);
}
void UMenuCursorWidget::Cursor_FadeInDone() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MenuCursorWidget.Cursor_FadeInDone"));
    struct Params_Cursor_FadeInDone {
    }; // Size: 0x0
    Params_Cursor_FadeInDone params{};
    ProcessEvent(func, &params);
}
void UMenuCursorWidget::Cursor_FadeIn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MenuCursorWidget.Cursor_FadeIn"));
    struct Params_Cursor_FadeIn {
    }; // Size: 0x0
    Params_Cursor_FadeIn params{};
    ProcessEvent(func, &params);
}
