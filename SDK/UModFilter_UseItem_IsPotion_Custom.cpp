#include "UClass.hpp"
#include "UModFilter_UseItem_Base.hpp"
#include "UModFilter_UseItem_IsPotion_Custom.hpp"
UModFilter_UseItem_IsPotion_Custom* UModFilter_UseItem_IsPotion_Custom::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_UseItem_IsPotion_Custom");
    return (UModFilter_UseItem_IsPotion_Custom*)res;
}
