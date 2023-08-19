#include "FScrollBoxStyle.hpp"
#include "UScrollBoxWidgetStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
UScrollBoxWidgetStyle* UScrollBoxWidgetStyle::StaticClass() {
    static auto res = find_uobject("Class /Script/Slate.ScrollBoxWidgetStyle");
    return (UScrollBoxWidgetStyle*)res;
}
