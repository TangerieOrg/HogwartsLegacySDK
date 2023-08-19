#include "UModFilter.hpp"
#include "UModFilter_Focus_Base.hpp"
UModFilter_Focus_Base* UModFilter_Focus_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_Focus_Base");
    return (UModFilter_Focus_Base*)res;
}
