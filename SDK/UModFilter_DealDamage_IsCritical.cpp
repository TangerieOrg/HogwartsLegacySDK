#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_IsCritical.hpp"
UModFilter_DealDamage_IsCritical* UModFilter_DealDamage_IsCritical::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_IsCritical");
    return (UModFilter_DealDamage_IsCritical*)res;
}
