#include "UDiningTableButtonWidget.hpp"
#include "UUserWidget.hpp"
UDiningTableButtonWidget* UDiningTableButtonWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DiningTableButtonWidget");
    return (UDiningTableButtonWidget*)res;
}
