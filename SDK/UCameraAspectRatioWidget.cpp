#include "UCameraAspectRatioWidget.hpp"
#include "UFunction.hpp"
#include "UUserWidget.hpp"
UCameraAspectRatioWidget* UCameraAspectRatioWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraAspectRatioWidget");
    return (UCameraAspectRatioWidget*)res;
}
void UCameraAspectRatioWidget::UI_UpdateLetterbox(float InBarScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraAspectRatioWidget.UI_UpdateLetterbox"));
    struct Params_UI_UpdateLetterbox {
        float InBarScale; // 0x0
    }; // Size: 0x4
    Params_UI_UpdateLetterbox params{};
    params.InBarScale = (float)InBarScale;
    ProcessEvent(func, &params);
}
void UCameraAspectRatioWidget::UI_UpdatePillarbox(float InBarScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraAspectRatioWidget.UI_UpdatePillarbox"));
    struct Params_UI_UpdatePillarbox {
        float InBarScale; // 0x0
    }; // Size: 0x4
    Params_UI_UpdatePillarbox params{};
    params.InBarScale = (float)InBarScale;
    ProcessEvent(func, &params);
}
void UCameraAspectRatioWidget::UI_HideBars() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraAspectRatioWidget.UI_HideBars"));
    struct Params_UI_HideBars {
    }; // Size: 0x0
    Params_UI_HideBars params{};
    ProcessEvent(func, &params);
}
