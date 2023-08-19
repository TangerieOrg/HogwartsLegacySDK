#include "EHighContrastGameplayMarkup.hpp"
#include "UFXUpdate_ComponentHighContrastGameplayMarkup.hpp"
#include "UFXUpdate_ComponentHighContrastGameplayMarkupBase.hpp"
UFXUpdate_ComponentHighContrastGameplayMarkup* UFXUpdate_ComponentHighContrastGameplayMarkup::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXUpdate_ComponentHighContrastGameplayMarkup");
    return (UFXUpdate_ComponentHighContrastGameplayMarkup*)res;
}
