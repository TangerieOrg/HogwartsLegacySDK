#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Target_IsGoblin.hpp"
UModFilter_DealDamage_Target_IsGoblin* UModFilter_DealDamage_Target_IsGoblin::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Target_IsGoblin");
    return (UModFilter_DealDamage_Target_IsGoblin*)res;
}
