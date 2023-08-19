#include "UFunction.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UProgressBar.hpp"
#include "UProgressBarWidget.hpp"
#include "UUserWidget.hpp"
void UProgressBarWidget::SetProgress(float NewProgress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProgressBarWidget.SetProgress"));
    struct Params_SetProgress {
        float NewProgress; // 0x0
    }; // Size: 0x4
    Params_SetProgress params{};
    params.NewProgress = (float)NewProgress;
    ProcessEvent(func, &params);
}
UProgressBarWidget* UProgressBarWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ProgressBarWidget");
    return (UProgressBarWidget*)res;
}
void UProgressBarWidget::SetLabel() {}
void UProgressBarWidget::OnSynchronizeProperties() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProgressBarWidget.OnSynchronizeProperties"));
    struct Params_OnSynchronizeProperties {
    }; // Size: 0x0
    Params_OnSynchronizeProperties params{};
    ProcessEvent(func, &params);
}
