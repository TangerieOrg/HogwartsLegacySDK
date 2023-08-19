#include "UFXUpdate_ComponentHighContrastGameplayAutoMarkup.hpp"
#include "UFXUpdate_ComponentHighContrastGameplayMarkupBase.hpp"
UFXUpdate_ComponentHighContrastGameplayAutoMarkup* UFXUpdate_ComponentHighContrastGameplayAutoMarkup::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXUpdate_ComponentHighContrastGameplayAutoMarkup");
    return (UFXUpdate_ComponentHighContrastGameplayAutoMarkup*)res;
}
