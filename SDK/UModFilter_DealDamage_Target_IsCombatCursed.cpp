#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Target_IsCombatCursed.hpp"
UModFilter_DealDamage_Target_IsCombatCursed* UModFilter_DealDamage_Target_IsCombatCursed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Target_IsCombatCursed");
    return (UModFilter_DealDamage_Target_IsCombatCursed*)res;
}
