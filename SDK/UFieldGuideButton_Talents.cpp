#include "UFieldGuideButtonBase.hpp"
#include "UFieldGuideButton_Talents.hpp"
UFieldGuideButton_Talents* UFieldGuideButton_Talents::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FieldGuideButton_Talents");
    return (UFieldGuideButton_Talents*)res;
}
