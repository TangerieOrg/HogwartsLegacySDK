#include "FSlateColor.hpp"
#include "UCheckBox.hpp"
#include "UCheckboxWidget.hpp"
#include "UFunction.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUserWidget.hpp"
UCheckboxWidget* UCheckboxWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CheckboxWidget");
    return (UCheckboxWidget*)res;
}
void UCheckboxWidget::StateChanged(bool State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CheckboxWidget.StateChanged"));
    struct Params_StateChanged {
        bool State; // 0x0
    }; // Size: 0x1
    Params_StateChanged params{};
    params.State = (bool)State;
    ProcessEvent(func, &params);
}
void UCheckboxWidget::SetProperties() {}
void UCheckboxWidget::SetCheckboxOnOff() {}
void UCheckboxWidget::OnSynchronizeProperties() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CheckboxWidget.OnSynchronizeProperties"));
    struct Params_OnSynchronizeProperties {
    }; // Size: 0x0
    Params_OnSynchronizeProperties params{};
    ProcessEvent(func, &params);
}
