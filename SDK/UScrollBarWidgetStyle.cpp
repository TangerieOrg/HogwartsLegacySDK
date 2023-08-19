#include "FScrollBarStyle.hpp"
#include "UScrollBarWidgetStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
UScrollBarWidgetStyle* UScrollBarWidgetStyle::StaticClass() {
    static auto res = find_uobject("Class /Script/Slate.ScrollBarWidgetStyle");
    return (UScrollBarWidgetStyle*)res;
}
