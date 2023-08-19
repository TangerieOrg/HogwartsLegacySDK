#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Instigator_IsWolf.hpp"
UModFilter_DealDamage_Instigator_IsWolf* UModFilter_DealDamage_Instigator_IsWolf::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Instigator_IsWolf");
    return (UModFilter_DealDamage_Instigator_IsWolf*)res;
}
