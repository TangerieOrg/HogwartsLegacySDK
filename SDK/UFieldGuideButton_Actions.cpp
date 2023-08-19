#include "UFieldGuideButtonBase.hpp"
#include "UFieldGuideButton_Actions.hpp"
UFieldGuideButton_Actions* UFieldGuideButton_Actions::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FieldGuideButton_Actions");
    return (UFieldGuideButton_Actions*)res;
}
