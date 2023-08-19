#include "UFunction.hpp"
#include "UOptionsWidget.hpp"
#include "UUserWidget.hpp"
UOptionsWidget* UOptionsWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.OptionsWidget");
    return (UOptionsWidget*)res;
}
void UOptionsWidget::ReturnToFrontEndMenu() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OptionsWidget.ReturnToFrontEndMenu"));
    struct Params_ReturnToFrontEndMenu {
    }; // Size: 0x0
    Params_ReturnToFrontEndMenu params{};
    ProcessEvent(func, &params);
}
