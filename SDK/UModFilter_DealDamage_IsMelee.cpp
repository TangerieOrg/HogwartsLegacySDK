#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_IsMelee.hpp"
UModFilter_DealDamage_IsMelee* UModFilter_DealDamage_IsMelee::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_IsMelee");
    return (UModFilter_DealDamage_IsMelee*)res;
}
