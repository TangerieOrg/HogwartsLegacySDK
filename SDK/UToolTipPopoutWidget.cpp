#include "UFunction.hpp"
#include "UHeaderWidget.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UToolTipPopoutWidget.hpp"
#include "UUserWidget.hpp"
UToolTipPopoutWidget* UToolTipPopoutWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ToolTipPopoutWidget");
    return (UToolTipPopoutWidget*)res;
}
void UToolTipPopoutWidget::SetHeaderData() {}
void UToolTipPopoutWidget::OnSynchronizeProperties() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ToolTipPopoutWidget.OnSynchronizeProperties"));
    struct Params_OnSynchronizeProperties {
    }; // Size: 0x0
    Params_OnSynchronizeProperties params{};
    ProcessEvent(func, &params);
}
void UToolTipPopoutWidget::SetButtonLegend() {}
void UToolTipPopoutWidget::SetDescription() {}
