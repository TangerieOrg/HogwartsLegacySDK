#include "UModFilter.hpp"
#include "UModFilter_Global_Base.hpp"
UModFilter_Global_Base* UModFilter_Global_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_Global_Base");
    return (UModFilter_Global_Base*)res;
}
