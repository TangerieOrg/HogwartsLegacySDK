#include "UModFilter.hpp"
#include "UModFilter_UseItem_Base.hpp"
UModFilter_UseItem_Base* UModFilter_UseItem_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_UseItem_Base");
    return (UModFilter_UseItem_Base*)res;
}
