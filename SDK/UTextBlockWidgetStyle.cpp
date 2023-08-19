#include "FTextBlockStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
#include "UTextBlockWidgetStyle.hpp"
UTextBlockWidgetStyle* UTextBlockWidgetStyle::StaticClass() {
    static auto res = find_uobject("Class /Script/Slate.TextBlockWidgetStyle");
    return (UTextBlockWidgetStyle*)res;
}
