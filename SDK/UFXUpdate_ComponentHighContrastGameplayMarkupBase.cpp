#include "UFXUpdate_ComponentHighContrastGameplayMarkupBase.hpp"
#include "UFXUpdate_Tick.hpp"
UFXUpdate_ComponentHighContrastGameplayMarkupBase* UFXUpdate_ComponentHighContrastGameplayMarkupBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXUpdate_ComponentHighContrastGameplayMarkupBase");
    return (UFXUpdate_ComponentHighContrastGameplayMarkupBase*)res;
}
