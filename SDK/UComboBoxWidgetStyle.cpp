#include "FComboBoxStyle.hpp"
#include "UComboBoxWidgetStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
UComboBoxWidgetStyle* UComboBoxWidgetStyle::StaticClass() {
    static auto res = find_uobject("Class /Script/Slate.ComboBoxWidgetStyle");
    return (UComboBoxWidgetStyle*)res;
}
