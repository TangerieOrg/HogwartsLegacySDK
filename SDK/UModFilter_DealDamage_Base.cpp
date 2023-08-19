#include "UModFilter.hpp"
#include "UModFilter_DealDamage_Base.hpp"
UModFilter_DealDamage_Base* UModFilter_DealDamage_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Base");
    return (UModFilter_DealDamage_Base*)res;
}
