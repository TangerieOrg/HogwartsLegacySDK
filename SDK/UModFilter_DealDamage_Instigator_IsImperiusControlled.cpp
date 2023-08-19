#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Instigator_IsImperiusControlled.hpp"
UModFilter_DealDamage_Instigator_IsImperiusControlled* UModFilter_DealDamage_Instigator_IsImperiusControlled::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Instigator_IsImperiusControlled");
    return (UModFilter_DealDamage_Instigator_IsImperiusControlled*)res;
}
