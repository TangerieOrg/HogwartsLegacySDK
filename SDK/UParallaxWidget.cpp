#include "UCanvasPanelSlot.hpp"
#include "UFunction.hpp"
#include "UParallaxWidget.hpp"
#include "UUserWidget.hpp"
UParallaxWidget* UParallaxWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ParallaxWidget");
    return (UParallaxWidget*)res;
}
void UParallaxWidget::SyncParallaxToCursor(UCanvasPanelSlot* ParallaxingObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ParallaxWidget.SyncParallaxToCursor"));
    struct Params_SyncParallaxToCursor {
        UCanvasPanelSlot* ParallaxingObject; // 0x0
    }; // Size: 0x8
    Params_SyncParallaxToCursor params{};
    params.ParallaxingObject = (UCanvasPanelSlot*)ParallaxingObject;
    ProcessEvent(func, &params);
}
void UParallaxWidget::ApplyParallaxEffect(UCanvasPanelSlot* ParallaxingObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ParallaxWidget.ApplyParallaxEffect"));
    struct Params_ApplyParallaxEffect {
        UCanvasPanelSlot* ParallaxingObject; // 0x0
    }; // Size: 0x8
    Params_ApplyParallaxEffect params{};
    params.ParallaxingObject = (UCanvasPanelSlot*)ParallaxingObject;
    ProcessEvent(func, &params);
}
void UParallaxWidget::SetInitialCursorPosition(UCanvasPanelSlot* ParallaxingObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ParallaxWidget.SetInitialCursorPosition"));
    struct Params_SetInitialCursorPosition {
        UCanvasPanelSlot* ParallaxingObject; // 0x0
    }; // Size: 0x8
    Params_SetInitialCursorPosition params{};
    params.ParallaxingObject = (UCanvasPanelSlot*)ParallaxingObject;
    ProcessEvent(func, &params);
}
UCanvasPanelSlot* UParallaxWidget::GetSlot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ParallaxWidget.GetSlot"));
    struct Params_GetSlot {
        UCanvasPanelSlot* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSlot params{};
    ProcessEvent(func, &params);
    return (UCanvasPanelSlot*)params.ReturnValue;
}
void UParallaxWidget::IgnoreParallax() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ParallaxWidget.IgnoreParallax"));
    struct Params_IgnoreParallax {
    }; // Size: 0x0
    Params_IgnoreParallax params{};
    ProcessEvent(func, &params);
}
void UParallaxWidget::ApplyParallax() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ParallaxWidget.ApplyParallax"));
    struct Params_ApplyParallax {
    }; // Size: 0x0
    Params_ApplyParallax params{};
    ProcessEvent(func, &params);
}
