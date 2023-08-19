#include "UAncientMagicWidget.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UUserWidget.hpp"
void UAncientMagicWidget::SetReticuleScale(float Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicWidget.SetReticuleScale"));
    struct Params_SetReticuleScale {
        float Scale; // 0x0
    }; // Size: 0x4
    Params_SetReticuleScale params{};
    params.Scale = (float)Scale;
    ProcessEvent(func, &params);
}
UAncientMagicWidget* UAncientMagicWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AncientMagicWidget");
    return (UAncientMagicWidget*)res;
}
void UAncientMagicWidget::ShowDiscoverProgressButton(bool Show) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicWidget.ShowDiscoverProgressButton"));
    struct Params_ShowDiscoverProgressButton {
        bool Show; // 0x0
    }; // Size: 0x1
    Params_ShowDiscoverProgressButton params{};
    params.Show = (bool)Show;
    ProcessEvent(func, &params);
}
void UAncientMagicWidget::SetProgress(float Progress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicWidget.SetProgress"));
    struct Params_SetProgress {
        float Progress; // 0x0
    }; // Size: 0x4
    Params_SetProgress params{};
    params.Progress = (float)Progress;
    ProcessEvent(func, &params);
}
