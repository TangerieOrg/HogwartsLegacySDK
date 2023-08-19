#include "UFunction.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPopoutWidget.hpp"
#include "UUserWidget.hpp"
void UPopoutWidget::OnSynchronizeProperties() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopoutWidget.OnSynchronizeProperties"));
    struct Params_OnSynchronizeProperties {
    }; // Size: 0x0
    Params_OnSynchronizeProperties params{};
    ProcessEvent(func, &params);
}
UPopoutWidget* UPopoutWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PopoutWidget");
    return (UPopoutWidget*)res;
}
