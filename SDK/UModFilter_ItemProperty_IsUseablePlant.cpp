#include "UModFilter_ItemProperty_Base.hpp"
#include "UModFilter_ItemProperty_IsUseablePlant.hpp"
UModFilter_ItemProperty_IsUseablePlant* UModFilter_ItemProperty_IsUseablePlant::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_ItemProperty_IsUseablePlant");
    return (UModFilter_ItemProperty_IsUseablePlant*)res;
}
