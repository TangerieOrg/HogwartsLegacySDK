#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Instigator_IsPlant.hpp"
UModFilter_DealDamage_Instigator_IsPlant* UModFilter_DealDamage_Instigator_IsPlant::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Instigator_IsPlant");
    return (UModFilter_DealDamage_Instigator_IsPlant*)res;
}
