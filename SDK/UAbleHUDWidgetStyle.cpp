#include "FAbleHUDStyle.hpp"
#include "UAbleHUDWidgetStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
UAbleHUDWidgetStyle* UAbleHUDWidgetStyle::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AbleHUDWidgetStyle");
    return (UAbleHUDWidgetStyle*)res;
}
