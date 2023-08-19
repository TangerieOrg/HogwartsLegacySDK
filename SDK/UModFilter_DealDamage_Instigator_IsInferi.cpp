#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Instigator_IsInferi.hpp"
UModFilter_DealDamage_Instigator_IsInferi* UModFilter_DealDamage_Instigator_IsInferi::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Instigator_IsInferi");
    return (UModFilter_DealDamage_Instigator_IsInferi*)res;
}
