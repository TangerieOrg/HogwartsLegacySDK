#include "FComboButtonStyle.hpp"
#include "UComboButtonWidgetStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
UComboButtonWidgetStyle* UComboButtonWidgetStyle::StaticClass() {
    static auto res = find_uobject("Class /Script/Slate.ComboButtonWidgetStyle");
    return (UComboButtonWidgetStyle*)res;
}
