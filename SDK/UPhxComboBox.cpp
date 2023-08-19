#include "UPhoenixUserWidget.hpp"
#include "UPhxComboBox.hpp"
UPhxComboBox* UPhxComboBox::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhxComboBox");
    return (UPhxComboBox*)res;
}
