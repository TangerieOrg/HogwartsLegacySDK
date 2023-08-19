#include "FProgressBarStyle.hpp"
#include "UProgressWidgetStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
UProgressWidgetStyle* UProgressWidgetStyle::StaticClass() {
    static auto res = find_uobject("Class /Script/Slate.ProgressWidgetStyle");
    return (UProgressWidgetStyle*)res;
}
