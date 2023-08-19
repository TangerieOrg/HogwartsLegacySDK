#include "UFieldGuideButtonBase.hpp"
#include "UFieldGuideButton_Gear.hpp"
UFieldGuideButton_Gear* UFieldGuideButton_Gear::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FieldGuideButton_Gear");
    return (UFieldGuideButton_Gear*)res;
}
