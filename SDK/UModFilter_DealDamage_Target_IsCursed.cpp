#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Target_IsCursed.hpp"
UModFilter_DealDamage_Target_IsCursed* UModFilter_DealDamage_Target_IsCursed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Target_IsCursed");
    return (UModFilter_DealDamage_Target_IsCursed*)res;
}
