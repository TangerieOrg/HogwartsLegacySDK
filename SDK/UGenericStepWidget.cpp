#include "UFunction.hpp"
#include "UGenericStepWidget.hpp"
#include "UImage.hpp"
#include "UUserWidget.hpp"
UGenericStepWidget* UGenericStepWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GenericStepWidget");
    return (UGenericStepWidget*)res;
}
void UGenericStepWidget::UntickBox(UImage* Image) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GenericStepWidget.UntickBox"));
    struct Params_UntickBox {
        UImage* Image; // 0x0
    }; // Size: 0x8
    Params_UntickBox params{};
    params.Image = (UImage*)Image;
    ProcessEvent(func, &params);
}
void UGenericStepWidget::TickBox(UImage* Image) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GenericStepWidget.TickBox"));
    struct Params_TickBox {
        UImage* Image; // 0x0
    }; // Size: 0x8
    Params_TickBox params{};
    params.Image = (UImage*)Image;
    ProcessEvent(func, &params);
}
