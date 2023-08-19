#include "FCheckBoxStyle.hpp"
#include "UCheckBoxWidgetStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
UCheckBoxWidgetStyle* UCheckBoxWidgetStyle::StaticClass() {
    static auto res = find_uobject("Class /Script/Slate.CheckBoxWidgetStyle");
    return (UCheckBoxWidgetStyle*)res;
}
