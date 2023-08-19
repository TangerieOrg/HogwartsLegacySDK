#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Target_IsUnaware.hpp"
UModFilter_DealDamage_Target_IsUnaware* UModFilter_DealDamage_Target_IsUnaware::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Target_IsUnaware");
    return (UModFilter_DealDamage_Target_IsUnaware*)res;
}
