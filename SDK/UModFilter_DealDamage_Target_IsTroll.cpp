#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Target_IsTroll.hpp"
UModFilter_DealDamage_Target_IsTroll* UModFilter_DealDamage_Target_IsTroll::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Target_IsTroll");
    return (UModFilter_DealDamage_Target_IsTroll*)res;
}
