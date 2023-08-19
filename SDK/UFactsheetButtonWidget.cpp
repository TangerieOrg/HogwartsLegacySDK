#include "EFactsheetButtonState.hpp"
#include "UFactsheetButtonWidget.hpp"
#include "UIconButtonWidget.hpp"
UFactsheetButtonWidget* UFactsheetButtonWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FactsheetButtonWidget");
    return (UFactsheetButtonWidget*)res;
}
