#include "UModFilter.hpp"
#include "UModFilter_ItemProperty_Base.hpp"
UModFilter_ItemProperty_Base* UModFilter_ItemProperty_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_ItemProperty_Base");
    return (UModFilter_ItemProperty_Base*)res;
}
