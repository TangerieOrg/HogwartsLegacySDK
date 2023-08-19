#include "UComboBox.hpp"
#include "UObject.hpp"
#include "UWidget.hpp"
UComboBox* UComboBox::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.ComboBox");
    return (UComboBox*)res;
}
