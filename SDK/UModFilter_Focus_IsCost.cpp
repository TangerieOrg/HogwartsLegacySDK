#include "UModFilter_Focus_Base.hpp"
#include "UModFilter_Focus_IsCost.hpp"
UModFilter_Focus_IsCost* UModFilter_Focus_IsCost::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_Focus_IsCost");
    return (UModFilter_Focus_IsCost*)res;
}
