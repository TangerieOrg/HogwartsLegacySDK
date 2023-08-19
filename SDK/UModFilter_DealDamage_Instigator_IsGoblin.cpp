#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Instigator_IsGoblin.hpp"
UModFilter_DealDamage_Instigator_IsGoblin* UModFilter_DealDamage_Instigator_IsGoblin::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Instigator_IsGoblin");
    return (UModFilter_DealDamage_Instigator_IsGoblin*)res;
}
