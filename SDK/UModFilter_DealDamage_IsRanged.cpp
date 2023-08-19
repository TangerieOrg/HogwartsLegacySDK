#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_IsRanged.hpp"
UModFilter_DealDamage_IsRanged* UModFilter_DealDamage_IsRanged::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_IsRanged");
    return (UModFilter_DealDamage_IsRanged*)res;
}
