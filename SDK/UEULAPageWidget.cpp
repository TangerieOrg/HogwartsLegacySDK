#include "UEULAPageWidget.hpp"
#include "UFunction.hpp"
#include "UPhoenixUserWidget.hpp"
UEULAPageWidget* UEULAPageWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EULAPageWidget");
    return (UEULAPageWidget*)res;
}
void UEULAPageWidget::ProceedToNextScreen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EULAPageWidget.ProceedToNextScreen"));
    struct Params_ProceedToNextScreen {
    }; // Size: 0x0
    Params_ProceedToNextScreen params{};
    ProcessEvent(func, &params);
}
