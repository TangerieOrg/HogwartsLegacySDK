#include "EConsumeMouseWheel.hpp"
#include "EDescendantScrollDestination.hpp"
#include "EOrientation.hpp"
#include "EScrollWhenFocusChanges.hpp"
#include "ESlateVisibility.hpp"
#include "FMargin.hpp"
#include "FScrollBarStyle.hpp"
#include "FScrollBoxStyle.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UPanelWidget.hpp"
#include "UScrollBox.hpp"
#include "USlateWidgetStyleAsset.hpp"
#include "UWidget.hpp"
void UScrollBox::SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScrollBox.SetScrollBarVisibility"));
    struct Params_SetScrollBarVisibility {
        ESlateVisibility NewScrollBarVisibility; // 0x0
    }; // Size: 0x1
    Params_SetScrollBarVisibility params{};
    params.NewScrollBarVisibility = (ESlateVisibility)NewScrollBarVisibility;
    ProcessEvent(func, &params);
}
UScrollBox* UScrollBox::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.ScrollBox");
    return (UScrollBox*)res;
}
void UScrollBox::SetScrollbarThickness(FVector2D& NewScrollbarThickness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScrollBox.SetScrollbarThickness"));
    struct Params_SetScrollbarThickness {
        FVector2D NewScrollbarThickness; // 0x0
    }; // Size: 0x8
    Params_SetScrollbarThickness params{};
    params.NewScrollbarThickness = (FVector2D)NewScrollbarThickness;
    ProcessEvent(func, &params);
    NewScrollbarThickness = params.NewScrollbarThickness;
}
void UScrollBox::SetWheelScrollMultiplier(float NewWheelScrollMultiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScrollBox.SetWheelScrollMultiplier"));
    struct Params_SetWheelScrollMultiplier {
        float NewWheelScrollMultiplier; // 0x0
    }; // Size: 0x4
    Params_SetWheelScrollMultiplier params{};
    params.NewWheelScrollMultiplier = (float)NewWheelScrollMultiplier;
    ProcessEvent(func, &params);
}
void UScrollBox::SetScrollWhenFocusChanges(EScrollWhenFocusChanges NewScrollWhenFocusChanges) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScrollBox.SetScrollWhenFocusChanges"));
    struct Params_SetScrollWhenFocusChanges {
        EScrollWhenFocusChanges NewScrollWhenFocusChanges; // 0x0
    }; // Size: 0x1
    Params_SetScrollWhenFocusChanges params{};
    params.NewScrollWhenFocusChanges = (EScrollWhenFocusChanges)NewScrollWhenFocusChanges;
    ProcessEvent(func, &params);
}
void UScrollBox::SetScrollOffset(float NewScrollOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScrollBox.SetScrollOffset"));
    struct Params_SetScrollOffset {
        float NewScrollOffset; // 0x0
    }; // Size: 0x4
    Params_SetScrollOffset params{};
    params.NewScrollOffset = (float)NewScrollOffset;
    ProcessEvent(func, &params);
}
void UScrollBox::SetScrollbarPadding(FMargin& NewScrollbarPadding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScrollBox.SetScrollbarPadding"));
    struct Params_SetScrollbarPadding {
        FMargin NewScrollbarPadding; // 0x0
    }; // Size: 0x10
    Params_SetScrollbarPadding params{};
    params.NewScrollbarPadding = (FMargin)NewScrollbarPadding;
    ProcessEvent(func, &params);
    NewScrollbarPadding = params.NewScrollbarPadding;
}
void UScrollBox::SetOrientation(EOrientation NewOrientation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScrollBox.SetOrientation"));
    struct Params_SetOrientation {
        EOrientation NewOrientation; // 0x0
    }; // Size: 0x1
    Params_SetOrientation params{};
    params.NewOrientation = (EOrientation)NewOrientation;
    ProcessEvent(func, &params);
}
void UScrollBox::SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScrollBox.SetConsumeMouseWheel"));
    struct Params_SetConsumeMouseWheel {
        EConsumeMouseWheel NewConsumeMouseWheel; // 0x0
    }; // Size: 0x1
    Params_SetConsumeMouseWheel params{};
    params.NewConsumeMouseWheel = (EConsumeMouseWheel)NewConsumeMouseWheel;
    ProcessEvent(func, &params);
}
void UScrollBox::SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScrollBox.SetAnimateWheelScrolling"));
    struct Params_SetAnimateWheelScrolling {
        bool bShouldAnimateWheelScrolling; // 0x0
    }; // Size: 0x1
    Params_SetAnimateWheelScrolling params{};
    params.bShouldAnimateWheelScrolling = (bool)bShouldAnimateWheelScrolling;
    ProcessEvent(func, &params);
}
void UScrollBox::SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScrollBox.SetAlwaysShowScrollbar"));
    struct Params_SetAlwaysShowScrollbar {
        bool NewAlwaysShowScrollbar; // 0x0
    }; // Size: 0x1
    Params_SetAlwaysShowScrollbar params{};
    params.NewAlwaysShowScrollbar = (bool)NewAlwaysShowScrollbar;
    ProcessEvent(func, &params);
}
void UScrollBox::SetAllowOverscroll(bool NewAllowOverscroll) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScrollBox.SetAllowOverscroll"));
    struct Params_SetAllowOverscroll {
        bool NewAllowOverscroll; // 0x0
    }; // Size: 0x1
    Params_SetAllowOverscroll params{};
    params.NewAllowOverscroll = (bool)NewAllowOverscroll;
    ProcessEvent(func, &params);
}
void UScrollBox::ScrollWidgetIntoView(UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScrollBox.ScrollWidgetIntoView"));
    struct Params_ScrollWidgetIntoView {
        UWidget* WidgetToFind; // 0x0
        bool AnimateScroll; // 0x8
        EDescendantScrollDestination ScrollDestination; // 0x9
        char pad_a[0x2];
        float Padding; // 0xc
    }; // Size: 0x10
    Params_ScrollWidgetIntoView params{};
    params.WidgetToFind = (UWidget*)WidgetToFind;
    params.AnimateScroll = (bool)AnimateScroll;
    params.ScrollDestination = (EDescendantScrollDestination)ScrollDestination;
    params.Padding = (float)Padding;
    ProcessEvent(func, &params);
}
float UScrollBox::GetScrollOffsetOfEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScrollBox.GetScrollOffsetOfEnd"));
    struct Params_GetScrollOffsetOfEnd {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetScrollOffsetOfEnd params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UScrollBox::ScrollToStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScrollBox.ScrollToStart"));
    struct Params_ScrollToStart {
    }; // Size: 0x0
    Params_ScrollToStart params{};
    ProcessEvent(func, &params);
}
void UScrollBox::ScrollToEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScrollBox.ScrollToEnd"));
    struct Params_ScrollToEnd {
    }; // Size: 0x0
    Params_ScrollToEnd params{};
    ProcessEvent(func, &params);
}
float UScrollBox::GetViewOffsetFraction() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScrollBox.GetViewOffsetFraction"));
    struct Params_GetViewOffsetFraction {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetViewOffsetFraction params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UScrollBox::GetScrollOffset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScrollBox.GetScrollOffset"));
    struct Params_GetScrollOffset {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetScrollOffset params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UScrollBox::EndInertialScrolling() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScrollBox.EndInertialScrolling"));
    struct Params_EndInertialScrolling {
    }; // Size: 0x0
    Params_EndInertialScrolling params{};
    ProcessEvent(func, &params);
}
