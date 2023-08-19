#include "UIconButtonWidget.hpp"
#include "UTabIconButtonWidget.hpp"
UTabIconButtonWidget* UTabIconButtonWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TabIconButtonWidget");
    return (UTabIconButtonWidget*)res;
}
