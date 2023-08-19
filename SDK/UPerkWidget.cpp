#include "UPerkWidget.hpp"
#include "UTabPageWidget.hpp"
UPerkWidget* UPerkWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PerkWidget");
    return (UPerkWidget*)res;
}
