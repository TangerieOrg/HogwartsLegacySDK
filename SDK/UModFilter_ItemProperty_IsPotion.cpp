#include "UModFilter_ItemProperty_Base.hpp"
#include "UModFilter_ItemProperty_IsPotion.hpp"
UModFilter_ItemProperty_IsPotion* UModFilter_ItemProperty_IsPotion::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_ItemProperty_IsPotion");
    return (UModFilter_ItemProperty_IsPotion*)res;
}
