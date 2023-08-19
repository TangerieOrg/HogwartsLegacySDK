#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Target_IsEnemy.hpp"
UModFilter_DealDamage_Target_IsEnemy* UModFilter_DealDamage_Target_IsEnemy::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Target_IsEnemy");
    return (UModFilter_DealDamage_Target_IsEnemy*)res;
}
