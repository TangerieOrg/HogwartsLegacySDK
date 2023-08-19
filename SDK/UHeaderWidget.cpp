#include "UFunction.hpp"
#include "UHeaderWidget.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUserWidget.hpp"
UHeaderWidget* UHeaderWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.HeaderWidget");
    return (UHeaderWidget*)res;
}
void UHeaderWidget::SetHeaderTitle() {}
void UHeaderWidget::OnSynchronizeProperties() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HeaderWidget.OnSynchronizeProperties"));
    struct Params_OnSynchronizeProperties {
    }; // Size: 0x0
    Params_OnSynchronizeProperties params{};
    ProcessEvent(func, &params);
}
void UHeaderWidget::SetHeaderSubtitle() {}
