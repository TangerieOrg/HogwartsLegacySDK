#include "FButtonStyle.hpp"
#include "UButtonWidgetStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
UButtonWidgetStyle* UButtonWidgetStyle::StaticClass() {
    static auto res = find_uobject("Class /Script/Slate.ButtonWidgetStyle");
    return (UButtonWidgetStyle*)res;
}
