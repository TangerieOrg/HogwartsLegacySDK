#include "ACaptureDeviceItemTool.hpp"
#include "FVector2D.hpp"
#include "UCapturingWidget.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "USceneComponent.hpp"
UCapturingWidget* UCapturingWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CapturingWidget");
    return (UCapturingWidget*)res;
}
void UCapturingWidget::HideWhenReady(float HideAfterTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CapturingWidget.HideWhenReady"));
    struct Params_HideWhenReady {
        float HideAfterTime; // 0x0
    }; // Size: 0x4
    Params_HideWhenReady params{};
    params.HideAfterTime = (float)HideAfterTime;
    ProcessEvent(func, &params);
}
void UCapturingWidget::Show() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CapturingWidget.Show"));
    struct Params_Show {
    }; // Size: 0x0
    Params_Show params{};
    ProcessEvent(func, &params);
}
void UCapturingWidget::RemoveFromHUD() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CapturingWidget.RemoveFromHUD"));
    struct Params_RemoveFromHUD {
    }; // Size: 0x0
    Params_RemoveFromHUD params{};
    ProcessEvent(func, &params);
}
