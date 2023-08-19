#include "FSelectableName.hpp"
#include "UModFilter_ItemProperty_Base.hpp"
#include "UModFilter_ItemProperty_Custom.hpp"
UModFilter_ItemProperty_Custom* UModFilter_ItemProperty_Custom::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_ItemProperty_Custom");
    return (UModFilter_ItemProperty_Custom*)res;
}
