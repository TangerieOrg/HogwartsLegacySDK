#include "UFieldGuideButtonBase.hpp"
#include "UFieldGuideButton_Inventory.hpp"
UFieldGuideButton_Inventory* UFieldGuideButton_Inventory::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FieldGuideButton_Inventory");
    return (UFieldGuideButton_Inventory*)res;
}
