#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Instigator_IsTroll.hpp"
UModFilter_DealDamage_Instigator_IsTroll* UModFilter_DealDamage_Instigator_IsTroll::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Instigator_IsTroll");
    return (UModFilter_DealDamage_Instigator_IsTroll*)res;
}
