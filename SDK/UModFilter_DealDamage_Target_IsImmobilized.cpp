#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Target_IsImmobilized.hpp"
UModFilter_DealDamage_Target_IsImmobilized* UModFilter_DealDamage_Target_IsImmobilized::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Target_IsImmobilized");
    return (UModFilter_DealDamage_Target_IsImmobilized*)res;
}
