#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Instigator_IsDisillusioned.hpp"
UModFilter_DealDamage_Instigator_IsDisillusioned* UModFilter_DealDamage_Instigator_IsDisillusioned::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Instigator_IsDisillusioned");
    return (UModFilter_DealDamage_Instigator_IsDisillusioned*)res;
}
