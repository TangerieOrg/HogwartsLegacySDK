#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Instigator_IsDugbog.hpp"
UModFilter_DealDamage_Instigator_IsDugbog* UModFilter_DealDamage_Instigator_IsDugbog::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Instigator_IsDugbog");
    return (UModFilter_DealDamage_Instigator_IsDugbog*)res;
}
