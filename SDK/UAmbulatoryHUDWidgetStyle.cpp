#include "FAmbulatoryHUDStyle.hpp"
#include "UAmbulatoryHUDWidgetStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
UAmbulatoryHUDWidgetStyle* UAmbulatoryHUDWidgetStyle::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.AmbulatoryHUDWidgetStyle");
    return (UAmbulatoryHUDWidgetStyle*)res;
}
