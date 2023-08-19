#include "UAvaUserWidget.hpp"
#include "UFunction.hpp"
#include "UPhoenixUserWidget.hpp"
UAvaUserWidget* UAvaUserWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvaUserWidget");
    return (UAvaUserWidget*)res;
}
void UAvaUserWidget::OnSynchronizeProperties() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaUserWidget.OnSynchronizeProperties"));
    struct Params_OnSynchronizeProperties {
    }; // Size: 0x0
    Params_OnSynchronizeProperties params{};
    ProcessEvent(func, &params);
}
