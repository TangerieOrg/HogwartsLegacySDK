#include "UModFilter.hpp"
#include "UModFilter_OnHit_Base.hpp"
UModFilter_OnHit_Base* UModFilter_OnHit_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_OnHit_Base");
    return (UModFilter_OnHit_Base*)res;
}
