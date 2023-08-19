#include "UFunction.hpp"
#include "UTooltipWidget.hpp"
#include "UUserWidget.hpp"
UTooltipWidget* UTooltipWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TooltipWidget");
    return (UTooltipWidget*)res;
}
void UTooltipWidget::OnSynchronizeProperties() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TooltipWidget.OnSynchronizeProperties"));
    struct Params_OnSynchronizeProperties {
    }; // Size: 0x0
    Params_OnSynchronizeProperties params{};
    ProcessEvent(func, &params);
}
